//#include <stdio.h>
//struct point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	point pt1 = { 1,2 };
//	point pt2 = { 4,5 };
//
//	printf("%d %d\n", pt1.x, pt1.y);
//	printf("%d %d\n", pt2.x, pt2.y);
//
//}

//#include <stdio.h>
//struct point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	point pt1 = { 1,2 };
//	point pt2 = { 4,5 };
//	point* p1 = NULL, *p2 = NULL;
//
//	p1 = &pt1;
//	p2 = &pt2;
//
//
//	printf("%d\n", sizeof(pt1));
//	printf("%d\n", sizeof(p1));
//	printf("%d %d\n", pt1.x, pt1.y);
//	printf("%d %d\n", pt2.x, pt2.y);
//	printf("%d %d\n", p1->x, p1->y);
//	printf("%d %d\n", p2->x, p2->y);

//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point pt)
//{
//	printf("%d, %d\n", pt.x, pt.y);
//}
//int main()
//{
//	Point pt1 = { 1,2 };
//	Point pt2 = { 4,5 };
//	Point* p1 = &pt1, * p2 = &pt2;
//
//	PrintPoint(pt1);
//	PrintPoint(pt2);
//	PrintPoint(*p1);
//	PrintPoint(*p2);
//}


//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point* p)
//{
//	printf("%d, %d\n", p->x, p->y);
//}
//int main()
//{
//	Point pt1 = { 1,2 };
//	Point pt2 = { 4,5 };
//	Point* p1 = &pt1, * p2 = &pt2;
//
//	PrintPoint(&pt1);
//	PrintPoint(&pt2);
//	PrintPoint(p1);
//	PrintPoint(p2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point* p)
//{
//	printf("%d, %d\n", p->x, p->y);
//}
//int main()
//{
//	Point* p1 = (Point*) malloc(sizeof(Point));
//	Point* p2 = (Point*) malloc(sizeof(Point));
//
//	p1->x = 1;
//	p1->y = 2;
//	p2->x = 4;
//	p2->y = 5;
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//typedef Point* PPoint;
//
//void PrintPoint(PPoint p)
//{
//	printf("%d, %d\n", p->x, p->y);
//}
//int main()
//{
//	PPoint p1 = (PPoint)malloc(sizeof(Point));
//	PPoint p2 = (PPoint)malloc(sizeof(Point));
//
//	p1->x = 1;
//	p1->y = 2;
//	p2->x = 4;
//	p2->y = 5;
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//typedef Point* PPoint;
//
//void SetPoint(PPoint p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(PPoint p)
//{
//	printf("%d, %d\n", p->x, p->y);
//}
//int main()
//{
//	PPoint p1 = (PPoint)malloc(sizeof(Point));
//	PPoint p2 = (PPoint)malloc(sizeof(Point));
//
//	SetPoint(p1, 1, 2);
//	SetPoint(p2, 4, 5);
//
//	
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point
//{
//	int x;
//	int y;
//};
//typedef Point* PPoint;
//
//void SetPoint(PPoint p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//}
//void PrintPoint(PPoint p)
//{
//	printf("%d, %d\n", p->x, p->y);
//}
//PPoint AllocPoint()
//{
//	PPoint P = (PPoint)malloc(sizeof(Point));
//	return P;
//}
//void FreePoint(PPoint p)
//{
//	free(p);
//}
//int main()
//{
//	PPoint p1 = AllocPoint();
//	PPoint p2 = AllocPoint();
//
//
//	SetPoint(p1, 1, 2);
//	SetPoint(p2, 4, 5);
//
//
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//
//	FreePoint(p1);
//	FreePoint(p2);
//
//}

//#include <stdio.h> ///////////////////// 매모리 그림 heap는 "hong" "010-1234-1111"
//#include <stdlib.h>
//#include <string.h>
////struct Person
////{
////	char name[20];
////	char phone[20];
////};
//struct Person
//{
//	char* name;
//	char* phone;
//
//};
//int main()
//{
//	Person per1 = { NULL,NULL };
//
//	per1.name = (char*)malloc(strlen("hong") + 1);
//	strcpy(per1.name, "hong");
//	per1.phone = (char*)malloc(strlen("010-1234-1111") + 1);
//	strcpy(per1.phone, "010-1234-1111");
//	
//
//
//	printf("name : %s, phone : %s\n", per1.name, per1.phone);
//
//
//	free(per1.name);
//	free(per1.phone);
//}

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
struct Person
{
	char name[20];
	char phone[20];
};
//struct Person
//{
//	char* name;
//	char* phone;
//
//};
int main()
{
	Person per1;


	strcpy(per1.name, "hong");
	strcpy(per1.phone, "010-1234-1111");



	printf("name : %s, phone : %s\n", per1.name, per1.phone);
}