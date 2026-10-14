//#include <stdio.h> 메모리그림보고 코드 작성 필요 시험
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//
//	head = &n1;
//	tail = &n2;
//
//	n1.next = &n2;
//	//head->next = tail;
//
//	n2.prev = &n1;
//
//	printf("%d\n", head->data);
//
//	printf("%d\n", tail->data);
//	printf("%d\n", head->next->data);
//	
//}

//#include <stdio.h> // 메모리그림보고 코드 작성 필요 시험 *
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//
//
//	head = &n1;
//	tail = &n2;
//
//	n1.next = &n2;
//	n2.prev = &n1;
//
//	Node n3 = { 80,NULL,NULL };
//	n1.next = &n3;
//	n3.prev = &n1;
//	n3.next = &n2;
//	n2.prev = &n3;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//	printf("%d\n", head->next->next->data);
//
//	printf("%d\n", tail->data);
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->prev->prev->data);
//
//	Node* p = head;
//	printf("%d\n", p->data); //10
//	p = p->next; // 중요
//	printf("%d\n", p->data); //80
//	p = p->next;
//	printf("%d\n", p->data); //20
//
//}

//#include <stdio.h> // 메모리그림보고 코드 작성 필요 시험 * 스텍, 힙, 노드 어디에
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//
//	Node* p = head;
//	printf("%d\n", p->data); //10
//	p = p->next; // 중요
//	printf("%d\n", p->data); //80
//	p = p->next;
//	printf("%d\n", p->data); //20
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = (Node*)malloc(sizeof(Node));
//	head->data = 10;
//	head->prev = NULL;
//	head->next = NULL;
//
//	tail = (Node*)malloc(sizeof(Node));
//	tail->data = 20;
//	tail->prev = NULL;
//	tail->next = NULL;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(10);
//	tail = AllocNode(20);
//
//	printf("%d\n", head->data);
//	printf("%d\n", tail->data);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(10);
//	tail = AllocNode(20);
//
//	printf("%d\n", head->data);
//	printf("%d\n", tail->data);
//
//	FreeNode(head);
//	FreeNode(tail);
//
//
//}

//#include <stdio.h> 메모리 그림
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(10);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//	for (Node* p = head; p != NULL; p = p->next)
//		printf("%5d", p->data);
//	printf("\n");
//
//	FreeNode(head);
//	FreeNode(tail);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(10);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%5d", p->data);
//	printf("\n");
//
//	FreeNode(head);
//	FreeNode(tail);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(10);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//	pt = tail->prev;
//	n = AllocNode(20);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//	pt = tail->prev;
//	n = AllocNode(30);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%5d", p->data);
//	printf("\n");
//
//	FreeNode(head);
//	FreeNode(tail);
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(data);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//}
//void FreeAllNode(Node* head, Node* tail)
//{
//
//	Node* np;
//	for (Node* p = head; p != NULL; p = np)
//	{
//		np = p->next;
//		FreeNode(p);
//	}
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//	AddNode(head, tail, 40);
//	AddNode(head, tail, 50);
//
//
//
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%5d", p->data);
//	printf("\n");
//
//	FreeAllNode(head, tail);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(data);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//}
//void FreeAllNode(Node* head, Node* tail)
//{
//
//	Node* np;
//	for (Node* p = head; p != NULL; p = np)
//	{
//		np = p->next;
//		FreeNode(p);
//	}
//}
//Node* GetHead(Node* head)
//{
//	return head->next;
//}
//int HasNext(Node* tail, Node* p)
//{
//	return tail != p;
//}
//int GetData(Node* p)
//{
//	return p->data
//}
//Node* Next(Node* p)
//{
//	return p->next;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//	AddNode(head, tail, 40);
//	AddNode(head, tail, 50);
//
//	for (Node* p = GetHead(head); HasNext(tail, p); p = Next(p) )
//		printf("%5d", GetData(p));
//	printf("\n");
//
//	FreeAllNode(head, tail);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->prev = NULL;
//	n->next = NULL;
//
//	return n;
//}
//void FreeNode(Node* p)
//{
//	free(p);
//}
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(data);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//}
//void FreeAllNode(Node* head, Node* tail)
//{
//
//	Node* np;
//	for (Node* p = head; p != NULL; p = np)
//	{
//		np = p->next;
//		FreeNode(p);
//	}
//}
//Node* GetHead(Node* head)
//{
//	return head->next;
//}
//int HasNext(Node* tail, Node* p)
//{
//	return tail != p;
//}
//int GetData(Node* p)
//{
//	return p->data
//}
//Node* Next(Node* p)
//{
//	return p->next;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	head = AllocNode(0);
//	tail = AllocNode(0);
//	head->next = tail;
//	tail->prev = head;
//	//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//	AddNode(head, tail, 40);
//	AddNode(head, tail, 50);
//
//	for (Node* p = GetHead(head); HasNext(tail, p); p = Next(p))
//	{
//		if (30 == GetData(p))
//		{
//			printf("찾음!!\n");
//			break;
//		}
//	}
//		printf("%5d", GetData(p));
//	printf("\n");
//
//	FreeAllNode(head, tail);
//}

#include <stdio.h>
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
	n->prev = NULL;
	n->next = NULL;

	return n;
}
void FreeNode(Node* p)
{
	free(p);
}
void AddNode(Node* head, Node* tail, int data)
{
	Node* pt;
	Node* n;
	pt = tail->prev;
	n = AllocNode(data);

	pt->next = n;
	n->prev = pt;
	n->next = tail;
	tail->prev = n;
}
void FreeAllNode(Node* head, Node* tail)
{

	Node* np;
	for (Node* p = head; p != NULL; p = np)
	{
		np = p->next;
		FreeNode(p);
	}
}
void RemoveNode(Node* head, Node* tail, int key)
{
	for (Node* p = head->next; p != tail; p = p->next)
	{
		if (key == p->data)
		{
			Node* pp = p->prev;
			Node* np = p->next;
			pp->next = np;
			np->prev = pp;
			FreeNode(p);
			break;
		}
	}
}
//
Node* GetHead(Node* head)
{
	return head->next;
}
int HasNext(Node* tail, Node* p)
{
	return tail != p;
}
int GetData(Node* p)
{
	return p->data;
}
Node* Next(Node* p)
{
	return p->next;
}
int main()
{
	Node* head = NULL;
	Node* tail = NULL;
	head = AllocNode(0);
	tail = AllocNode(0);
	head->next = tail;
	tail->prev = head;
	//
	AddNode(head, tail, 10);
	AddNode(head, tail, 20);
	AddNode(head, tail, 30);
	AddNode(head, tail, 40);
	AddNode(head, tail, 50);

	RemoveNode(head, tail, 30);
	for (Node* p = GetHead(head); HasNext(tail, p); p = Next(p))
		printf("%5d", GetData(p));
	printf("\n");

	FreeAllNode(head, tail);
}