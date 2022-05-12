#pragma once

typedef int element;

typedef struct stackNode {
	element data;
	struct stackNode* link;
}stackNode;

stackNode* top;

int isStackEmpty_L(void);
void push_L(element item);
element pop_L(void);
element peek_L(void);
void printStack_L(void);

