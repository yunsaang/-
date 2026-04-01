#include <stdio.h>
int main()
{
	char c = 10;
	int n = 10;
	printf("%d %d\n", c, n);
	printf("%d %d\n", c+1, n+1);
	printf("%d %p\n", &c, &n);
	printf("%d %p\n", &c+1, &n+1);
}

//#include <stdio.h>
//void PrintInteger(int po, int so)
//{
//	for (int i = po-1; i < so; ++i )
//		printf("%d\n", i + 1);
//	printf("\n");
//}
//int main()
//{
//	PrintInteger(1, 10);
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	printf("%d %d\n", add(100, 50), add(15, 15));
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int c = add(100, 50);
//	int k = add(15, 15);
//	printf("%d %d\n", c, k);
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d + %d = %d\n", a, b, add(a, b));
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	int r = a + b;
//	return r;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d + %d = %d\n", a, b, add(a, b));
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d + %d = %d\n", a, b, add(a, b));
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return 100;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d + %d = %d\n", a, b, add(a,b));
//}



//#include <stdio.h>
//int main()
//{
//	return 0; //실행
//	return 0; // 실행 x
//}

//#include <stdio.h>
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//int Add(int lhs, int rhs)
//{
//	int result = lhs + rhs;
//	return result;
//}
//void print(int sum)
//{
//		printf("sum = %d\n", sum);
//}
//int main()
//{
//	int a = 10, b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	print(sum);
//	
//}

//#include <stdio.h>
//int Add(int lhs, int rhs)
//{
//	int result = lhs + rhs;
//	return result;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int sum = 0;
//	sum = Add(a, b); 
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//void PrintAdd(int lhs, int rhs)
//{
//	int result = lhs + rhs;
//	printf("sum = %d\n", result);
//}
//int main()
//{
//	int a = 10, b = 20;
//	PrintAdd(a, b); // sum = 30
//}

//#include <stdio.h>
//void PrintInteger(int start, int end, int step); //미리 선언
//int main()
//{
//	PrintInteger(5, 10, 2);
//	PrintInteger(1, 3, 1);
//	PrintInteger(7, 100, 5);
//}
//void PrintInteger(int start, int end, int step)
//{
//	for (int i = start; i <= end; i += step)
//		printf("%5d", i);
//	printf("\n");
//}

//#include <stdio.h>
//void PrintInteger(int start, int end, int step) //매계 변수(parameter)
//{
//	for (int i = start; i <= end; i += step)
//		printf("%5d", i);
//	printf("\n");
//}
//int main()
//{
//	PrintInteger(5, 10, 2); 
//	PrintInteger(1, 3, 1);
//	PrintInteger(7, 100, 5);
//}

//#include <stdio.h>
//void PrintInteger(int start, int end) //매계 변수(parameter)
//{
//	for (int i = start; i <= end; ++i)
//		printf("%5d", i);
//	printf("\n");
//}
//int main()
//{
//	PrintInteger(5, 10); //인수(argument)
//	PrintInteger(1, 3);
//	PrintInteger(7, 100);
//}

//#include <stdio.h>
//void PrintInteger()//서버
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%5d", i);
//	printf("\n");
//}
//int main() //메인
//{
//	
//	PrintInteger();
//	PrintInteger();
//	PrintInteger();
//}
// 
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int result = 0;
//
//	printf("i => %d %d\n", i, result);
//	result = i = i + 1; //오른쪽부터 대입
//	printf("i => %d %d\n", i, result);
//	
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int result = 0;
//
//	printf("i => %d %d\n", i, result);
//	result = i++; // rseult는 i 보다 1작다.
//	printf("i => %d %d\n", i, result);
//	result = i++;
//	printf("i => %d %d\n", i, result);
//	result = i++;
//	printf("i => %d %d\n", i, result);
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int result = 0;
//
//	printf("i => %d %d\n", i, result);
//	result = ++i;
//	printf("i => %d %d\n", i, result);
//	result = ++i;
//	printf("i => %d %d\n", i, result);
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int result = 0;
//
//	printf("i => %d %d\n", i, result);
//	i++;
//	printf("i => %d\n", i);
//	i++;
//	printf("i => %d\n", i);
//	i++;
//	printf("i => %d\n", i);
//
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	printf("i => %d\n", i);
//	++i;
//    printf("i => %d\n", i);
//	++i;
//	printf("i => %d\n", i);
//	++i;
//	printf("i => %d\n", i);
//
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	for (int i = 1; i <= 100; ++i)
//	{
//		sum = sum + 1;
//		
//	}
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	for (int i = 1; i <= 100; ++i)
//	{
//		sum = sum + 1;
//		printf("sum = %d\n", sum);
//	}
//
//}

//여기까지
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	for (int i = 1; i <= 5; ++i)
//	{
//		sum = sum + 1;
//		printf("sum = %d\n", sum);
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//	sum = sum + 2;
//	printf("sum = %d\n", sum);
//	sum = sum + 3;
//	printf("sum = %d\n", sum);
//	sum = sum + 4;
//	printf("sum = %d\n", sum);
//	sum = sum + 5;
//	printf("sum = %d\n", sum);
//
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	printf("sum = %d\n", sum);
//
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//
//}
 
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%5d ", i);
//	printf("\n");
//
//	for (int i = 1; i <= 10; ++i)
//	{
//		if (i % 2 == 0)
//			printf("%5d", i);
//	}
//	printf("\n");
//
//	for (int i = 1; i <= 10; ++i)
//	{
//		if (i % 3 == 0)
//			printf("%5d", i);
//	}
//	printf("\n");
//
//}


//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%5d ", i);
//	printf("\n");
//
//	for (int i = 1; i <= 10; ++i)
//	{
//		if(i%2 == 0)
//			printf("%5d", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("% 5d ", i);
//	//printf("%5d", i);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%d ", i);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%d", i);
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	// 합, 차 출력,
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//}