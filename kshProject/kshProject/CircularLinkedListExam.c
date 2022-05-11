#include "CircularLinkedList.h"
#include <stdio.h>
#include <string.h>
#define  _CRT_SECURE_NO_WARNINGS

int main(void) {
	
	printf("%d", strcmp("월", "수"));
	listNode* CL =NULL;

	printList_c(CL);
	insertFirstNode_c(CL, &CL, "월");
	printList_c(CL);
	insertFirstNode_c(CL, &CL, "금");
	printList_c(CL);
	insertMiddleNode_c(CL, &CL, CL, "수");
	printList_c(CL);
	deleteNode_c(CL,&CL,CL);
	printList_c(CL);
	listNode* pre = searchNode_c(CL, "월");
	deleteNode_c(CL,&CL,pre);
	printList_c(CL);
	deleteNode_c(CL, &CL, CL);
	printList_c(CL);

}