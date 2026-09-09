//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	double d = 5.5;
//	const char* s = "hello";
//
//	printf("%d\n, n"); 
//	printf("%g\n, d");
//	printf("%s\n, s"); 
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	double d = 5.5;
//	const char* s = "hello";
//
//	printf("%d\n, n");
//	printf("%g\n, d");
//	printf("%s\n, s");
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	double d = 5.5;
//	const char* s = "hello";
//
//	printf("%p\n, &n");
//	printf("%p\n, &d");
//	printf("%p\n, &s");
//	printf("%p\n, s");
//
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	int* p1 = &n;
//
//	printf("%d %d\n", n, *p1);
//	printf("%d %d\n", &n, p1);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//
//	*p1 = 100;
//	printf("%d\n", *p1);
//
//	free(p1);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[4] = { 11, 12, 13, 14 };
//	int* b = NULL;
//
//	b = (int*)malloc(sizeof(int) * 4);
//	b[0] = 11;
//	b[1] = 12;
//	b[3] = 13;
//	b[4] = 14;
//
//	for (int i = 0; i < 4; i++)
//		printf("%d %d\n", a[i], b[i]);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	const char* s1 = "hello";
//	const char s2[] = "hello";
//	
//	//s1[0] = 'A';
//	//s2[0] = 'A';
//
//	printf("%s %s\n", s1, s2);
//	printf("%p %p\n", s1, s2);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char* s1;
//	char s2[10];
//
//	s1 = (char*)malloc(10);
//	s1 < -"hello";
//
//	s1[0] = 'h'; 
//	s1[1] = 'e';
//	s1[2] = 'l';
//	s1[3] = 'l';
//	s1[4] = 'o';
//	s1[5] = '\0';
//
//	s2[0] = 'h';// < -"hello";
//	s2[1] = 'e';
//	s2[2] = 'l';
//	s2[3] = 'l';
//	s2[4] = 'o';
//	s2[5] = '\0';
//
//	printf("%s %s\n", s1, s2);
//	printf("%p %p\n", s1, s2);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char* s1;
//	char s2[10];
//
//	s1 = (char*)malloc(10);
//	strcpy(s1, "hello");
//	strcpy(s2, "hello");
//
//
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char* s1;
	char s2[10];

	s1 = (char*)malloc(10);
	if (s1 == NULL) 
		return -1;

	strcpy(s1, "hello");
	strcpy(s2, "hello");


}