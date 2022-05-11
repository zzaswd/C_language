#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

void printList_d(dNode* DL) {
	printf("DL = (");

	if (DL == NULL) printf(")\n");
	else {
		dNode* temp = DL;
		printf("%s", temp->data);
		temp = temp->rlink;
		while (temp != NULL) {
			printf(", %s ",temp->data);
			temp = temp->rlink;
		}
		printf(")\n");
	}
}

void insertNode_d(dNode* DL, dNode** ADL, dNode* pre, char* x) {
	dNode* newNode = (dNode*)malloc(sizeof(dNode));
	strcpy(newNode->data, x);
	if (DL == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		*ADL = newNode;
	}
	else if(pre ==NULL) {
		newNode->rlink = DL;
		newNode->llink = NULL;
		DL->llink = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink= newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)		newNode->rlink->llink = newNode;
	}
}

void deleteNode_d(dNode* DL, dNode** ADL, dNode* p){
	if (DL == NULL) return;
	else if (p == NULL) return;
	else {
		if (DL == p) {
			DL->rlink->llink = NULL;
			*ADL = DL->rlink;
			free(DL);
		}
		else {
			p->llink->rlink = p->rlink;
			if (p->rlink != NULL) {
				p->rlink->llink = p->llink;
			}
			free(p);
		}
	}
}

dNode* searchNode_d(dNode* DL, char* x) {
	dNode* temp = DL;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return NULL;
}