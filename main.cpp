#include <stdio.h>
void PrintArray(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%5d", p[i]);
	printf("\n");
}
int main()
{
	int arr[4] = { 10, 20, 30, 40 };

	PrintArray(arr, 4);
	PrintArray(arr, 4);
	PrintArray(arr, 4);
	PrintArray(arr + 2, 2);
	PrintArray(arr, 2);
}


//#include <stdio.h>
//void PrintArray(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", p[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	PrintArray(arr, 4);
//	PrintArray(arr, 4);
//	PrintArray(arr, 4);
//	PrintArray(arr + 2, 2);
//	PrintArray(arr, 2);
//}

//#include <stdio.h>
//void PrintArray(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", p[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	PrintArray(arr, 4);
//	
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", arr[i]);
//	printf("\n");
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[2] = { 10,20 };
//	int* p = arr;
//
//	printf("%d %d\n", arr[0], p[0]);
//	printf("%d %d\n", arr[1], p[1]);
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10,20,30,40 };
//	int* p = arr; //&arr[0]
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", arr[i]);
//	printf("\n");
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", p[i]);
//	printf("\n");
//}

//#include <stdio.h> 
//int main()
//{
//	short b[2];
//	short* p = b;
//
//	b[0] = 1;
//	b[1] = 2;
//
//	printf("%p %p\n", p, &p[0]);
//	printf("%p %p\n", p + 1, &p[1]);
//}

//#include <stdio.h> 
//int main()
//{
//	short b[2];
//
//	b[0] = 1;
//	b[1] = 2;
//
//	printf("%p %p\n", b, &b[0]);
//	printf("%p %p\n", b + 1, &b[1]);
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%d &d\n", arr[0], *arr);
//	printf("%d &d\n", arr[1], *(arr+1));
//	printf("%d &d\n", arr[2], *(arr+2));
//	printf("%d &d\n", arr[3], *(arr+3));
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = &arr[0];
//
//	printf("%d &d\n", arr[0], p[0]);
//	printf("%d &d\n", arr[1], p[1]);
//	printf("%p &p\n", &arr[2], &p[2]);
//	printf("%d &d\n", arr[3], p[3]);
//}
// 
//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = &arr[0];
//
//	printf("%p %p &p\n", &arr[0], p, arr);
//	printf("%p %p &p\n", &arr[0] + 1, p + 1, arr + 1);
//
//	printf("%d &d\n", arr[0], p[0]);
//	printf("%d &d\n", arr[1], p[1]);
//	printf("%d &d\n", arr[2], p[2]);
//	printf("%d &d\n", arr[3], p[3]);

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = &arr[0];
//
//	printf("%p %p &p\n", &arr[0], p, arr);
//
//	printf("%d &d\n", arr[0], p[0]);
//	printf("%d &d\n", arr[1], p[1]);
//	printf("%d &d\n", arr[2], p[2]);
//	printf("%d &d\n", arr[3], p[3]);
//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL;
//
//	printf("%d &d\n", arr[0], *(p + 0));
//	printf("%d &d\n", arr[0], *(p + 1));
//	printf("%d &d\n", arr[0], *(p + 2));
//	printf("%d &d\n", arr[0], *(p + 3));
//
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL;
//
//	p = &arr[0];
//
//	printf("&p\n", &arr[0], p);
//	printf("&p\n", &arr[1], p + 1);
//	printf("&p\n", &arr[2], p + 2);
//	printf("&p\n", &arr[3], p + 3);
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL;
//
//	p = &arr[2];
//
//	printf("%d\n", *p);
//	printf("&p\n", &arr[0]);
//	printf("&p\n", &arr[1]);
//	printf("&p\n", &arr[2]);
//	printf("&p\n", &arr[3]);
//}


//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL;
//
//	p = &arr[0];
//	printf("%d\n", *p);
//	printf("&p\n", &arr[0]);
//	printf("&p\n", &arr[1]);
//	printf("&p\n", &arr[2]);
//	printf("&p\n", &arr[3]);
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	printf("&p\n", &arr[0]);
//	printf("&p\n", &arr[1]);
//	printf("&p\n", &arr[2]);
//	printf("&p\n", &arr[3]);
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%d %p %p\n", arr[0], &arr[0], &arr[0] + 0);
//	printf("%d %p %p\n", arr[1], &arr[1], &arr[0] + 1);
//	printf("%d %p %p\n", arr[2], &arr[2], &arr[0] + 2);
//	printf("%d %p %p\n", arr[3], &arr[3], &arr[0] + 3);
//	printf("\n");
//}

//#include <stdio.h> 
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%d %p\n", arr[0], &arr[0]);
//	printf("%d %p\n", arr[1], &arr[1]);
//	printf("%d %p\n", arr[2], &arr[2]);
//	printf("%d %p\n", arr[3], &arr[3]);
//	printf("\n");
//}

//#include <stdio.h> 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("\n");
//
//	for(int i = 0 ; i < 4 ; ++i)
//        printf("%d\n", arr[i]);
//	printf("\n");
//		//배열(array)
//}

//#include <stdio.h> 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("\n");
//
//
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	printf("\n")
//		//배열(array)
//}

//#include <stdio.h> 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("\n")
//	//배열(array)
//}

//#include <stdio.h> //여기
//int main()
//{
//	int n = 10;
//	int** p1 = &n;
//	int** p2 = &n;
//	int** p3 = p1;
//	int** pp = &p1;
//
//	printf("%d %d %d %d %d\n", n, *p1, *p2, *p3, **pp);
//	printf("%p %p %p %p %p\n", &n, &*p1, &*p2, &*p3, &**pp);
//	
//
//}


//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int** p1 = &n;
//	int** p2 = &n;
//	int** p3 = p1;
//	int** pp = &p1;
//
//
//	int k = 20;
//	p3 = &k;
//	p = &p3;
//	printf("%d %d %d %d\n", n, *p1, *p2, *p3, **pp);
//	printf("%d %d %d %d\n", &n, p1, p2, p3, *pp);
//
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int** p1 = &n;
//	int** p2 = &n;
//	int** p3 = p1;
//	int** pp = &p1;
//
//	printf("%d %d %d %d\n", n, *p1, *p2, *p3, **pp);
//	printf("%d %d %d %d\n", &n, p1, p2, p3, *pp);
//
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int** p1 = &n;
//	int** p2 = &n;
//	int** p3 = p1;
//
//	printf("%d %d %d %d\n", n, *p1, *p2, *p3);
//	printf("%d %d %d %d\n", &n, p1, p2, p3);
//
//}