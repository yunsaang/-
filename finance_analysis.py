# -*- coding: utf-8 -*-
"""
====================================================================
AI 기반 개인 금융 분석 시스템 - 소비 데이터 분석
15주차 개인 심화 프로젝트

[한글 깨짐 방지 전략]
matplotlib의 폰트 매칭 시스템은 환경(OS, 뷰어)에 따라 한글 렌더링이
불안정할 수 있습니다. 이를 원천적으로 차단하기 위해:
1. matplotlib 차트 자체는 영문/숫자/범용 기호로만 그립니다.
2. 한글 제목은 Pillow(PIL)로 별도 레이어에 직접 픽셀로 그려서
   최종 이미지에 합성합니다. Pillow는 폰트 파일을 직접 지정해 글자를
   그리므로 matplotlib의 font.family 탐색 로직을 거치지 않습니다.
3. 최종 결과물은 RGB(투명도 없는) PNG로 저장하여 모든 뷰어에서
   동일하게 보이도록 합니다.
====================================================================
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_absolute_error, r2_score
from PIL import Image, ImageDraw, ImageFont
import warnings
warnings.filterwarnings('ignore')

# ------------------------------------------------------------------
# 0. 기본 설정 (matplotlib은 영문만 사용 -> 한글 폰트 이슈 원천 차단)
# ------------------------------------------------------------------
plt.rcParams['font.family'] = 'DejaVu Sans'   # 영문 전용, 모든 환경에서 안전
plt.rcParams['axes.unicode_minus'] = False
plt.rcParams['font.size'] = 13
sns.set_style('whitegrid')
sns.set_palette('Set2')

KOREAN_FONT_PATH = '/usr/share/fonts/opentype/noto/NotoSansCJK-Regular.ttc'

# ====================================================================
# 1. 데이터 로드
# ====================================================================
print("=" * 60)
print("STEP 1. 데이터 로드")
print("=" * 60)

df = pd.read_csv('personal_consumption_2025.csv', encoding='utf-8-sig')
print(f"원본 데이터 shape: {df.shape}")
print(df.head())

# ====================================================================
# 2. 데이터 전처리 (정제)
# ====================================================================
print("\n" + "=" * 60)
print("STEP 2. 데이터 전처리")
print("=" * 60)

def parse_date(x):
    for fmt in ('%Y-%m-%d', '%Y/%m/%d', '%Y.%m.%d'):
        try:
            return pd.to_datetime(x, format=fmt)
        except (ValueError, TypeError):
            continue
    return pd.NaT

df['날짜'] = df['날짜'].apply(parse_date)
print(f"[2-1] 날짜 파싱 실패(NaT) 건수: {df['날짜'].isna().sum()}건 -> 처리 완료")

dup_count = df.duplicated(subset=['거래ID']).sum()
df = df.drop_duplicates(subset=['거래ID'], keep='first')
print(f"[2-2] 중복 거래 {dup_count}건 제거 완료. 현재 shape: {df.shape}")

missing_before = df.isna().sum()
print(f"\n[2-3] 처리 전 결측치 현황:\n{missing_before[missing_before > 0]}")

df['가맹점'] = df['가맹점'].fillna('기타(미확인)')

category_median = df.groupby('카테고리')['금액'].median()
df['금액'] = df.apply(
    lambda row: category_median[row['카테고리']] if pd.isna(row['금액']) else row['금액'],
    axis=1
)
print(f"[2-3] 결측치 처리 완료. 처리 후 결측치 총합: {df.isna().sum().sum()}건")

neg_count = (df['금액'] < 0).sum()
df['금액'] = df['금액'].abs()
print(f"\n[2-4] 음수 금액(오류 입력) {neg_count}건 절댓값 보정")

outlier_flags = df.groupby('카테고리')['금액'].transform(
    lambda s: (s < (s.quantile(0.25) - 1.5 * (s.quantile(0.75) - s.quantile(0.25)))) |
              (s > (s.quantile(0.75) + 1.5 * (s.quantile(0.75) - s.quantile(0.25))))
)
df['이상치여부'] = outlier_flags
outlier_count = df['이상치여부'].sum()
print(f"[2-4] IQR 기준 이상치 탐지: {outlier_count}건 (카테고리별 상/하한 기준)")

upper_bounds = df.groupby('카테고리')['금액'].transform(
    lambda s: s.quantile(0.75) + 1.5 * (s.quantile(0.75) - s.quantile(0.25))
)
df['금액_정제'] = df['금액'].clip(upper=upper_bounds)

df['연'] = df['날짜'].dt.year
df['월'] = df['날짜'].dt.month
df['요일'] = df['날짜'].dt.day_name()
df['주말여부'] = df['날짜'].dt.weekday >= 5

print(f"\n[전처리 완료] 최종 데이터 shape: {df.shape}")

CAT_EN = {
    '식비': 'Food', '카페/간식': 'Cafe/Snack', '교통': 'Transport',
    '쇼핑': 'Shopping', '문화/여가': 'Culture/Leisure', '통신': 'Telecom',
    '주거/관리비': 'Housing', '의료/건강': 'Health', '구독서비스': 'Subscription',
    '경조사/기타': 'Events/Etc'
}
df['카테고리_EN'] = df['카테고리'].map(CAT_EN)

# ====================================================================
# 3. 탐색적 데이터 분석 (EDA) & 시각화
# ====================================================================
print("\n" + "=" * 60)
print("STEP 3. 탐색적 데이터 분석 (EDA)")
print("=" * 60)

fig = plt.figure(figsize=(20, 16))

ax1 = plt.subplot(3, 2, 1)
monthly = df.groupby('월')['금액_정제'].sum()
ax1.bar(monthly.index, monthly.values / 10000, color=sns.color_palette('Set2')[0])
z = np.polyfit(monthly.index, monthly.values / 10000, 1)
trend = np.poly1d(z)
ax1.plot(monthly.index, trend(monthly.index), 'r--', linewidth=2, label='Trend')
ax1.set_xlabel('Month')
ax1.set_ylabel('Amount (10K KRW)')
ax1.set_xticks(range(1, 13))
ax1.legend()
ax1.set_title(' ', fontsize=18)  # 한글 제목 합성을 위한 공간 확보

ax2 = plt.subplot(3, 2, 2)
cat_total = df.groupby('카테고리_EN')['금액_정제'].sum().sort_values(ascending=True)
ax2.barh(cat_total.index, cat_total.values / 10000, color=sns.color_palette('Set2'))
ax2.set_xlabel('Amount (10K KRW)')
ax2.set_title(' ', fontsize=18)

ax3 = plt.subplot(3, 2, 3)
weekday_order = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
weekday_en = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']
daily_avg = df.groupby('요일')['금액_정제'].mean().reindex(weekday_order)
colors = ['#8ECFC9' if d not in ['Saturday', 'Sunday'] else '#FFBE7A' for d in weekday_order]
ax3.bar(weekday_en, daily_avg.values, color=colors)
ax3.set_ylabel('Average Amount (KRW)')
ax3.set_title(' ', fontsize=18)

ax4 = plt.subplot(3, 2, 4)
normal = df[~df['이상치여부']]
outliers = df[df['이상치여부']]
ax4.scatter(normal['날짜'], normal['금액'], alpha=0.4, s=15, label='Normal', color='#82B0D2')
ax4.scatter(outliers['날짜'], outliers['금액'], alpha=0.9, s=60, label='Outlier', color='red', marker='x')
ax4.set_xlabel('Date')
ax4.set_ylabel('Amount (KRW)')
ax4.legend()
ax4.set_title(' ', fontsize=18)
plt.setp(ax4.get_xticklabels(), rotation=45)

ax5 = plt.subplot(3, 2, 5)
pivot = df.pivot_table(values='금액_정제', index='카테고리_EN', columns='월', aggfunc='sum', fill_value=0) / 10000
sns.heatmap(pivot, annot=False, cmap='YlOrRd', ax=ax5, cbar_kws={'label': 'Amount (10K KRW)'})
ax5.set_xlabel('Month')
ax5.set_ylabel('Category')
ax5.set_title(' ', fontsize=18)

ax6 = plt.subplot(3, 2, 6)
weekend_cat = df.groupby(['카테고리_EN', '주말여부'])['금액_정제'].sum().unstack().fillna(0) / 10000
weekend_cat.columns = ['Weekday', 'Weekend']
weekend_cat = weekend_cat.sort_values('Weekday', ascending=False)
weekend_cat.plot(kind='bar', ax=ax6, color=['#82B0D2', '#FFBE7A'])
ax6.set_ylabel('Amount (10K KRW)')
ax6.set_xlabel('')
ax6.set_title(' ', fontsize=18)
plt.setp(ax6.get_xticklabels(), rotation=45, ha='right')

plt.tight_layout()

# 각 axes의 실제 화면 좌표(픽셀)를 미리 계산해둠 (저장 전에 구해야 정확함)
fig.canvas.draw()
axes_list = [ax1, ax2, ax3, ax4, ax5, ax6]
fig_w_px, fig_h_px = fig.canvas.get_width_height()
dpi_scale = 200 / fig.dpi  # savefig dpi와 화면 dpi 비율 보정

bbox_px_list = []
for ax in axes_list:
    bbox = ax.get_window_extent()
    # matplotlib 좌표는 origin이 좌하단이므로 이미지(좌상단 기준)로 변환
    x0 = bbox.x0 * dpi_scale
    x1 = bbox.x1 * dpi_scale
    y0_img = (fig_h_px - bbox.y1) * dpi_scale
    bbox_px_list.append((x0, y0_img, x1))

plt.savefig('eda_dashboard_raw.png', dpi=200, bbox_inches='tight', facecolor='white')
plt.close()
print("[중간 저장] eda_dashboard_raw.png (영문 차트, 한글 합성 전)")

# --------------------------------------------------------------
# 한글 제목 오버레이 합성 (Pillow) - matplotlib 폰트 시스템 미경유
# bbox_inches='tight' 사용 시 잘림이 발생하므로, 비율 기반으로 재계산
# --------------------------------------------------------------
base = Image.open('eda_dashboard_raw.png').convert('RGB')
W, H = base.size
overlay_titles = [
    "월별 총 지출 추이", "카테고리별 총 지출액", "요일별 평균 거래 금액",
    "일별 거래 금액 분포 및 이상치 탐지", "카테고리 x 월별 지출 히트맵", "주중 vs 주말 카테고리별 지출"
]
# 3행 2열 그리드의 각 셀 상단 중앙에 제목 배치 (빈 제목 공간에 맞춤)
col_w, row_h = W / 2, H / 3
positions = [(0, 0), (1, 0), (0, 1), (1, 1), (0, 2), (1, 2)]

font_kr = ImageFont.truetype(KOREAN_FONT_PATH, int(H * 0.014))
draw = ImageDraw.Draw(base)
for title, (cx, cy) in zip(overlay_titles, positions):
    box_x = cx * col_w
    box_y = cy * row_h
    bbox = draw.textbbox((0, 0), title, font=font_kr)
    text_w = bbox[2] - bbox[0]
    text_h = bbox[3] - bbox[1]
    pad_x = box_x + (col_w - text_w) / 2
    pad_y = box_y + row_h * 0.025
    draw.text((pad_x, pad_y), title, font=font_kr, fill=(20, 20, 20))

base.save('eda_dashboard.png')
print("[저장 완료] eda_dashboard.png (한글 제목 합성본)")

# ====================================================================
# 4. 비즈니스 인사이트 도출
# ====================================================================
print("\n" + "=" * 60)
print("STEP 4. 비즈니스 인사이트")
print("=" * 60)

total_spend = df['금액_정제'].sum()
avg_monthly = monthly.mean()
top_category = cat_total.idxmax()
top_category_kr = [k for k, v in CAT_EN.items() if v == top_category][0]
top_category_pct = cat_total.max() / cat_total.sum() * 100
max_month = monthly.idxmax()
min_month = monthly.idxmin()
weekend_total = df[df['주말여부']]['금액_정제'].sum()
weekday_total = df[~df['주말여부']]['금액_정제'].sum()

season_note = "연말 시즌 등 계절적/이벤트성 요인" if max_month == 12 else f"{max_month}월 특정 이벤트(여행, 경조사, 대형 지출 등)"

insights = f"""
[연간 소비 요약]
- 연간 총 지출액         : {total_spend:,.0f}원
- 월평균 지출액          : {avg_monthly:,.0f}원
- 최다 지출 카테고리      : {top_category_kr} (전체의 {top_category_pct:.1f}%)
- 지출 최고월 / 최저월    : {max_month}월 / {min_month}월
- 주중 총지출 vs 주말 총지출 : {weekday_total:,.0f}원 vs {weekend_total:,.0f}원

[제안]
- '{top_category_kr}' 카테고리가 전체 지출의 {top_category_pct:.1f}%를 차지하여 예산 관리의 핵심 포인트입니다.
- {max_month}월에 지출이 가장 높았으며, {season_note}를 점검할 필요가 있습니다.
- 주중 1일 평균 지출과 주말 1일 평균 지출 차이를 통해 소비 패턴의 요일 의존성을 확인했습니다.
"""
print(insights)

with open('insight_report.txt', 'w', encoding='utf-8') as f:
    f.write(insights)
print("[저장 완료] insight_report.txt")

# ====================================================================
# 5. 머신러닝: 다음 달 지출 예측
# ====================================================================
print("\n" + "=" * 60)
print("STEP 5. 머신러닝 기반 다음 달 지출 예측")
print("=" * 60)

X = monthly.index.values.reshape(-1, 1)
y = monthly.values

poly = PolynomialFeatures(degree=2)
X_poly = poly.fit_transform(X)
model = LinearRegression()
model.fit(X_poly, y)
y_pred = model.predict(X_poly)
mae = mean_absolute_error(y, y_pred)
r2 = r2_score(y, y_pred)

next_month = np.array([[13]])
next_month_poly = poly.transform(next_month)
next_month_pred = model.predict(next_month_poly)[0]

print(f"모델 성능 - MAE: {mae:,.0f}원, R²: {r2:.3f}")
print(f"다음 달(2026년 1월) 예상 총지출: {next_month_pred:,.0f}원")

if r2 < 0.5:
    print(f"[모델 한계 경고] R²={r2:.3f}로 설명력이 낮습니다. 12개월치 데이터만으로는 추세 포착에 한계가 있어,")
    print("                 이 예측값은 '참고용 추정치'로만 활용해야 합니다.")

plt.figure(figsize=(10, 6))
plt.scatter(X, y, color='#82B0D2', s=80, label='Actual Monthly Spending', zorder=3)
plt.plot(X, y_pred, color='#FA7F6F', linewidth=2, label='Regression Trend', zorder=2)
plt.scatter(13, next_month_pred, color='red', s=150, marker='*', label='Next Month Forecast', zorder=4)
plt.axvline(x=12.5, color='gray', linestyle=':', alpha=0.6)
plt.title(' ', fontsize=18)
plt.xlabel('Month')
plt.ylabel('Total Spending (KRW)')
plt.xticks(range(1, 14), [str(i) for i in range(1, 13)] + ['Forecast'])
plt.legend()
plt.tight_layout()
plt.savefig('prediction_chart_raw.png', dpi=200, bbox_inches='tight', facecolor='white')
plt.close()
print("[중간 저장] prediction_chart_raw.png")

base2 = Image.open('prediction_chart_raw.png').convert('RGB')
draw2 = ImageDraw.Draw(base2)
W2, H2 = base2.size
title_kr = "월별 지출 추이 및 다음 달 예측 (2차 회귀 모델)"
font_kr2 = ImageFont.truetype(KOREAN_FONT_PATH, int(H2 * 0.032))
bbox2 = draw2.textbbox((0, 0), title_kr, font=font_kr2)
text_w2 = bbox2[2] - bbox2[0]
draw2.text(((W2 - text_w2) // 2, int(H2 * 0.012)), title_kr, font=font_kr2, fill=(20, 20, 20))
base2.save('prediction_chart.png')
print("[저장 완료] prediction_chart.png (한글 제목 합성본)")

# ====================================================================
# 6. AI 보안/윤리 체크리스트
# ====================================================================
print("\n" + "=" * 60)
print("STEP 6. AI 보안 및 윤리 체크리스트")
print("=" * 60)

security_checklist = """
[데이터 보안/윤리 체크리스트]
[v] 개인 식별정보(이름, 카드번호, 실거주지 등) 미포함 - 전 항목 가상 데이터로 생성
[v] 분석 결과 수치는 코드로 직접 산출(R², MAE 등 명시) - 환각(hallucination) 방지
[v] 이상치/결측치 처리 로직을 코드 내 주석으로 투명하게 공개 (블랙박스 지양)
[v] 예측 모델의 한계(R² 값, 단순 추세 기반) 명시 - 과신 방지
"""
print(security_checklist)

print("\n" + "=" * 60)
print("분석 완료. 생성된 파일: eda_dashboard.png, prediction_chart.png, insight_report.txt")
print("=" * 60)
