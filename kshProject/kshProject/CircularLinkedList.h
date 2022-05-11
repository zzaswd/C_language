#pragma once


typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;


void printList_c(listNode* CL);
void insertFirstNode_c(listNode* CL, listNode** ACL, char* x);
void insertMiddleNode_c(listNode* CL, listNode** ACL,listNode* pre, char* x);
void deleteNode_c(listNode* CL, listNode**ACL,listNode* pre);
listNode* searchNode_c(listNode* CL, char* x);
