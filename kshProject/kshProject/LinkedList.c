#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "LinkedList.h"


listNode* createLinkedList(void) {
	listNode* L = (listNode*)malloc(sizeof(listNode));
	L->link = NULL;
	return L;
}

void freeLinkedList(listNode* L, listNode**AL) {
	listNode* p;
	while (L != NULL) {
		p = L;
		L = L->link;
		free(p);
		p = NULL;
	}
	*AL = NULL;
}

void printList(listNode* L) {
	printf("L = (");
	listNode* pre;
	pre = L;

	while (pre!= NULL) {
		printf("%s", pre->data);
		pre = pre->link;
		if (pre!= NULL) printf(", ");
	}
	printf(")\n");
}

void insertFirstNode(listNode* L,listNode** AL, char* x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L;
	*AL = newNode;
}

void insertMiddleNode(listNode* L, listNode** AL,listNode* pre, char* x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L == NULL) {
		newNode->link = NULL;
		*AL= newNode;
	}
	else if (pre == NULL) {
		newNode->link = L->link;
		*AL = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void insertLastNode(listNode* L,listNode** AL, char* x) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;

	if (L == NULL) {
		*AL = newNode;
	}

	else {
		listNode* pre = L;
		while (pre->link != NULL) {
			pre = pre->link;
		}
		pre->link = newNode;
	}

}

listNode* searchNode(listNode* L, char* x) {
	listNode* pre;
	pre = L;
	if (strcmp(pre->data, x) == 0) {
		return NULL;
	}
	while (pre->link != NULL) {
		if (strcmp(pre->link->data, x) == 0) {
			return pre;
		}
		pre = pre->link;
	}
	return pre->link;
}

void deleteNode(listNode* L,listNode** AL, listNode* pre) {
	if (L == NULL) return;
	else if (pre == NULL) {
		*AL = L->link;
		free(L);
		return;
	}
	else {
		listNode* temp = pre->link->link;
		free(pre->link);
		pre->link = temp;
	}

}

void reverse(listNode* L,listNode**AL) {
	listNode* p, * q, * r;

	p = L;
	q = NULL;
	r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	*AL = q;
}

//linkedList_h* createLinkedList_h(void) {
//	linkedList_h* L = (linkedList_h *)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//
//void freeLinkedList_h(linkedList_h* L) {
//	listNode* p;
//		while (L->head != NULL) {
//			p = L->head;
//			L->head = L->head->link;
//			free(p);
//			p = NULL;
//		}
//}
//
//void printList(linkedList_h* L) {
//	printf("L = (");
//
//		listNode* pre;
//		pre = L->head;
//		while (pre != NULL) {
//			printf("%s", pre->data);
//			pre = pre->link;
//			if (pre != NULL) printf(", ");
//		}
//		printf(")\n");
//}
//
//void insertFirstNode(linkedList_h* L, char* x) {
//	listNode* newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = L->head;
//	L->head = newNode;
//}
//
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
//	listNode* newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	if (L->head == NULL) {
//		newNode->link = NULL;
//		L->head = newNode;
//	}
//
//	else if (pre == NULL) {
//		newNode->link = L->head->link;
//		L->head = newNode;
//	}
//	else {
//		newNode->link = pre->link;
//		pre->link = newNode;
//	}
//}
//
//void insertLastNode(linkedList_h* L, char* x) {
//	listNode* newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = NULL;
//
//	if (L->head == NULL) {
//		L->head = newNode;
//	}
//	else {
//		listNode* pre = L->head;
//		while (pre->link != NULL) {
//			pre = pre->link;
//		}
//		pre->link = newNode;
//	}
//
//}
//
//listNode* searchNode(linkedList_h* L, char* x) {
//	listNode* pre;
//	pre = L->head;
//	if (strcmp(pre->data, x) == 0) {
//		return NULL;
//	}
//	while (pre->link != NULL) {
//		if (strcmp(pre->link->data, x)== 0) {
//			return pre;
//		}
//		pre = pre->link;
//	}
//	return pre->link;
//}
//
//void deleteNode(linkedList_h* L, listNode* pre) {
//	if (L->head == NULL) return;
//	else if (pre == NULL) {
//		L->head = L->head->link;
//		free(pre);
//		return;
//	}
//	else {
//		listNode* temp = pre->link->link;
//		free(pre->link);
//		pre->link = temp;
//	}
//
//}
//
//void reverse(linkedList_h* L) {
//	listNode* p, *q, *r;
//
//	p = L->head;
//	q = NULL;
//	r = NULL;
//
//	while (p != NULL) {
//		r = q;
//		q = p;
//		p = p->link;
//		q->link = r;
//	}
//	L->head = q;
//}