//#include <stdio.h>
//int main()
//{
//	//정수 -> 참(T) 0아닌 모든 or 거짓(F) : 0
//	//참(T) or 거짓(F) -> 1, 0
//	int a = 10;
//	int b = 2;
//
//	// a = 참
//	// b = 거짓
//	printf("%d\n", a && b);
//	printf("%d\n", a || b);
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//}

//#include <stdio.h>
//void PrintNumbers(int begin, int end)
//{
//	for (int i = begin, i <= end; ++i)
//		printf("%3d", i);
//	printf("\n");
//}
//int main()
//{
//	PrintNumbers(10, 20);
//}

//#include <stdio.h>
//void PrintData(int a, int* b)
//{
//	printf("%d %d\n", a, *b);
//}
//int main()
//{
//	int n = 100;
//
//	PrintData(n, &n)
//}

//#include <stdio.h>
//void PrintData(int a, int* b)
//{
//	printf("%d %d\n", a, *b);
//}
//int main()
//{
//	int n = 100;
//
//	PrintData(n, &n)
//}
// 
//
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn1 = &n;
//	int* pn2 = pn1;
//	int** pn3 = pn2;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pn1 = &a;
//	int* pn2 = &b;
//	int** pp = &pn1;
//}

//#include <stdio.h>
//int main()
//{
//	char n = 10;
//	char* pn = &n;
//	char** ppn = &pn;
//
//	printf("%p %p %p\n", &n, pn, &pn);
//	printf("%p %p %p\n", &n+1, pn+1, &pn+1);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	printf("%p %p\n", &arr[0], &arr[1]);
//	printf("%p %p\n", &arr[0]+1, &arr[1]+1);
//
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//
//	int* pa = NULL;
//
//	pa = &arr[3];
//	
//
//	printf("&d\n",  pa[0]);
//	printf("&d\n", pa[-1]);
//	printf("&d\n", pa[-2]);
//	printf("&d\n", pa[-3]);
//	
//
//}

//#include <stdio.h>
//int main()
//{
//	char a[4] = { 10, 20, 30, 40 };
//	int b[4] = { 10, 20, 30, 40 };
//
//	printf("%p %p\n", a, b);
//	printf("%p %p\n", a + 1, b + 1);
//	printf("%p %p\n", a + 2, b + 2);
//
//
//}

//#include <stdio.h>
//int main()
//{
//	//문자(정수), 문자열(문자집합+\0)
//	printf("%d %c\n", 65, 65);
//	printf("%d %c\n", 'A', 'A');
//}

//#include <stdio.h>
//int main()
//{
//	int n = 65;
//
//	printf("%d %c\n", n, n);
//	
//}

//#include <stdio.h>
//int main()
//{
//	int n = 'A';
//
//	printf("%d %c\n", n, n);
//
//}

//#include <stdio.h>
//int main()
//{
//	int n = 'A';
//
//	printf("%d %c\n", n, n);
//
//}

//#include <stdio.h>
//int main()
//{
//	// "ABC" : 상수(literal) 문자열
//	printf("s\n", "ABC");
//}

//#include <stdio.h>
//int main()
//{
//	// "ABC" : 상수(literal) 문자열
//	printf("s\n", "ABC");
//	printf("%p s\n", "ABC", "ABC");
//}

#include <stdio.h>
int main()
{
	printf("s\n", "ABC");
	printf("%p s\n", "ABC", "ABC");

	const char* s = "ABC";
	printf("s\n", s);
	printf("s\n", s + 1);
}