#include <stdio.h>
#include "stackS.h"

int main() {
	element item;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push(1);	printStack();
	push(2);	printStack();
	push(3);	printStack();

	item = peek();	printStack();
	printf("peek => %d", item);

	item = pop();	printStack();
	printf("\t pop => %d", item);

	item = pop();	printStack();
	printf("\t pop => %d", item);
	
	item = pop();	printStack();
	printf("\t pop => %d\n", item);

	return 0;
}