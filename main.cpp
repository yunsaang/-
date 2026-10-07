//#include <stdio.h>
//struct Person
//{
//	char name[20];
//	char phone[20];
//};
//void PrintPerson(Person* p)
//{
//	printf("name:%s, phone:%s\n", p->name, p->phone);
//}
//int main()
//{
//	Person p1 = { "hong", "010-1234-1234" };
//	PrintPerson(&p1);
//}

//#include <stdio.h> //데이터 담는 방법 다름 메모리 그림
//#include <stdlib.h>
//struct Person
//{
//	char* name; // char name[20]; 
//	char* phone; // phone[20];
//};
//void PrintPerson(Person* p)
//{
//	printf("name:%s, phone:%s\n", p->name, p->phone);
//}
//void InputPerson(Person* p)
//{
//	printf("input name:");
//	p->name = (char*)malloc(20);
//	gets_s(p->name,20);
//	printf("input name:");
//	p->phone = (char*)malloc(20);
//	gets_s(p->phone,20);
//}
//int main()
//{
//	Person p1; // = { "hong", "010-1234-1234" };
//
//	InputPerson(&p1);
//	PrintPerson(&p1);
//
//}
// 
// 
//#pragma warning(disable: 4996)
//#include <stdio.h> //데이터 담는 방법 다름 메모리 그림
//#include <stdlib.h>
//#include <string.h>
//
//struct Person
//{
//	char* name; // char name[20]; 
//	char* phone; // phone[20];
//};
//void PrintPerson(Person* p)
//{
//	printf("name:%s, phone:%s\n", p->name, p->phone);
//}
//void InputPerson(Person* p)
//{
//	char name[20];
//	char phone[20];
//	printf("input name: ");
//	gets_s(name, 20);
//	p->name = (char*)malloc(strlen(name) + sizeof(char));
//	strcpy(p->name, name);
//
//	printf("input phone:");
//	gets_s(phone, 20);
//	p->phone = (char*)malloc(strlen(phone) + sizeof(char));
//	strcpy(p->phone, phone);
//
//
//
//}
//int main()
//{
//	Person p1; // = { "hong", "010-1234-1234" };
//
//	InputPerson(&p1);
//	PrintPerson(&p1);
//
//}

//#pragma warning(disable: 4996)
//#include <stdio.h> //데이터 담는 방법 다름 메모리 그림
//#include <stdlib.h>
//#include <string.h>
//
//struct Person
//{
//	char* name; // char name[20]; 
//	char* phone; // phone[20];
//};
//void PrintPerson(Person* p)
//{
//	printf("name:%s, phone:%s\n", p->name, p->phone);
//}
//void InputPerson(Person* p)
//{
//	char name[20];
//	char phone[20];
//	printf("input name: ");
//	gets_s(name, 20);
//	p->name = (char*)malloc(strlen(name) + sizeof(char));
//	strcpy(p->name, name);
//
//	printf("input phone:");
//	gets_s(phone, 20);
//	p->phone = (char*)malloc(strlen(phone) + sizeof(char));
//	strcpy(p->phone, phone);
//
//}
//void FreePerson(Person* p)
//{
//	free(p->name);
//	free(p->phone);
//
//}
//int main()
//{
//	Person p1; // = { "hong", "010-1234-1234" };
//
//	InputPerson(&p1);
//	PrintPerson(&p1);
//
//	FreePerson(&p1);
//
//}

//#pragma warning(disable: 4996)
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//	printf("%d\n", n4.data);
//	printf("%d\n", n5.data);
//
//}

//#pragma warning(disable: 4996) 메모리 그림
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//	printf("%d\n", n4.data);
//	printf("%d\n", n5.data);
//
//}

//#pragma warning(disable: 4996)
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//	printf("%d\n", n4.data);
//	printf("%d\n", n5.data);
//
//}

//#pragma warning(disable: 4996)
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	head = &n1;
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//	printf("%d\n", head->link->link->link->data);
//	printf("%d\n", head->link->link->link->link->data;
//
//}

//#pragma warning(disable: 4996) //메모리그림
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	head = &n1;
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	Node* p = head;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//
//
//	printf("%d\n", p->data);
//	printf("%d\n", p->data);
//	printf("%d\n", p->data);
//	printf("%d\n", p->data);
//	printf("%d\n", p->data);
//
//}

//#pragma warning(disable: 4996) //메모리그림
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	head = &n1;
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for(Node* p = head; p!= NULL; p = p->link)
//		printf("%d\n", p->data);
//	
//
//}

//#pragma warning(disable: 4996) //메모리그림
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	head = &n1;
//
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		printf("%d\n", p->data);
//
//
//}

//#pragma warning(disable: 4996) //메모리그림 이중연결리스트
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//int main()
//{
//	Node* head;
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//
//	head = &n1;
//
//	n1.next = &n2;
//	n2.next = &n3;
//	n3.next = &n4;
//	n4.next = &n5;
//
//	for (Node* p = head; p != NULL; p = p->next)
//		printf("%d\n", p->data);
//
//
//}

//#pragma warning(disable: 4996) //메모리그림 이중연결리스트, 더미노드
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//int main()
//{
//	Node* head;
//	Node* tail;
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//
//	head = &n1;
//	tail = &n5;
//
//	n1.next = &n2;
//	n2.prev = &n1;
//
//	n2.next = &n3;
//	n3.prev = &n2;
//
//	n3.next = &n4;
//	n4.prev = &n3;
//
//	n4.next = &n5;
//	n5.prev = &n4;
//
//
//
//	for (Node* p = head; p != NULL; p = p->next)
//		printf("%d\n", p->data);
//
//
//}

//#pragma warning(disable: 4996) //메모리그림 더미노드
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//int main()
//{
//	Node dummy1 = { NULL };
//	Node dummy2 = { NULL };
//	Node* head = &dummy1;
//	Node* tail = &dummy2;
//	head->next = tail;
//	tail->prev = head;
//
//
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//
//	head->next = &n1;
//	n1.prev = head;
//	n1.next = tail;
//	tail->prev = &n1;
//
//
//
//	for (Node* p = head; p != NULL; p = p->next)
//		printf("%d\n", p->data);
//
//
//}

//#pragma warning(disable: 4996) //메모리그림 더미노드
//#include <stdio.h> 
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//int main()
//{
//	Node dummy1 = { NULL };
//	Node dummy2 = { NULL };
//	Node* head = &dummy1;
//	Node* tail = &dummy2;
//	head->next = tail;
//	tail->prev = head;
//
//
//	Node n1 = { 10,NULL,NULL };
//	Node n2 = { 20,NULL,NULL };
//	Node n3 = { 30,NULL,NULL };
//	Node n4 = { 40,NULL,NULL };
//	Node n5 = { 50,NULL,NULL };
//
//	Node* ptail;
//	ptail = tail->prev;
//	ptail->next = &n1;
//	n1.prev = head;
//	n1.next = tail;
//	tail->prev = &n1;
//
//	ptail = tail->prev;
//	ptail->next = &n2;
//	n2.prev = head;
//	n2.next = tail;
//	tail->prev = &n2;
//
//	ptail = tail->prev;
//	ptail->next = &n3;
//	n3.prev = head;
//	n3.next = tail;
//	tail->prev = &n3;
//
//
//
//	for (Node* p = head; p != NULL; p = p->next)
//		printf("%d\n", p->data);
//
//
//}

#pragma warning(disable: 4996) //메모리그림 더미노드
#include <stdio.h> 
#include <stdlib.h>

struct Node
{
	int data;
	Node* prev;
	Node* next;
};
void AddTail(Node* head, Node* tail, Node* n)
{
	Node* ptail = tail->prev;

	ptail = tail->prev;
	ptail->next = n;
	n->prev = ptail;
	n->next = tail;
	tail->prev = n;
}
int main()
{
	Node dummy1 = { NULL };
	Node dummy2 = { NULL };
	Node* head = &dummy1;
	Node* tail = &dummy2;
	head->next = tail;
	tail->prev = head;


	Node n1 = { 10,NULL,NULL };
	Node n2 = { 20,NULL,NULL };
	Node n3 = { 30,NULL,NULL };
	Node n4 = { 40,NULL,NULL };
	Node n5 = { 50,NULL,NULL };

	AddTail(head, tail, &n1);
	AddTail(head, tail, &n2);
	AddTail(head, tail, &n3);
	AddTail(head, tail, &n4);
	AddTail(head, tail, &n5);


	for (Node* p = head; p != NULL; p = p->next)
		printf("%d\n", p->data);


}