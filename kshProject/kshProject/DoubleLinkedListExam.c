#include <stdlib.h>
#include "DoubleLinkedList.h"

int main(void) {

	dNode* DL = NULL;
	printList_d(DL);

	insertNode_d(DL, &DL, NULL, "월");
	printList_d(DL);

	insertNode_d(DL, &DL, DL, "화");
	printList_d(DL);

	dNode* p = searchNode_d(DL, "월");
	insertNode_d(DL, &DL, p, "수");
	printList_d(DL);

	p = searchNode_d(DL, "월");
	deleteNode_d(DL, &DL, p);
	printList_d(DL);

	return 0;
}