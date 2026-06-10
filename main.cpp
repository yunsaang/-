//#include <stdio.h>
//int main()
//{
//	return 0; //종료 코드(0)
//}

//#include <stdio.h>
//void* Readfile()
//{
//	return NULL;
//}
//int main()
//{
//	if(NULL == ReadFile()
//		return -1;
//
//		//정상 처리 
//
//	return 0; //종료 코드(0)
//}

//#include <stdio.h>
//void print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	print(a, b);
//	//
//	a = b;
//	b = a;
//	print(a, b);
//}

//#include <stdio.h>
//void print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	print(a, b);
//	Swap(&a, &b);
//	print(a, b);
//}

//#include <stdio.h>
//void Print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	Print(a, b);
//	Swap(&a, &b);
//	Print(a, b);
//}

//#include <stdio.h>
//void Print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int n = 10;
//	int arr[3] = { 1,2,3 };
//
//	printf("%p\n", &n);
//	printf("%p\n", arr);
//	printf("%p\n", Print);
//	printf("%p\n", Swap);
//}

//#include <stdio.h>
//void Print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int n = 10;
//	int* p1 = &n;
//
//	void (*p2)(int, int);
//	p2 = Print;
//
//	int arr[3] = { 1,2,3 };
//
//	printf("%p\n", &n);
//	printf("%p\n", arr);
//	printf("%p\n", Print);
//	printf("%p\n", Swap);
//}

//#include <stdio.h>
//void Print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int n = 10;
//	int* p1 = &n;
//
//	void (*p2)(int, int);
//	p2 = Print;
//
//	int arr[3] = { 1,2,3 };
//
//	printf("%p\n", *p1);
//	printf(1,2);
//	
//}

//#include <stdio.h>
//void Print(int a, int b)
//{
//	printf("%d , %d\n", a, b);
//}
//void Swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10, b = 20;
//
//	Print(a, b);
//	Swap(&a, &b);
//	Print(a, b);
//
//	void (*pPrint)(int a, int b) = Print;
//	void (*pSwap)(int* pa, int* pb) = Swap;
//
//	pPrint(a, b);
//	pSwap(&a, &b);
//	pPrint(a, b);
//}

//#include <stdio.h>
//void PrintData(const int* pa, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("[%d]", pa[i]);
//	printf("\n");
//}
////client
//int main()
//{
//	int a[10] = { 10, 50, 80, 30, 45, 62, 53, 42, 43, 70 };
//	PrintData(a, 10);
//}

//#include <stdio.h>
//void PrintData(const int* pa, int size, void (*pf)(int ))
//{
//	for (int i = 0; i < size; ++i)
//		pf(pa[i]);
//	printf("\n");
//}
////client
//void Print1(int data)
//{
//	if (data % 2 == 0)
//		printf("[%d]", data);
//}
//int main()
//{
//	int a[10] = { 10, 50, 80, 30, 45, 62, 53, 42, 43, 70 };
//	PrintData(a, 10, Print1);
//}

//#include <stdio.h>
////server
//void PrintData(const int* pa, int size, void (*pf)(int))
//{
//	for (int i = 0; i < size; ++i)
//		pf(pa[i]); //server -> client (callback)
//	printf("\n");
//}
////client
//void Print1(int data) //callback function
//{
//	if (data % 2 == 0)
//		printf("[%d]", data);
//}
//void Print2(int data)
//{
//	printf("[%d]", data);
//}
//void Print3(int data)
//{
//	printf("==");
//	printf("[%d]", data);
//	printf("==\n");
//}
//int main()
//{
//	int a[10] = { 10, 50, 80, 30, 45, 62, 53, 42, 43, 70 };
//	PrintData(a, 10, Print1); //client -> server(call)
//	PrintData(a, 10, Print2);
//	PrintData(a, 10, Print3);
//}

//#include <stdio.h>
////server
//int FindData(int* pa, int size, int key)
//{
//	for (int i = 0; i < size; ++i)
//		if (pa[i] == key)
//			return i;
//	return -1;
//}
////client
//int main()
//{
//	int arr[10] = { 5,64,98,25,35,74,69,88,85,27 };
//	int index = FindData(arr, 10, 74);
//
//	if (index != -1)
//	{
//		printf("[%d] : %d\n", index, arr[index]);
//	}
//}

//#include <stdio.h>
////server
//int FindData(int* pa, int size, int key)
//{
//	for (int i = 0; i < size; ++i)
//		if (pa[i] == key)
//			return i;
//	return -1;
//}
////client
//int main()
//{
//	int arr[10] = { 5,64,98,25,35,74,69,88,85,27 };
//	int index = FindData(arr, 10, 74);
//
//	if (index != -1)
//	{
//		printf("[%d] : %d\n", index, arr[index]);
//	}
//}

#include <stdio.h>
//server
int FindData(int* pa, int size, int (*cmp(int))
{
	for (int i = 0; i < size; ++i)
		if (cmp(pa[i]))
			return i;

	return -1;
}
//client
int Predicate1(int key)
{
	return key > 50 && key % 5 == 0;
}
int main()
{
	int arr[10] = { 5,64,98,25,35,74,69,88,85,27 };
	int index = FindData(arr, 10, 74);

	if (index != -1)
	{
		printf("[%d] : %d\n", index, arr[index]);
	}
}