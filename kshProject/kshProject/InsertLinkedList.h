#pragma once			// Header file이 여러번 중복 호출되면 안되기 때문에, 한번만 복사되도록 선언

typedef struct ListNode{			// ListNode 구조체 선언
	char data[4];
	struct ListNode* link;			// 자기 참조 구조체 사용
}listNode;

typedef struct {					// HEAD 구조체 선언
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void insertFirstNode(linkedList_h* L, char* x);
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
void insertLastNode(linkedList_h* L, char* x);
