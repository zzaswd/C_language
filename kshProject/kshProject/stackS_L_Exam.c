#include <stdio.h>
#include "stackS_L.h"

int main(void) {
	element item;
	top = NULL;
	printf("\n ** 연결 스택 연산 ** \n");
	printStack_L();

	push_L(1); printStack_L();
	push_L(2); printStack_L();
	push_L(3); printStack_L();

	item = peek_L(); printStack_L();
	printf("\tpeek => %d", item);


	item = pop_L(); printStack_L();
	printf("\tpop => %d", item);

	item = pop_L(); printStack_L();
	printf("\tpop => %d", item);

	item = pop_L(); printStack_L();
	printf("\t pop => %d", item);
}