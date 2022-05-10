#include <stdio.h>
#include "LinkedList.h"
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	
	listNode* L = NULL;

	//L = createLinkedList();
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L);

	printf("\n(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(L, &L, "��");
	printList(L);

	printf("\n(3) ����Ʈ �������� [��] ��� �����ϱ� ! \n");
	insertLastNode(L,&L, "��");
	printList(L);

	printf("\n(4) ����Ʈ ù ��°�� [��] ��� �����ϱ� ! \n");
	insertFirstNode(L,&L, "��");
	printList(L);

	printf("\n(5) ����Ʈ �� ��°�� �� ��° ���̿� [ȭ] ��� �����ϱ� ! \n");
	insertMiddleNode(L,&L, L->link, "ȭ");
	printList(L);

	printf("\n(6) ����Ʈ ������ ! \n");
	reverse(L,&L);
	printList(L);

	printf("\n(7) ����Ʈ ȭ ��� �� ã�� ����� ! \n");
	listNode* temp = searchNode(L, "ȭ");
	deleteNode(L,&L, temp);
	printList(L);

	printf("\n(8) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� ����� ! \n");
	freeLinkedList(L,&L);
	printList(L);


	int a;
	scanf_s("%d", &a); return 0;

}