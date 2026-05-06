
//#include <stdio.h>
//int main()
//{
//	const char** s = 'ABC';
//
//	printf("%d\n", 10);
//	printf("%p\n", s);
//	printf("%s\n", s);
//	printf("%s\n", "ABC");
//}

//#include <stdio.h>
//int main()
//{
//	const char* s = "ABC";
//
//	printf("%d\n", 10);
//	printf("%p\n", s);
//	printf("%p\n", s + 1);
//	printf("%s\n", s);
//	printf("%s\n", s + 1);
//	printf("%s\n", "ABC");
//}

//#include <stdio.h>
//int main()
//{
//	const char* s = "DBC";
//
//	printf("%s\n", s);
//	printf("%c\n", *s);
//	printf("%c\n", *(s + 1));
//	printf("%c\n", *(s + 2));
//	printf("%c\n", *s + 2);
//  printf("%c\n", 'A' + 2);
//}

//#include <stdio.h>
//int main()
//{
//	const char* s = "DBC";
//
//	printf("%s\n", s);
//	printf("%c\n", s[0]);
//	printf("%c\n", s[1]);
//	printf("%c\n", s[2]);
//}


//#include <stdio.h>
//int main()
//{
//	const char* s = "ABC";
//
//	printf("%s\n", s);
//	printf("%s\n", &s[1);
//	printf("%c\n", s[0]+32);
//	printf("%c\n", s[1]+32);
//	printf("%c\n", s[2]);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	const int cn = 10;
//
//	n = 100;
//	const int * p = &n;
//
//	printf("%d %d\n", n, *p);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	const int* p = &n;
//
//	*p = 100; X
//
//	printf("%d %d\n", n, p, *p);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 5, 6, 9, 10 };
//	const int* p = arr;
//
//	//*p = 100;
//	//p[2] = 90;
//	printf("%d %d\n", arr[0], *p);
//}

//#include <stdio.h>
//int main()
//{
//	const char* s = "Hello"; // literal 상수
//
//	printf("string : %s\n", s);
//}

//#include <stdio.h>
//int main()
//{
//    char s[4] = { 'A', 'B', 'C', 'D'};
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//}

//#include <stdio.h>
//int main()
//{
//    char s[4] = { 'A', 'B', 'C', 'D', '\0'};
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//}

//#include <stdio.h>
//int main()
//{
//    char s[4] = { 'A', 'B', 'C', 'D', '\0' };
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//
//    printf("%p \n", s);
//    printf("%s \n", s);
//}

//#include <stdio.h>
//int main()
//{
//    char s[4] = { 'A', 'B', 'C', 'D'};
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//
//    printf("%p \n", s);
//    printf("%s \n", s); //잘못된 코드
//}

//#include <stdio.h>
//int main()
//{
//    char s[5] = { 'A', 'B', 'C', 'D' };
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//
//    printf("%p \n", s);
//    printf("%s \n", s); 
//}

//#include <stdio.h>
//int main()
//{
//    char s[5] = "ABCD"
//    //char s[5] = { 'A', 'B', 'C', 'D' };
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c %d\n", s[i], s[i]);
//
//    printf("%p \n", s);
//    printf("%s \n", s);
//}

//#include <stdio.h>
//int main()
//{
//    char s1[4] = "ABC";
//    const char* s2 = "ABC";
//
//    s1[0] = 'Z';
//    //s2[0] = 'Z';
//
//    printf("%p %p\n", s1, s2);
//    printf("%s %s\n", s1, s2);
//    printf("%s %s\n", s1+1, s2+1);
//}

//#include <stdio.h>
//int main()
//{
//    const char s1[4] = "ABC";
//    const char* s2 = "ABC";
//
//    //s1[0] = 'Z'; 불가능
//    //s2[0] = 'Z';
//
//    printf("%p %p\n", s1, s2);
//    printf("%s %s\n", s1, s2);
//    printf("%s %s\n", s1 + 1, s2 + 1);
//}

//#include <stdio.h>
//int main()
//{
//    const char s1[4] = "ABC";
//    const char* s2 = "ABC";
//
//    //s1[0] = 'Z'; 불가능
//    //s2[0] = 'Z';
//
//    printf("%p %p\n", s1, s2);
//    printf("%c %c\n", s1[1], s2[1]);
//
//    for (int i = 0; i < 4; ++i)
//        printf("%c:%d , %c:%d\n", s1[i], s1[i], s2[i], s2[i]);
//}

//#include <stdio.h>
//void PrintString(const char* p)
//{
//    printf("string : %s\n", p);
//    
//}
//int main()
//{
//    const char s1[4] = "ABC";
//    const char* s2 = "ABC";
//    
//    PrintString(s1);
//    PrintString(s2);
//    PrintString("hello")
//
//   
//  
//}

//#include <stdio.h> 틀린코드
//void Printint(int* k)
//{
//    printf(" %d \n", *k);
//    *k = 100;
//}
//int main()
//{
//    int n = 10;
//
//    Printint(&n);
//    Printint(&n);
//    Printint(&n);
//
//
//}

////#include <stdio.h>
////void Printint(const int* k) **const로 변경 싷ㅁ
////{
////    printf(" %d \n", *k); //read
////    //*k = 100; //write
////}
////int main()
////{
////    int n = 10;
////
////    Printint(&n);
////    Printint(&n);
////    Printint(&n);
////
////
////}

//#include <stdio.h>
//void PrintArray(int* arr, int size)
//{
//    arr[0] = -99;
//    for (int i = 0; i < size; ++i)
//        printf("%d\n", arr[i]);
//}
//int main()
//{
//    int arr[4] = { 1, 3, 4, 5 };
//    PrintArray(arr, 4)
//
//}

//#include <stdio.h>
//void PrintArray(const int* arr, int size)
//{
//    arr[0] = -99; //W
//    for (int i = 0; i < size; ++i)
//        printf("%d\n", arr[i]); //R
//}
//int main()
//{
//    int arr[4] = { 1, 3, 4, 5 };
//    PrintArray(arr, 4);
//
//}

//#include <stdio.h>
//void PrintString(char* arr)
//{
//        printf("%s\n", arr);
//}
//int main()
//{
//    //char arr[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//    char arr[] = "Hello";
//
//    PrintString(arr);
//
//}

//#include <stdio.h>
//void PrintString(char* arr)
//{
//    arr[0] = 'a'; //틀림
//    printf("%s\n", arr);
//}
//int main()
//{
//    //char arr[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//    char arr[] = "Hello";
//
//    PrintString(arr);
//
//}

#include <stdio.h>
void PrintString(const char* arr)
{
    //arr[0] = 'a'; //틀림
    printf("%s\n", arr);
}
int main()
{
    //char arr[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char arr[] = "Hello";

    PrintString(arr);

}