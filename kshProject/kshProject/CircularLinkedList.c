#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "CircularLinkedList.h"

void printList_c(listNode*CL) {
	printf("CL = (");
	listNode* temp = CL;
	if (CL == NULL) printf(")\n");
	else {
		printf("%s", temp->data);
		temp = temp->link;
		while (temp != CL) {
			printf(" , %s",temp->data);
			temp = temp->link;
		}
		printf(")\n");
	}
}

void insertFirstNode_c(listNode* CL, listNode** ACL, char* x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL == NULL) {
		newNode->link = newNode;
		*ACL = newNode;
	}
	else {
		listNode* temp = CL;
		while (temp->link != CL) temp = temp->link;
		temp->link = newNode;
		newNode->link = CL;
		*ACL = newNode;
	}
}

void insertMiddleNode_c(listNode* CL, listNode** ACL, listNode* pre, char* x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL == NULL) {
		newNode->link = newNode;
		*ACL = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void deleteNode_c(listNode* CL, listNode** ACL, listNode* pre) {
	if (CL == NULL) return;
	else if (CL == CL->link) {
		free(CL);
		*ACL = NULL;
	}
	else if (pre == NULL) {
		listNode* old = CL;
		CL = CL->link;
		free(old);
	}
	else {
		listNode* old = pre->link;
		if (old == CL) {
			pre->link = old->link;
			free(old);
			*ACL = pre->link;
		}
		else {
			pre->link = old->link;
			free(old);
		}
	}
}

listNode* searchNode_c(listNode* CL, char* x) {
	if (CL == NULL) return;
	else {
		listNode* temp = CL;
		while (strcmp(temp->data, x) != 0) {
			temp = temp->link;
		}
		return temp;
	}
	
}