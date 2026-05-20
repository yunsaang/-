
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	const char* s = "Hello";
//	printf("%s\n", "Hello");
//	printf("%s\n", s);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	const char* s = "Hello";
//	char* arr[10] = "Hello";
//
//	printf("%s\n", "Hello");
//	printf("%s\n", s);
//	printf("%s\n", arr);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	const char* s = "Hello";
//	char arr[] = "Hello";
//
//	printf("%s\n", "Hello");
//	printf("%s\n", s);
//	printf("%s\n", arr);
//}

//#include <stdio.h>
//#include <stdlib.h>
//void printfString(const char* s)
//{
//	printf("%s\n", s);
//	//return;
//}
//int main()
//{
//	const char* s = "Hello";
//	char arr[] = "Hello";
//
//	printfString("Hello");
//	printfString(s);
//	printfString(arr);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int* p = NULL;
//
//	p = (int*)malloc(sizeof(int));
//	*p = 100;
//	printf("%d\n", *p);
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = NULL;
//
//	p = (int*)malloc(sizeof(int) * 10);
//	p[0] = 1;
//	p[1] = 2;
//	p[2] = 3;
//	p[3] = 4;
//	p[4] = 5;
//	p[5] = 6;
//	p[6] = 7;
//	p[7] = 8;
//	p[8] = 9;
//	p[9] = 10;
//
//	for (int i = 0; i < 10; ++i)
//		printf("%5d", p[i]);
//	printf("\n");
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char c = 10;
//	int n = 10;
//	
//	//n = (int)c;
//	n = c;
//	printf("%d %d\n", c, n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	n = (int)c; //explicit(명시적) 형식 변환 - 내가
//	//n = c; // implicit(암묵적) 형식 변환 - 컴파일러
//	printf("%d %d\n", c, n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	c = (char)n; //explicit(명시적) 형식 변환 - 내가
//	//n = c; // implicit(암묵적) 형식 변환 - 컴파일러
//	printf("%d %d\n", c, n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char c = 10;
//	int n = 5679; //버그
//
//	c = (char)n; //explicit(명시적) 형식 변환 - 내가
//	//n = c; // implicit(암묵적) 형식 변환 - 컴파일러
//	printf("%d %d\n", c, n);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 10;
//	double d = 1.1;
//
//	d = (double)n; //explicit(명시적) 형식 변환 - 내가
//	//n = c; // implicit(암묵적) 형식 변환 - 컴파일러
//	printf("%d %g\n", n, d);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 10;
//	double d = 1.1;
//
//	//n = (int)d; //explicit(명시적) 형식 변환 - 내가
//	n = d; // implicit(암묵적) 형식 변환 - 컴파일러
//	printf("%d %g\n", n, d);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 65;
//
//	printf("%o %d %x\n", n, n, n);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	//int n = 65;
//	int n = 0x41;
//
//
//	printf("%d %x\n", n, n, );
//	printf("c\n", n );
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int n = 0x44434241;
//	char* p = (char*)(int*)&n;
//	
//	printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]);
//	printf("%c %c %c %c\n", p[0], p[1], p[2], p[3]);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int n = 0x44434241;
//	char* p = (char*)(int*)&n;
//
//	printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]);
//	printf("%c %c %c %c\n", p[0], p[1], p[2], p[3]);
//	printf("%x %c\n", ((char*)&n)[0], ((char*)&n)[0]);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int n = 100;
//	double d = 9.99;
//	int* p1 = &n;
//	double* p2 = &d;
//
//	void* pv;
//
//	pv = &n;
//	pv = &d;
//	printf("%d %g\n", n, d);
//	printf("%d %g\n", *p1, *p2);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int n = 100;
//	double d = 9.99;
//	int* p1 = &n;
//	double* p2 = &d;
//
//	void* pv;
//
//	pv = &n;
//	printf("%d\n", *(int*)pv);
//
//	pv = &d;
//	printf("%g\n", *(double*)pv);
//
//	printf("%d %g\n", n, d);
//	printf("%d %g\n", *p1, *p2);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[4] = { 1, 2, 3, 4 };
//
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]); 
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[4] = { 1, 2, 3, 4 };
//
//	arr[0] = arr[0] * 10;
//	arr[1] = arr[1] * 10;
//	arr[2] = arr[2] * 10;
//	arr[3] = arr[3] * 10;
//
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[4] = { 1, 2, 3, 4 };
//
//	arr[0] * 10;
//	arr[1] * 10;
//	arr[2] * 10;
//	arr[3] * 10;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[4] = { 1, 2, 3, 4 };
//
//	for (int i = 0; i < 4; ++i)
//		arr[i] * 10;
//	
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//
//	int arr[4] = { 0 };
//
//	for (int i = 0; i < 4; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		arr[i] *= 10;
//
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define CAPACITY 4
//
//int main()
//{
//
//	int arr[CAPACITY] = { 0 };
//
//	for (int i = 0; i < CAPACITY; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < CAPACITY; ++i)
//		arr[i] *= 10;
//
//
//	for (int i = 0; i < CAPACITY; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define CAPACITY 4
//
//int main()
//{
//	int CAPACITY = 15;
//
//	int arr[CAPACITY] = { 0 };
//	for (int i = 0; i < CAPACITY; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < CAPACITY; ++i)
//		arr[i] *= 10;
//
//
//	for (int i = 0; i < CAPACITY; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int capacity = 15;
//
//	printf("input integer :");
//	printf("%d", &capacity);
//	
//	printf("capcaity : %d\n", capacity);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int capacity = 15;
//
//	printf("input integer :");
//	scanf("%d", &capacity);
//
//    int* arr = (int*)malloc(sizeof(int) * capacity);
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] *= 10;
//
//
//	for (int i = 0; i < capacity; ++i)
//		printf("%d\n", arr[i]);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int capacity = 15;
//
//	printf("input integer :");
//	scanf("%d", &capacity);
//
//	int* arr = (int*)malloc(sizeof(int) * capacity);
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] *= 10;
//
//
//	for (int i = 0; i < capacity; ++i)
//		printf("%d\n", arr[i]);
//	free(arr)
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a[5];
//	for (int i = 0; i < 5; ++i)
//		a[i] = 1 + i;
//
//	int* b = NULL;
//	b = (int*)malloc(sizeof(int) * 5);
//	for (int i = 0; i < 5; ++i)
//		b[i] = 1 + i;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d %d\n", a[i], b[i]);
//
//
//	free(b);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int max1 = 5
//	int a[max1]; //<= 상수만
//	for (int i = 0; i < 5; ++i)
//		a[i] = 1 + i;
//
//	int max2 = 5;
//	int* b = NULL;
//	b = (int*)malloc(sizeof(int) * max2);
//	for (int i = 0; i < 5; ++i)
//		b[i] = 1 + i;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d %d\n", a[i], b[i]);
//
//
//	free(b);
//}

#include <stdio.h>
#include <stdlib.h>
int Add(int a, int b)
{
	return a + b;
}
void PrintData(int result)
{
	printf("%d\n", result);
}
int main()
{
	int a = 10;
	int b = 20;

	int result = Add(a, b);
	PrintData(result)
}