//#include <stdio.h>
//int  main()
//{
//	char* s1;
//	char s2[10];
//
//		printf("%s %s\n", s1, s2);
//}

//#include <stdio.h>
//int  main()
//{
//	const char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//
//	printf("%s %s\n", s1, s2);
//}

//#include <stdio.h>
//int  main()
//{
//	const char* s1 = "Hello";
//	char s2[10] = "Hello";
//
//		printf("%s %s\n", s1, s2);
//}
//
//#include <stdio.h>
//int  main()
//{
//	char arr[10] = { 'H','E','E','l','l','o' };
//
//	printf("%s\n", arr);
//	printf("%s\n", &arr[0]);
//}

//#include <stdio.h>
//int  main()
//{
//	char arr[10] = { 'H','E','E','l','l','o' };
//
//	printf("%s\n", arr);
//	printf("%s\n", &arr[0]);
//	printf("%s\n", arr + 1);
//	printf("%s\n", &arr[0]+ 1);
//}

//#include <stdio.h>
//int  main()
//{
//	char arr[10] = { 'H','E','E','l','l','o','0','\'};
//
//	printf("%s\n", arr);
//	printf("%s\n", &arr[0]);
//	printf("%s\n", arr + 1);
//	printf("%s\n", &arr[0] + 1);
//}

//#include <stdio.h>
//int  main()
//{
//	char arr[10] = { 'H','E','E','l','l','o','\0'};
//	char* p = arr;
//
//	printf("%s\n", arr);
//	printf("%s\n", p);
//}

//#include <stdio.h>
//int  main()
//{
//	const char arr[10] = { 'H','E','E','l','l','o','\0' };
//	const char* p = arr;
//
//	printf("%s\n", arr);
//	printf("%s\n", p);
//}

//#include <stdio.h>
//int  main()
//{
//	int n = 10;
//	int *p = &n;
//
//	printf("%d %d\n", n, *p)
//}

//#include <stdio.h>
//int gn = 10; // 전역변수 : GD
//
//int  main()
//{
//	const char* s = "Hello"; // s : stack 변수 , "Hello" : gd
//	int n = 10; //stack
//	int* p = &n;
//	static int sn = 10; //sn : 정적변수
//
//	printf("%d %d\n", n, *p)
//}

//#include <stdio.h>
//
//int gn = 10;
//int  main()
//{
//	const char* s = "Hello"; 
//	int n = 10; 
//	int* p = &n;
//	static int sn = 10;
//
//	printf("GD : %p %p %p\n", s, &gn, &sn);
//	printf("stack : %p %p %p\n", &s, &n, &p);
//	 
//}

//#include <stdio.h>
//void f1()
//{
//	int a = 10;
//}
//void f2()
//{
//	int a = 20;
//}
//void f3()
//{
//	int a = 30;
//}
//int main()
//{
//	int m = 1;
//	//변수 유효범위
//	f1();
//	f2();
//	f3();
//
//	printf("%d\n", a)
//}

//#include <stdio.h>
//void f1()
//{
//	int a = 10;
//}
//void f2()
//{
//	int b = 20;
//}
//void f3()
//{
//	int c = 30;
//	// printf("%d\n", m);
//	printf("f3() : g - d\n", g);
//}
//int main()
//{
//	int m = 1;
//	//변수 유효범위
//	f1();
//	f2();
//	f3();
//
//	printf("%d\n", a)
//}

//#include <stdio.h>
//int g = 30
//void f1()
//{
//	int a = 10;
//}
//void f2()
//{
//	int a = 20;
//}
//void f3()
//{
//	int a = 30;
//}
//int main()
//{
//	int m = 1;
//	//변수 유효범위
//	f1();
//	f2();
//	f3();
//
//	printf("%d\n", a)
//}
//
//#include <stdio.h>
//void f1()
//{
//	int a = 10;
//}
//void f2()
//{
//	int b = 20;
//}
//void f3()
//{
//	int c = 30;
//	// printf("%d\n", m
//	printf("f3() : g - 
//}
//int main()
//{
//	int m = 1;
//	//변수 유효범위
//	f1();
//	f2();
//	f3();
//
//	if (n == 1)
//	{
//		int d = 4;
//		printf("if() : d - d\n", d);
//	}
//	//printf("%d\n", a)
//	printf("if() : g - g\n", g)
//}

//#include <stdio.h>
//int g = 30;
//void f1()
//{
//	
//	int a = 10;
//	printf("f1() a:%d\n", a);
//}
//void f2()
//{
//	int b = 20;
//	printf("f2() b:%d\n", b);
//}
//void f3()
//{
//	int c = 30;
//	printf("f3() c:%d\n", c);
//}
//int main()
//{
//	f1();
//	f2();
//	f3();
//
//}

//#include <stdio.h>
//int g = 30;
//void f1()
//{
//
//	int a = 10;
//	printf("f1() a:%d\n", a);
//}
//void f2()
//{
//	int b = 20;
//	printf("f2() b:%d\n", b);
//	f1();
//}
//void f3()
//{
//	int c = 30;
//	printf("f3() c:%d\n", c);
//	f2();
//}
//int main()
//{
//	f3();
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 10;
//
//	int* p = (int*)malloc(4);
//	*p = 10;
//
//
//	printf("%d %d\n", n, *p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 10;
//
//	int* p = (int*)malloc(sizeof(int));
//	*p = 10;
//
//
//	printf("%d %d\n", n, *p);
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	
//	int arr[4] = { 10,20,30,40 };
//
//	int* p = (int*)malloc(16);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//	*p = 10;
//
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//	int arr[4] = { 10,20,30,40 };
//
//	int* p = (int*)malloc(sizeof(int)*4);
//	p[0] = 10;
//	p[1] = 20;
//	p[2] = 30;
//	p[3] = 40;
//
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 4);
//	p[0] = (0+1)*10;
//	p[1] = (1+1)*10;
//	p[2] = (2+1)*10;
//	p[3] = (3+1)*10;
//
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d %d %d %d\n", p[0], p[1], p[2], p[3]);
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 4);
//	for(int i = 0; i < 4; ++i)
//	p[i] = (i + 1) * 10;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%d", p[i]);
//	printf("\n");
//
//	free(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int* AllocInteger(int car)
//{
//	return (int*)malloc(sizeof(int) * car);
//}
//void InitAreay(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%d", p[i]);
//	printf("\n")
//}
//void printAreay(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%d", p[i]);
//	printf("\n")
//}
//void FreeInteger(int* p)
//{
//	free(p);
//}
//int main()
//{
//	int* p = AllocInteger(4);
//
//	InitAreay(p, 4);
//	printAreay(p, 4);
//	
//
//	free(p);
//}

#include <stdio.h>
#include <stdlib.h>
int* AllocInteger(int car)
{
	return (int*)malloc(sizeof(int) * car);
}
void InitAreay(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d", p[i]);
	printf("\n")
}
void printAreay(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d", p[i]);
	printf("\n")
}
void FreeArray(int* p)
{
	free(p);
}
int main()
{
	int* p = AllocArray(4);

	InitAreay(p, 4);
	printAreay(p, 4);


	free(p);
}