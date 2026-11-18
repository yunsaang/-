git clone https://github.com/hansei-it/class_c.git

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <process.h> /* _beginthreadex */
#include <stdio.h>
#include <stdlib.h>
static unsigned __stdcall count_thread(void* arg)
{
  const char* name = (const char* )arg;
  int i;

  for (i = 1; i <= 100; i++) {
    printf("  [%s] %d\n", name, i);
    Sleep(100);
  }
  return 0;
}

int main(void)
{
  HANDLE thread;
  thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 1", 0, NULL);
  thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 2", 0, NULL);
  thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub thread 2", 0, NULL);

  for (int i = 1; i <= 100; i++) {
    printf("  [%s] %d\n", "main thread", i);
    Sleep(100);
  }

  
  getchar();

  return EXIT_SUCCESS;
}

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
