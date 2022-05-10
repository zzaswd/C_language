#pragma once

typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

//typedef struct {
//	listNode* head;
//}linkedList_h;


//listNode* createLinkedList(void);
void freeLinkedList(listNode* L, listNode** AL);
void printList(listNode* L);
void insertFirstNode(listNode* L, listNode** AL, char* x);
void insertMiddleNode(listNode* L, listNode** AL, listNode* pre, char* x);
void insertLastNode(listNode* L, listNode** AL, char* x);
void deleteNode(listNode* L, listNode** AL, listNode* pre);
listNode* searchNode(listNode* L, char* x);
void reverse(listNode* L, listNode** AL);

//linkedList_h* createLinkedList_h(void);
//void freeLinkedList(linkedList_h* L);
//void printList(linkedList_h* L);
//void insertFirstNode(linkedList_h* L, char* x);
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
//void insertLastNode(linkedList_h* L, char* x);
//void deleteNode(linkedList_h* L, listNode* pre);
//listNode* searchNode(linkedList_h* L, char* x);
//void reverse(linkedList_h* L);
