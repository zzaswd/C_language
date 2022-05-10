#include <stdio.h>
#include "LinkedList.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	
	listNode* L = NULL;

	//L = createLinkedList();
	printf("(1) 공백 리스트 생성하기! \n");
	printList(L);

	printf("\n(2) 리스트에 [수] 노드 삽입하기! \n");
	insertFirstNode(L, &L, "수");
	printList(L);

	printf("\n(3) 리스트 마지막에 [금] 노드 삽입하기 ! \n");
	insertLastNode(L,&L, "금");
	printList(L);

	printf("\n(4) 리스트 첫 번째에 [월] 노드 삽입하기 ! \n");
	insertFirstNode(L,&L, "월");
	printList(L);

	printf("\n(5) 리스트 두 번째와 세 번째 사이에 [화] 노드 삽입하기 ! \n");
	insertMiddleNode(L,&L, L->link, "화");
	printList(L);

	printf("\n(6) 리스트 역순서 ! \n");
	reverse(L,&L);
	printList(L);

	printf("\n(7) 리스트 화 노드 값 찾고 지우기 ! \n");
	listNode* temp = searchNode(L, "화");
	deleteNode(L,&L, temp);
	printList(L);

	printf("\n(8) 리스트 공간을 해제하여 공백 리스트로 만들기 ! \n");
	freeLinkedList(L,&L);
	printList(L);


	int a;
	scanf_s("%d", &a); return 0;

}