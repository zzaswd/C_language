#pragma once

typedef struct DNode {
	struct DNode* llink;
	char data[5];
	struct DNode* rlink;
}dNode;


void printList_d(dNode* DL);
void insertNode_d(dNode* DL, dNode** ADL, dNode* pre,char* x);
void deleteNode_d(dNode* DL, dNode** ADL, dNode* pre);
dNode* searchNode_d(dNode* DL, char* x);
