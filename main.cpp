//#include <stdio.h>
//int main()
//{
//	char buf[100] = "";
//	printf("%d", buf[0]);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = "";
//
//	// buf = "ABC"; 틀림
//
//	// 첫번째 방법
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	strcpy(buf, "ABC");
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	strcpy(buf, "ABC");
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	strcpy(buf, "ABC");
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	strcpy(dest, src);
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996) 메모리 그림 (stack ~ global data 
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	strcpy(dest, src);
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	//strcpy(buf, "ABC");
//	gets_s(buf,100);
//
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	//strcpy(buf, "ABC");
//
//	printf("input : ");
//	gets_s(buf, 100);
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//
//	printf("input : ");
//	gets_s(buf, 100);
//	printf("[0] : %d\n", buf[0]);
//	printf("str : %s\n", buf);
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	//strcpy(buf, "ABC");
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		printf("[0] : %d\n", buf[0]);
//		printf("str : %s\n", buf);
//	}
//	
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char buf[100] = ""; //{'\0'}
//	char* dest = buf;
//	const char* src = "ABC";
//
//	// buf = "ABC";
//
//	/*buf[0] = 'A';
//	buf[1] = 'B';
//	buf[2] = 'C';
//	buf[3] = '\0';*/
//
//	//strcpy(buf, "ABC");
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else
//		{
//			char* s = (char*)malloc(strlen(buf)+1 );
//			strcpy(s, buf);
//			printf("[0] : %d\n", buf[0]);
//			printf("str : %s\n", buf);
//		}
//	}
//
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char* sarray[10000] = { NULL };
//	int scount = 0;
//
//	char buf[100] = ""; 
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else
//		{
//			char* s = (char*)malloc(strlen(buf) + 1);
//			strcpy(s, buf);
//			sarray[scount++] = s;
//			printf("[0] : %d\n", buf[0]);
//			printf("str : %s\n", buf);
//		}
//	}
//
//	printf("count : %d\n", scount);
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char* sarray[10000] = { NULL };
//	int scount = 0;
//
//	char buf[100] = "";
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else
//		{
//			char* s = (char*)malloc(strlen(buf) + 1);
//			strcpy(s, buf);
//			sarray[scount++] = s;
//			printf("[0] : %d\n", buf[0]);
//			printf("str : %s\n", buf);
//		}
//	}
//
//	printf("\n");
//	printf("count : %d\n", scount);
//	for (int i = 0; i < scount; ++i)
//		printf("[%d] : %s\n", i, sarray[i]);
//
//	for (int i = 0; i < scount; ++i)
//		free(sarray[i]);
//
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct SDArray
//{
//	char* sarray[100];
//	int scount;
//};
//int main()
//{
//	SDArray sdarray = { 0 };
//
//	char buf[100] = "";
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else
//		{
//			char* s = (char*)malloc(strlen(buf) + 1);
//			strcpy(s, buf);
//			sdarray.sarray[sdarray.scount++] = s;
//			printf("[0] : %d\n", buf[0]);
//			printf("str : %s\n", buf);
//		}
//	}
//
//	printf("\n");
//	printf("count : %d\n", sdarray.scount);
//	for (int i = 0; i < sdarray.scount; ++i)
//		printf("[%d] : %s\n", i, sdarray.sarray[i]);
//
//	for (int i = 0; i < sdarray.scount; ++i)
//		free(sdarray.sarray[i]);
//
//	return 0;
//}

//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct SDArray
//{
//	char* sarray[100];
//	int scount;
//};
//void AddStringArray(SDArray* sda, char* data)
//{
//	sda->sarray[sda->scount++] = data;
//}
//void PrintStringCountArray(SDArray* sda)
//{
//	printf("count : %d\n", sda->scount);
//}
//void PrintStringArray(SDArray* sda)
//{
//	for (int i = 0; i < sda->scount, ++i)
//		printf("[%d] : %s\n", i, sda->sarray[i]);
//}
//void FreeStringArray(SDArray* sda)
//{
//	for (int i = 0; i < sdarray.scount; ++i)
//		free(sdarray.sarray[i]);
//}
//
//int main()
//{
//	SDArray sdarray = { 0 };
//
//	char buf[100] = "";
//
//	while (1)
//	{
//		printf("input : ");
//		gets_s(buf, 100);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else
//		{
//			char* s = (char*)malloc(strlen(buf) + 1);
//			strcpy(s, buf);
//			AddStringArray(&sdarray, s);
//			sdarray.sarray[sdarray.scount++] = s;
//			printf("[0] : %d\n", buf[0]);
//			printf("str : %s\n", buf);
//		}
//	}
//
//	printf("\n");
//	PrintStringCountArray(&sdarray);
//	PrintStringArray(&sdarray);
//
//
//	FreeStringArray(&sdarray);
//
//	return 0;
//}

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct SDArray
{
	char* sarray[100];
	int scount;
};
void AddStringArray(SDArray* sda, char* data)
{
	sda->sarray[sda->scount++] = data;
}
void PrintStringCountArray(SDArray* sda)
{
	printf("count : %d\n", sda->scount);
}
void PrintStringArray(SDArray* sda)
{
	for (int i = 0; i < sda->scount; ++i)
		printf("[%d] : %s\n", i, sda->sarray[i]);
}
void FreeStringArray(SDArray* sda)
{
	for (int i = 0; i < sda->scount; ++i)
		free(sda->sarray[i]);
}
//
void InputString(char* dest)
{
	printf("input : ");
	gets_s(dest, 100);
}
char* AllocString(char* src)
{
	char* t = (char*)malloc(strlen(src) + 1);
	strcpy(t, src);
	return t;
}
void PrintStringInfo(char* src)
{
	printf("[0] : %d\n", src[0]);
	printf("str : %s\n", src);
}
//

int IsExit(char* src)
{
	return strcmp(src, "exit") == 0;
}

int main()
{
	SDArray sdarray = { 0 };

	char buf[100] = "";

	while (1)
	{
		char buf[100] = "";

		InputString(buf);
		if (IsExit(buf))
			break;
		else
		{
			char* s = AllocString(buf);
			AddStringArray(&sdarray, s);
			PrintStringInfo(s);
		}
	}

	PrintStringCountArray(&sdarray);
	PrintStringArray(&sdarray);

	FreeStringArray(&sdarray);
	return 0;
}