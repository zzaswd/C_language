#include <stdio.h>
#include <stdlib.h>
#include "queueS.h"

QueueType* createQueue(void) {
	QueueType* Q= (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return Q;
}

int isQueueEmpty(QueueType* Q) {
	if (Q->front == Q->rear) return 1;
	else return 0;
}

int isQueueFull(QueueType* Q) {
	if (Q->rear == Q_SIZE - 1) return 1;
	else return 0;
}

void enQueue(QueueType* Q, element item) {
	if (isQueueFull(Q)) return printf("꽉 찼습니다.\n");
	else {
		Q->rear += 1;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(QueueType* Q) {
	if (isQueueEmpty(Q)) return printf("아무것도 없어서 삭제 불가\n");
	else {
		Q->front += 1;
		return Q->queue[Q->front];
	}
}

element peekQ(QueueType* Q) {
	if (isQueueEmpty(Q)) return printf("아무것도 없어서 못찾앙\n");
	else return Q->queue[Q->front + 1];
}

void printQ(QueueType* Q) {
	printf("Q = [ ");

	for (int idx = Q->front + 1; idx <=Q->rear; idx++) {
		printf("%c ", Q->queue[idx]);
	}

	printf("]");

}