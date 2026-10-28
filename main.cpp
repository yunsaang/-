//#include <stdio.h>
//#include <string.h>
//struct Person
//{
//	char name[20];
//};
//int main()
//{
//    Person p1;
//
//    // gets_s(p1, name);
//    strcpy_s(p1.name, "hong gil dong");
//    printf("name : %s", p1.name);
//}

//#include <stdio.h>
//#include <string.h>
//struct Person
//{
//    char name[20];
//    char phone[20];
//
//};
//int main()
//{
//    Person p1;
//
//    // gets_s(p1, name);
//    strcpy_s(p1.name, "hong gil dong");
//    strcpy_s(p1.phone, "010-1234-5678");
//
//    printf("name : %s\n", p1.name);
//    printf("phone : %s\n", p1.phone);
//
//}

//#include <stdio.h>
//#include <string.h>
//struct Person
//{
//    char name[20];
//    char phone[20];
//
//};
//int main()
//{
//    Person p1;
//
//    gets_s(p1.name);
//    gets_s(p1.phone);
//
//   //strcpy_s(p1.name, "hong gil dong");
//   // strcpy_s(p1.phone, "010-1234-5678");
//
//    printf("name : %s\n", p1.name);
//    printf("phone : %s\n", p1.phone);
//
//}

//#include <stdio.h> // 새로운 내용  정석
//#include <string.h>
//struct Person
//{
//    char* name;
//    char* phone;
//
//};
//int main()
//{
//    char buf1[100];
//    char buf2[200];
//    Person p1 = { buf1,buf2 };
//
//    //gets_s(p1.name, 100);
//    //gets_s(p1.phone, 100);
//    strcpy_s(p1.name, 14, "hong gil dong");
//    strcpy_s(p1.phone, 14, "010-1234-5678");
//
//    printf("name : %s\n", p1.name);
//    printf("phone : %s\n", p1.phone);
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Person
//{
//    char* name;
//    char* phone;
//
//};
//int main()
//{
//    Person p1 = { NULL,NULL };
//
//    p1.name = (char*)malloc(sizeof(char) * 100);
//    p1.phone = (char*)malloc(sizeof(char) * 100);
//
//    //gets_s(p1.name, 100);
//    //gets_s(p1.phone, 100);
//    strcpy_s(p1.name, 14, "hong gil dong");
//    strcpy_s(p1.phone, 14, "010-1234-5678");
//
//    printf("name : %s\n", p1.name);
//    printf("phone : %s\n", p1.phone);
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* link;
//};
//int main()
//{
//    Node n1 = { 10,NULL };
//    Node n2 = { 20,NULL };
//    Node n3 = { 30,NULL };
//    Node* p;
//
//    printf("name : %s\n", p1.name);
//    printf("phone : %s\n", p1.phone);
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//int main()
//{
//    Node n1 = { 10,NULL,NULL };
//
//    printf("%d\n", n1.data);
//
//}
// 
//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//int main()
//{
//    //정수 저장관리 연결 리스트
//
//    Initlist();
//    AddFirstlist();
//    AddLastlist();
//    Removelist();
//    GetHead();
//    Next();
//    HasNext();
//    GetData();
//    Printlist();
//    Jninitlist();
//    Uninitlist();
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//int main()
//{
//    Node* head = NULL;
//    Node* tail = NULL;
//
//
//    Initlist(head, tail);
//    Printlist(head, tail);
//    Uninitlist(head, tail);
//
//}

//#include <stdio.h> //메모리 그림
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//Node* AllocNode(int data)
//{
//    Node* n = (Node*)malloc(sizeof(Node));
//    n->data = data;
//    n->next = n->prev = NULL;
//    return n;
//}
//struct LinkedList
//{
//    Node* head;
//    Node* tail;
//};
//void InitList(LinkedList* plt)
//{
//    plt->head = AllocNode(0);
//    plt->tail = AllocNode(0);
//    plt->head->next = plt->tail;
//    plt->tail->prev = plt->head;
//
//}
//void UninitList(LinkedList* plt)
//{
//    Node* np;
//    for (Node* p = plt->head; p != NULL; p = np)
//    {
//        np = p->next;
//        free(p);
//    }
//}
//void PrintList(LinkedList* plt)
//{
//    for (Node* p = plt->head; p != NULL; p = p->next)
//        printf("%d", p->data);
//    printf("\n");
//}
//int main()
//{
//    LinkedList lt;
//
//    InitList(&lt);
//    PrintList(&lt);
//    UninitList(&lt);
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//Node* AllocNode(int data)
//{
//    Node* n = (Node*)malloc(sizeof(Node));
//    n->data = data;
//    n->next = n->prev = NULL;
//    return n;
//}
//struct LinkedList
//{
//    Node* head;
//    Node* tail;
//};
//void InitList(LinkedList* plt)
//{
//    plt->head = AllocNode(0);
//    plt->tail = AllocNode(0);
//    plt->head->next = plt->tail;
//    plt->tail->prev = plt->head;
//
//}
//void UninitList(LinkedList* plt)
//{
//    Node* np;
//    for (Node* p = plt->head; p != NULL; p = np)
//    {
//        np = p->next;
//        free(p);
//    }
//}
//void PrintList(LinkedList* plt)
//{
//    for (Node* p = plt->head; p != NULL; p = p->next)
//        printf("%d", p->data);
//    printf("\n");
//}
//void AddTailList(LinkedList* plt, int data)
//{
//    Node* ptail = plt->tail->prev;
//    Node* n = AllocNode(data);
//    ptail->next = n;
//    n->prev = ptail;
//    n->next = plt->tail;
//    plt->tail->prev = n;
//
//}
//void AddFirstList(LinkedList* plt, int data)
//{
//    Node* nhead = plt->head->next;
//    Node* n = AllocNode(data);
//    plt->head->next = n;
//    n->prev = plt->head;
//    n->next = nhead;
//    nhead->prev = n;
//}
//int main()
//{
//    LinkedList lt;
//
//
//    InitList(&lt);
//    AddTailList(&lt, 10);
//    AddTailList(&lt, 20);
//    AddTailList(&lt, 30);
//    AddTailList(&lt, 40);
//    AddTailList(&lt, 50);
//    AddFirstList(&lt, 100);
//    AddFirstList(&lt, 200);
//
//
//    PrintList(&lt);
//    UninitList(&lt);
//
//}

//#include <stdio.h> 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//Node* AllocNode(int data)
//{
//    Node* n = (Node*)malloc(sizeof(Node));
//    n->data = data;
//    n->next = n->prev = NULL;
//    return n;
//}
//struct LinkedList
//{
//    Node* head;
//    Node* tail;
//};
//void InitList(LinkedList* plt)
//{
//    plt->head = AllocNode(0);
//    plt->tail = AllocNode(0);
//    plt->head->next = plt->tail;
//    plt->tail->prev = plt->head;
//
//}
//void UninitList(LinkedList* plt)
//{
//    Node* np;
//    for (Node* p = plt->head; p != NULL; p = np)
//    {
//        np = p->next;
//        free(p);
//    }
//}
//void PrintList(LinkedList* plt)
//{
//    for (Node* p = plt->head; p != NULL; p = p->next)
//        printf("%d", p->data);
//    printf("\n");
//}
//void AddTailList(LinkedList* plt, int data)
//{
//    Node* ptail = plt->tail->prev;
//    Node* n = AllocNode(data);
//    ptail->next = n;
//    n->prev = ptail;
//    n->next = plt->tail;
//    plt->tail->prev = n;
//
//}
//void AddFirstList(LinkedList* plt, int data)
//{
//    Node* nhead = plt->head->next;
//    Node* n = AllocNode(data);
//    plt->head->next = n;
//    n->prev = plt->head;
//    n->next = nhead;
//    nhead->prev = n;
//}
//Node* GetHead(LinkedList* plt)
//{
//    return plt->head->next;
//}
//int HasNext(LinkedList* plt, Node* p)
//{
//    return p->next != plt->tail;
//}
//Node* Next(LinkedList* plt, Node* p)
//{
//    return p->next;
//}
//int GetData(LinkedList* plt, Node* p)
//{
//    return p->data;
//}
//int main()
//{
//    LinkedList lt;
//
//    InitList(&lt);
//
//    AddTailList(&lt, 10);
//    AddTailList(&lt, 20);
//    AddTailList(&lt, 30);
//    AddTailList(&lt, 40);
//    AddTailList(&lt, 50);
//    AddFirstList(&lt, 100);
//    AddFirstList(&lt, 200);
//
//    for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
//        printf("%d", GetData(&lt, p));
//    printf("\n");
//
//    PrintList(&lt);
//    UninitList(&lt);
//
//}

//#include <stdio.h> //메모리그림 
//#include <string.h>
//#include <stdlib.h>
//struct Node
//{
//    int data;
//    Node* prev;
//    Node* next;
//
//};
//Node* AllocNode(int data)
//{
//    Node* n = (Node*)malloc(sizeof(Node));
//    n->data = data;
//    n->next = n->prev = NULL;
//    return n;
//}
//struct LinkedList
//{
//    Node* head;
//    Node* tail;
//};
//void InitList(LinkedList* plt)
//{
//    plt->head = AllocNode(0);
//    plt->tail = AllocNode(0);
//    plt->head->next = plt->tail;
//    plt->tail->prev = plt->head;
//
//}
//void UninitList(LinkedList* plt)
//{
//    Node* np;
//    for (Node* p = plt->head; p != NULL; p = np)
//    {
//        np = p->next;
//        free(p);
//    }
//}
//void PrintList(LinkedList* plt)
//{
//    for (Node* p = plt->head; p != NULL; p = p->next)
//        printf("%5d", p->data);
//    printf("\n");
//}
//void AddTailList(LinkedList* plt, int data)
//{
//    Node* ptail = plt->tail->prev;
//    Node* n = AllocNode(data);
//    ptail->next = n;
//    n->prev = ptail;
//    n->next = plt->tail;
//    plt->tail->prev = n;
//
//}
//void AddFirstList(LinkedList* plt, int data)
//{
//    Node* nhead = plt->head->next;
//    Node* n = AllocNode(data);
//    plt->head->next = n;
//    n->prev = plt->head;
//    n->next = nhead;
//    nhead->prev = n;
//}
//void RemoveList(LinkedList* plt, Node* p)
//{
//    Node* pp = p->prev;
//    Node* np = p->next;
//    pp->next = np;
//    np->prev = pp;
//    free(p);
//
//}
////
//Node* GetHead(LinkedList* plt)
//{
//    return plt->head->next;
//}
//int HasNext(LinkedList* plt, Node* p)
//{
//    return p->next != plt->tail;
//}
//Node* Next(LinkedList* plt, Node* p)
//{
//    return p->next;
//}
//int GetData(LinkedList* plt, Node* p)
//{
//    return p->data;
//}
//int main()
//{
//    LinkedList lt;
//
//    InitList(&lt);
//
//    AddTailList(&lt, 10);
//    AddTailList(&lt, 20);
//    AddTailList(&lt, 30);
//    AddTailList(&lt, 40);
//    AddTailList(&lt, 50);
//    AddFirstList(&lt, 100);
//    AddFirstList(&lt, 200);
//
//    for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
//        printf("%5d", GetData(&lt, p));
//    printf("\n");
//
//    for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
//        if (GetData(&lt, p) == 30)
//        {
//            RemoveList(&lt, p);
//            break;
//        }
//    printf("\n");
//
//    PrintList(&lt);
//    UninitList(&lt);
//
//}

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
struct Node
{
    int data;
    Node* prev;
    Node* next;

};
Node* AllocNode(int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = n->prev = NULL;
    return n;
}
struct LinkedList
{
    Node* head;
    Node* tail;
};
void InitList(LinkedList* plt)
{
    plt->head = AllocNode(0);
    plt->tail = AllocNode(0);
    plt->head->next = plt->tail;
    plt->tail->prev = plt->head;

}
void UninitList(LinkedList* plt)
{
    Node* np;
    for (Node* p = plt->head; p != NULL; p = np)
    {
        np = p->next;
        free(p);
    }
}
void PrintList(LinkedList* plt, void (*cb)(int) )
{
    for (Node* p = plt->head; p != NULL; p = p->next)
        cb(p->data);
}
void AddTailList(LinkedList* plt, int data)
{
    Node* ptail = plt->tail->prev;
    Node* n = AllocNode(data);
    ptail->next = n;
    n->prev = ptail;
    n->next = plt->tail;
    plt->tail->prev = n;

}
void AddFirstList(LinkedList* plt, int data)
{
    Node* nhead = plt->head->next;
    Node* n = AllocNode(data);
    plt->head->next = n;
    n->prev = plt->head;
    n->next = nhead;
    nhead->prev = n;
}
void RemoveList(LinkedList* plt, Node* p)
{
    Node* pp = p->prev;
    Node* np = p->next;
    pp->next = np;
    np->prev = pp;
    free(p);

}
//
Node* GetHead(LinkedList* plt)
{
    return plt->head->next;
}
int HasNext(LinkedList* plt, Node* p)
{
    return p->next != plt->tail;
}
Node* Next(LinkedList* plt, Node* p)
{
    return p->next;
}
int GetData(LinkedList* plt, Node* p)
{
    return p->data;
}
void PrintData(int data)
{
    printf("== %d ==\n", data);
}
void PrintData2(int data)
{
    printf("draw : %d\n", data);
}
int main()
{
    LinkedList lt;

    InitList(&lt);

    AddTailList(&lt, 10);
    AddTailList(&lt, 20);
    AddTailList(&lt, 30);
    AddTailList(&lt, 40);
    AddTailList(&lt, 50);
    AddFirstList(&lt, 100);
    AddFirstList(&lt, 200);

    for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
        printf("%5d", GetData(&lt, p));
    printf("\n");

    for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
        if (GetData(&lt, p) == 30)
        {
            RemoveList(&lt, p);
            break;
        }
    printf("\n");

    PrintList(&lt, PrintData);
    PrintList(&lt, PrintData2);

    UninitList(&lt);

}