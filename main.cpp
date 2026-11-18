//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//static unsigned __stdcall count_thread(void* arg)
//{
//    const char* name = (const char*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%s] %d\n", name, i);
//        Sleep(100);
//    }
//    return 0;
//}
//
//int main(void) // 쓰레드가 몆개인가  시험나옴
//{
//    HANDLE thread;
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 1", 0, NULL);
//
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 2", 0, NULL);
//
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 2", 0, NULL);
//
//
//    for (int i = 1; i <= 100; i++) {
//        printf("  [%s] %d\n", "main thread", i);
//        Sleep(100);
//    }
//
//
//    getchar();
//
//    return EXIT_SUCCESS;
//}
//#include <stdio.h>
//
//void PrintArray(int arr[], int size)
//{
//  for (int i = 0; i < size; ++i)
//    printf("%d ", arr[i]);
//  printf("\n");
//}
//int main()
//{
//  int arr[5] = { 10,20,30,40,50 };
//  int size = 5;
//
//  size = 0;
//  printf("size : %d\n", size);
//
//  PrintArray(arr, size);
//
//  for (int i = 0; i < size; ++i)
//    printf("%d ", arr[i]);
//  printf("\n");
//
//}

//#define WIN32_LEAN_AND_MEAN // 매모리 그림
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//static unsigned __stdcall count_thread(void* arg)
//{
//    int id = *(int*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%d] %d\n", id, i);
//        Sleep(1000);
//    }
//    return 0;
//}
//
//int data = 10;
//
//int main(void) // 쓰레드가 몆개인가  시험나옴
//{
//    HANDLE thread;
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data, 0, NULL);
//    Sleep(1);
//    data = 12;
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data, 0, NULL);
//    getchar();
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//static unsigned __stdcall count_thread(void* arg)
//{
//    int id = *(int*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%d] %d\n", id, i);
//        Sleep(1000);
//    }
//    return 0;
//}
//
//int data1 = 10;
//int data2 = 12;
//
//
//int main(void) // 쓰레드가 몆개인가  시험나옴 매모라 arg가 thread1 10 를 가르킴
//{
//    HANDLE thread1;
//    HANDLE thread2;
//    thread1 = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data1, 0, NULL);
//    thread2 = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data2, 0, NULL);
//
//    getchar();
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN 
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//static unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg; // 메모리 그림
//    int i;
//
//    for (i = 1; i <= 1000000; i++) {
//        {
//          WaitForSingleObject(hMutex, INFINITE);
//          *pcount = *pcount + 1; //원자적인 연산을 보장해야 함
//          ReleaseMutex(hMutex);
//        }
//    }
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//int count = 0;
//
//
//int main(void) 
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    HANDLE hThreads[2] = { NULL };
//    
//    hMutex = CreateMutex(NULL, FALSE, NULL); //false 면 신호상태 true면 실행상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&count, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&count, 0, NULL);
//
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    getchar();
//    printf("count : %d\n", count);
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN 
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//static unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg; // 메모리 그림
//    int i;
//
//    for (i = 1; i <= 1000000; i++) {
//        {
//            WaitForSingleObject(hMutex, INFINITE);
//            *pcount = *pcount + 1; //원자적인 연산을 보장해야 함
//            ReleaseMutex(hMutex);
//        }
//    }
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//
//
//int main(void)
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    int* pCount = (int*)malloc(sizeof(int));
//    *pCount = 0;
//    HANDLE hThreads[2] = { NULL };
//
//    hMutex = CreateMutex(NULL, FALSE, NULL); //false 면 신호상태 true면 실행상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pCount, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pCount, 0, NULL);
//
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    getchar();
//    printf("count : %d\n", *pCount);
//
//    free(pCount);
//    CloseHandle(hMutex);
//    CloseHandle(hThreads[0]);
//    CloseHandle(hThreads[0]);
//
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN 
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//static unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg; // 메모리 그림
//    int i;
//    int count = 0;
//
//    for (i = 1; i <= 1000000; i++) {
//        {
//            count = count + 1;
//        }
//    }
//    WaitForSingleObject(hMutex, INFINITE);
//    *pcount += count;
//    ReleaseMutex(hMutex);
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//
//
//int main(void)
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    int* pCount = (int*)malloc(sizeof(int));
//    *pCount = 0;
//    HANDLE hThreads[2] = { NULL };
//
//    hMutex = CreateMutex(NULL, FALSE, NULL); //false 면 신호상태 true면 실행상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pCount, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pCount, 0, NULL);
//
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    getchar();
//    printf("count : %d\n", *pCount);
//
//    free(pCount);
//    CloseHandle(hMutex);
//    CloseHandle(hThreads[0]);
//    CloseHandle(hThreads[0]);
//
//    return 0;
//}

#define WIN32_LEAN_AND_MEAN 
#include <windows.h>
#include <process.h> /* _beginthreadex */
#include <stdio.h>
#include <stdlib.h>

struct ThreadParam
{
    int threadId;
    int* pCount;
};
HANDLE hMutex;
static unsigned __stdcall count_thread(void* arg)
{
    int* pcount = ((ThreadParam*)arg)->pCount; // 메모리 그림
    int threadId = ((ThreadParam*)arg)->threadId;
    printf("%d Thread 시작\n", threadId);

    int count = 0;
    for (int i = 1; i <= 1000000; i++) {
        {
            count = count + 1;
        }
    }
    WaitForSingleObject(hMutex, INFINITE);
    *pcount += count;
    ReleaseMutex(hMutex);
    return 0;
}

//int data1 = 10;
//int data2 = 12;


int main(void)
{
    //HANDLE thread1;
    //HANDLE thread2;
    int* pCount = (int*)malloc(sizeof(int));
    *pCount = 0;

    ThreadParam t1 = { 1, pCount };
    ThreadParam t2 = { 1, pCount };


    HANDLE hThreads[2] = { NULL };

    hMutex = CreateMutex(NULL, FALSE, NULL); //false 면 신호상태 true면 실행상태

    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&t1, 0, NULL);
    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&t2, 0, NULL);

    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
    getchar();
    printf("count : %d\n", *pCount);

    free(pCount);
    CloseHandle(hMutex);
    CloseHandle(hThreads[0]);
    CloseHandle(hThreads[0]);

    return 0;
}
