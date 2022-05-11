#include <stdlib.h>
#include "DoubleLinkedList.h"

int main(void) {

	dNode* DL = NULL;
	printList_d(DL);

	insertNode_d(DL, &DL, NULL, "��");
	printList_d(DL);

	insertNode_d(DL, &DL, DL, "ȭ");
	printList_d(DL);

	dNode* p = searchNode_d(DL, "��");
	insertNode_d(DL, &DL, p, "��");
	printList_d(DL);

	p = searchNode_d(DL, "��");
	deleteNode_d(DL, &DL, p);
	printList_d(DL);

	return 0;
}