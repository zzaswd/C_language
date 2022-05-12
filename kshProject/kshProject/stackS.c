#include <stdio.h>
#include "stackS.h"

int top = -1;

int isStackEmpty(void) {
	if (top == -1) return 1;
	else return 0;
}

int isStackFull(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

void push(element item) {
	if (isStackFull()) return printf("넘었어요!\n");
	else stack[++top] = item;
}

element pop(void) {
	if (isStackEmpty()) return printf("아무것도 없어요!\n");
	else return stack[top--];
}

element peek(void) {
	if (isStackEmpty()) return printf("아무것도 없어요!\n");
	else return stack[top];
}

void printStack(void) {
	printf("\nSTACK [");
	if (isStackEmpty()) printf("]");
	else {
		for (int idx = 0; idx <= top; idx++) {
			printf("%d  ",stack[idx]);
		}
		printf("]");
	}
}
