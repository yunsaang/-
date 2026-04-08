# include <stdio.h>
void PrintData(int k, int* p)
{
	printf("%d %d\n", k, *p);
	k = 20;
	*p = 20;
}
int main()
{
	int n1 = 10;
	int n2 = 10;
	PrintData(n1, &n2);
	PrintData(n1, &n2);
}

//# include <stdio.h>
//void PrintData(int k, int* p)
//{
//	printf("%d %d\n", k, *p);
//}
//int main()
//{
//	int n1 = 10;
//	int n2 = 10;
//	PrintData(n1, &n2);
//}

//# include <stdio.h>
//void PrintData(int* k)
//{
//	printf("%d\n", *k);
//}
//int main()
//{
//	int n = 10;
//	PrintData(&n);
//}

//# include <stdio.h>
//void PrintData(int k)
//{
//	printf("%d\n", k);
//}
//int main()
//{
//	int n = 10;
//	PrintData(n);
//}

//# include <stdio.h>
//int main()
//{
//	char n = 10;
//	char* pn = &n;
//	char** ppn = &pn;
//
//	printf("%p %p %p\n", &n, pn, ppn);
//	printf("%p %p %p\n", &n - 1, pn - 1, ppn - 1);
//	printf("%p %p %p\n", &n - 2, pn - 2, ppn - 2);
//}

//# include <stdio.h>
//int main()
//{
//	char n = 10;
//	char* pn = &n;
//	char** ppn = &pn;
//
//	printf("%p %p %p\n", &n, pn, ppn);
//	printf("%p %p %p\n", &n + 1, pn + 1, ppn + 1);
//
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	int** ppn = &pn;
//
//	printf("%p %p %p\n", &n, pn, ppn);
//	printf("%p %p %p\n", &n+1, pn+1, ppn+1);
//
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	int** ppn = &pn;
//
//	printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(double));
//	printf("%d %d %d\n", sizeof(char*), sizeof(int*), sizeof(double*)); // 모두 바이트가 갔ㅇ,ㅁ
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	int** ppn = &pn;
//	printf("%d %d %d\n", n, *pn, **ppn);
//	printf("%d %d %d\n", &n, pn, *ppn);
//
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	int** ppn = &pn;
//	printf("%d %d %d\n", n, *pn, **ppn);
//	printf("%d %d %d\n", &n, &*pn, &**ppn);
//
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	int** ppn = &pn;
//	printf("%d %d %d\n", n, *pn, **ppn);
//
//}

//# include <stdio.h>
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	char* pc = &c; //정수값 정수주소
//	int* pn = &n;
//
//	*pc = 20;
//	n = 50;
//
//	printf("%d %d\n", c, n);
//	printf("%p %p\n", pc, pn);
//	printf("%d %d\n", *pc, *pn);
//	printf("%p %p\n", &*pc, &*pn);
//	printf("%d %d\n", *&*pc, *&*pn);
//}

//# include <stdio.h>
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	char* pc = &c; //정수값 정수주소
//	int* pn = &n;
//
//	*pc = 20;
//	n = 50;
//
//	printf("%d %d\n", c, n);
//	printf("%p %p\n", pc, pn);
//	printf("%d %d\n", *pc, *pn);
//	printf("%p %p\n", &*pc, &*pn);
//}


//# include <stdio.h>
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	char* pc = &c; //정수값 정수주소
//	int* pn = &n;
//	*pc = 20;
//	n = 50;
//
//	printf("%d %d\n", c, n);
//	printf("%p %p\n", pc, pn);
//	printf("%d %d\n", pc, pn);
//}

//# include <stdio.h>
//int main()
//{
//	char c = 10; 
//	int n = 10;
//
//	char* pc = &c; //정수값 정수주소
//	int* pn = &n;
//	
//	printf("%d %d\n", c, n);
//	printf("%p %p\n", pc, pn);
//	printf("%d %d\n", pc, pn); 
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//
//	printf("%d %d\n", n, pn);
//	printf("%d %d\n", sizeof(n), sizeof(pn));
//}

//# include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* pn = &n;
//
//	printf("%d %p\n", n, pn);
//}

//# include <stdio.h>
//void printData(int a, int b);
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printData(a, b);// 10, 20
//}
//void printData(int a, int b)
//{
//	printf("%d, %d\n", a, b);
//}
//# include <stdio.h>
//void printData(int a, int b)
//{
//	printf("%d, %d\n", a, b);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//		printData(a, b);// 10, 20
//		
//
//
//}