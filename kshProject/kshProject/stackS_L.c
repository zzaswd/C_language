#include <stdio.h>
#include <string.h>
#include "stackS_L.h"

int isStackEmpty_L(void) {
	if (top == NULL) return 1;
	else return 0;
}

void push_L(element item) {
	stackNode* newNode = (stackNode*)malloc(sizeof(stackNode));
	newNode->data = item;
	newNode->link = top;
	top = newNode;
}

element pop_L(void) {
	if (isStackEmpty_L()) {
		printf("노드가 없습니다.\n");
		return 0;
	}
	stackNode* temp = top;
	top = top->link;
	element item = temp->data;
	free(temp);
	return item;
}

element peek_L(void) {
	if (isStackEmpty_L()) {
		printf("노드가 없습니다.\n");
		return 0;
	}
	return top ->data;
}

void printStack_L(void) {
	stackNode* temp = top;
	printf("\n STACK [");
	if (isStackEmpty_L()) return printf("]");

	while (temp != NULL) {
		printf("%d  ", temp->data);
		temp = temp->link;
	}
	printf("]");
}