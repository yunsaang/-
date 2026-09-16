//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	int a = 10;
//	Point pt = { 0,0 };
//
//}

//#include <stdio.h>
//struct Point // 구조체 정의
//{
//	int x;
//	int y;
//};
//struct PointD // 구조체 정의
//{
//	double x;
//	double y;
//};
//int main()
//{
//	int a = 10; // 정수 형식 a 변수
//	Point pt = { 0,0 }; // point 형식 pt 변수
//	PointD pt2 = { 0.2,0.75 }; // point 형식 pt 변수
//
//	printf("%d\n", a);
//	printf("%d, %d\n", pt.x, pt.y);
//	printf("%g, %g\n", pt2.x, pt2.y);
//
//
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int x1 = 2;
//	int y1 = 2;
//	int x2 = 4;
//	int y2 = 1;
//	int x3 = 4;
//	int y3 = 4;
//
//	printf("%d, %d\n", x1, y1);
//	printf("%d, %d\n", x2, y2);
//	printf("%d, %d\n", x3, y3);
//
//
//
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	Point pt1 = { 2,2 };
//	Point pt2 = { 4,1 };
//	Point pt3 = { 4,4 };
//	Point ptArray[3] = { {1,2}, {5,4}, {7,9} };
//
//
//	printf("%d, %d\n", pt1.x, pt1.y);
//	printf("%d, %d\n", pt2.x, pt2.y);
//	printf("%d, %d\n", pt3.x, pt3.y);
//	printf("%d, %d\n", ptArray[0].x, ptArray[0].y);
//	printf("%d, %d\n", ptArray[1].x, ptArray[1].y);
//	printf("%d, %d\n", ptArray[2].x, ptArray[2].y);
//
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	Point pt1 = { 2,2 };
//	Point pt2 = { 4,1 };
//	Point pt3 = { 4,4 };
//	Point ptArray[3] = { {1,2}, {5,4}, {7,9} };
//
//
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(Point));
//	printf("%d\n", sizeof(pt1.x));
//	printf("%d\n", sizeof(pt1));
//
//
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint(Point pt)
//{
//   printf("(%d %d)\n", pt.x, pt.y);
//}
//int main()
//{
//	Point pt1 = { 2,2 };
//
//	printf("(%d %d)\n", pt1.x, pt1.y);
//	printf("(%d %d)\n", pt1.x, pt1.y);
//	PrintPoint(pt1);
//	PrintPoint(pt1);
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint(Point pt)
//{
//	printf("(%d %d)\n", pt.x, pt.y);
//}
//int main()
//{
//	Point pt1 = { 2,2 };
//
//	PrintPoint(pt1);
//	PrintPoint(pt1);
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint(Point* p)
//{
//	printf("(%d %d)\n", p->x, p->y);
//}
//int main()
//{
//	Point pt1 = { 2,2 };
//
//	PrintPoint(&pt1);
//	PrintPoint(&pt1);
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//void PrintPoint(Point* p)
//{
//	printf("(%d %d)\n", p->x, p->y);
//}
//void ResetPoint(Point* target, int x, int y)
//{
//	target->x = x;
//	target->y = y;
//	// _log_...
//}
//int main()
//{
//	Point pt1 = { 2,2 };
//
//
//	PrintPoint(&pt1);
//
//	//pt1 = { 5,9 };
//	ResetPoint(&pt1, 5, 9);
//
//	PrintPoint(&pt1);
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{ 
//	Point pt = { 1,2 };
//	Point* p = &pt;
//
//	printf("%d, %d\n", pt.x, pt.y);
//	printf("%d, %d\n", (&pt)->x, (&pt)->y);
//	printf("%d, %d\n", p->x, p->y);
//	printf("%d, %d\n", (*p).x, (*p).y);
//

#include <stdio.h>
struct Point
{
	int x;
	int y;
};
int main()
{
	Point pt = { 1,2 };
	Point* p = &pt;
	Point* p2 = &pt;
	Point* p3 = p;


	printf("%d, %d\n", pt.x, pt.y);
	printf("%d, %d\n", (&pt)->x, (&pt)->y);
	printf("%d, %d\n", p->x, p->y);
	printf("%d, %d\n", p2->x, p2->y);
	printf("%d, %d\n", p3->x, p3->y);
	
}