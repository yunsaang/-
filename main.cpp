//# include <stdio.h>
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	printf("%c $c\n", s1[0], s2[1]);
//
//}

//# include <stdio.h>
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	printf("%c %c\n", s1[0], s2[1]);
//	printf("%s %s\n", s1, s2);
//	printf("%s %s\n", &s1[0]);
//	printf("%s %s\n", &s2[0]);
//}

//# include <stdio.h>
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	printf("%s\n", s1);
//	printf("%s\n", s2);
//}

//# include <stdio.h>
//void PrintString(const char* s1)
//{
//	printf("%s\n", s1);
//}
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	//printf("%s\n", s1);
//	PrintString(s1);
//	printf("%s\n", s2);
//}

//# include <stdio.h>
//void PrintString(const char* s1)
//{
//	printf("%s\n", s1);
//}
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	//printf("%s\n", s1);
//	PrintString(s1);
//	//printf("%s\n", s2);
//	PrintString(s2);
//}

//# include <stdio.h>
//void PrintString(const char* s1)
//{
//	printf("%s\n", s1);
//  
//}
//int main()
//{
//	const char* s1 = "Hello!";
//	char s2[7] = "Hello!";
//
//	//printf("%s\n", s1);
//	PrintString(s1);
//	//printf("%s\n", s2);
//	PrintString(s2);
//}

//# include <stdio.h>
//int main()
//{
//	int a[4];
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 3;
//	a[3] = 4;
//}

//# include <stdio.h>
//int main()
//{
//	int a[4];
//	
//	for(int i = 0; i<4; ++i)
//	    a[i] = i + 1;
//
//	printf("%5d", a[0]);
//	printf("%5d", a[1]);
//	printf("%5d", a[2]);
//	printf("%5d", a[3]);
//	printf("\n");
//
//}

//# include <stdio.h>
//int main()
//{
//	int a[4];
//
//	for (int i = 0; i < 4; ++i)
//		a[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//	printf("%5d", a[i]);
//	printf("\n");
//
//}

//# include <stdio.h>
//# include <stdlib.h>
//int main()
//{
//	int a[4];
//
//	for (int i = 0; i < 4; ++i)
//		a[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", a[i]);
//	printf("\n");
//	//////
//	int* b = NULL;
//	b = (int *)malloc(sizeof(int) * 4);
//	b[0] = 1;
//	b[1] = 2;
//	b[2] = 3;
//	b[3] = 4;
//}

//# include <stdio.h>
//# include <stdlib.h>
//int main()
//{
//	int a[4];
//
//	for (int i = 0; i < 4; ++i)
//		a[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", a[i]);
//	printf("\n");
//	//////
//	int* b = NULL;
//	b = (int*)malloc(sizeof(int) * 4);
//
//	for (int i = 0; i < 4; ++i)
//		b[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", b[i]);
//	printf("\n");
//
//	free(b);
//}

//# include <stdio.h>
//# include <stdlib.h>
//void PrintData(int data)
//{
//	printf("%d\n", data);
//	return;
//}
//int main()
//{  
//	//함수
//	int n = 10;
//
//	PrintData(n);
//}

//# include <stdio.h>
//# include <stdlib.h>
//void PrintData(int data)
//{
//	// data = 600;
//	printf("%d\n", data);
//	return;
//}
//void PrintDataRef(const int* pdata) // 중요
//{
//	*pdata = 600;
//	printf("%d\n", *pdata);
//	return;
//}
//int main()
//{
//	//함수
//	int n = 10;
//
//	PrintData(n);
//	PrintDataRef(&n);
//}

//# include <stdio.h>
//# include <stdlib.h>
//void PrintData(int data)
//{
//	// data = 600;
//	printf("%d\n", data);
//	return;
//}
//void PrintDataRef(const int* pdata) 
//{
//	printf("%d\n", pdata[0]);
//	printf("%d\n", pdata[1]);
//	return;
//}
//int main()
//{
//	//함수
//	int arr[2] = { 10, 20 };
//	
//
//	// PrintData(arr[2]); //value
//	PrintData(arr); //reference
//}

//**
//# include <stdio.h>
//# include <stdlib.h>
//void PrintData(int data)
//{
//	printf("%d\n", data);
//	return;
//}
//void PrintDataRef(const int* pdata)
//{
//	printf("%d\n", *pdata);
//	
//}
//void SetData(int* pdata, int value)
//{
//	*pdata = value;
//}
//int main()
//{
//	int data = 10;
//	
//	//SetData(data, 50); x
//	SetData(&data, 50);
//
//	PrintData(data);
//	PrintDataRef(&data);
//}

//# include <stdio.h>
//void PrintArray(const int* arr)
//{
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("\n");
//}
//int main()
//{
//	int arr[2] = { 10, 20 };
//
//	PrintArray(arr);
//}

//# include <stdio.h>
//void PrintArray(const int* arr)
//{
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("\n");
//}
//void IncrementArray(int* arr)
//{
//	++arr[0];
//	++arr[1];
//}
//int main()
//{
//	int arr[2] = { 10, 20 };
//
//	IncrementArray(arr);
//	PrintArray(arr);
//}

//# include <stdio.h>
//int main()
//{
//	// 입력 함수 _CRT_SECURE_NO_WARNINGS
//	int n = 10;
//
//	scanf("%d", &n);
//	printf("%d\n", n);
//}

//# include <stdio.h>
//int main()
//{
//	// 입력 함수 _CRT_SECURE_NO_WARNINGS
//	int n = 10;
//
//	printf("input integer :");
//	scanf("%d", &n);
//
//	printf("data : %d\n", n);
//}

//# include <stdio.h>
//int main()
//{
//	// 입력 함수 _CRT_SECURE_NO_WARNINGS
//	int a = 0, b =0;
//
//	printf("input integer :");
//	scanf("%d %d ", &a, &b);
//
//	printf("data : %d %d\n", a, b);
//}

//# include <stdio.h>
//int main()
//{
//	double a = 0, b = 0;
//
//	printf("input integer :");
//	scanf("%lf %lf", &a, &b);
//
//	printf("data : %g %g\n", a, b);
//}

//# include <stdio.h>
//# include <stdlib.h>
//int main()
//{
//	int* arr = NULL;
//	int capacity = 0;
//
//	printf("input capacity : ");
//	scanf("%d", &capacity);
//
//	arr = (int*)malloc(sizeof(int) * capacity);
//
//	for(int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		printf("%d", arr[i]);
//	printf("\n");
//	
//	free(arr);
//}

//# include <stdio.h>
//# include <stdlib.h>
//int main()
//{
//	int* arr = NULL;
//	int capacity = 0;
//
//	printf("input capacity : ");
//	scanf("%d", &capacity);
//
//	arr = (int*)malloc(sizeof(int) * capacity);
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		printf("%d", arr[i]);
//	printf("\n");
//
//	free(arr);
//}

# include <stdio.h>
# include <stdlib.h>
int main()
{
	int* arr = NULL;
	int capacity = 0;

	printf("input capacity : ");
	scanf("%d", &capacity);

	// int arr[capacity]; 안됨
	for (int i = 0; i < capacity; ++i)
		arr[i] = i + 1;

	for (int i = 0; i < capacity; ++i)
		printf("%d", arr[i]);
	printf("\n");


}