#include <stdio.h>
#include <stdlib.h>

// å 439p

//int sum(int a, int b);
//
//int main(void) {
//
//	int (*fb)(int a, int b);
//	fb = sum;
//
//	int res = fb(1, 2);
//	printf("%d", res);
//	return 0;
//}
//
//int sum(int a, int b) {
//	return a + b;
//}

// å 441p
// �Լ��� �Ű������� �ޱ�

//void func(int(*fp)(int a, int b));
//
//int sum(int a, int b);
//int mul(int a, int b);
//int Max(int a, int b);
//
//int main(void) {
//	int sel;
//
//	printf("01. �� ������ �� \n");
//	printf("02. �� ������ �� \n");
//	printf("03. �� ���� �� ū �� \n");
//	printf("���ϴ� ������ �����ϼ��� : ");
//
//	scanf("%d", &sel);
//
//	switch (sel) {
//	case 1: func(sum);
//		break;
//
//	case 2: func(mul);
//		break;
//	case 3: func(Max);
//		break;
//	}
//
//	return 0;
//}
//
//void func(int(*fp)(int a, int b)) {
//	int x, y;
//	printf("�� ������ �Է��ϼ��� : ");
//	scanf("%d %d", &x, &y);
//	
//	printf("������ ����� ������ �����ϴ� : %d", fp(x, y));
//}
//
//int sum(int a, int b) {
//	return a + b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int Max(int a, int b) {
//	if (a >= b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}

// å 444p

//int main(void) {
//
//	int a = 10;
//	double b = 7.5;
//
//	void* p;
//
//	p = &a;
//	printf("%d\n", *(int*)p);
//
//	p = &b;
//	printf("%.1lf\n", *(double*)p);
//
//	return 0;
//}

// å 447p

//int main(void) {
//
//	int arr[5] = { 10,20,30,40,50 };
//	void* pa = arr;
//	printf("%d", *((int*)pa + 2));
//
//	return 0;
//}

// å 451p malloc free

//int main(void) {
//
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));
//	pd = (double*)malloc(sizeof(double));
//
//	if (pi == NULL) {
//		printf(" # �޸𸮰� �����մϴ�. \n");
//		exit(1);
//	}
//
//	*pi = 10;
//	*pd = 7.7;
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
//
//	return 0;
//}

// å 454p malloc arr

