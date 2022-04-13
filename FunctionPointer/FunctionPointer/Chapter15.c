#include <stdio.h>
#include <stdlib.h>

// 책 439p

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

// 책 441p
// 함수를 매개변수로 받기

//void func(int(*fp)(int a, int b));
//
//int sum(int a, int b);
//int mul(int a, int b);
//int Max(int a, int b);
//
//int main(void) {
//	int sel;
//
//	printf("01. 두 정수의 합 \n");
//	printf("02. 두 정수의 곱 \n");
//	printf("03. 두 정수 중 큰 값 \n");
//	printf("원하는 연산을 선택하세요 : ");
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
//	printf("두 정수를 입력하세요 : ");
//	scanf("%d %d", &x, &y);
//	
//	printf("연산의 결과는 다음과 같습니다 : %d", fp(x, y));
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

// 책 444p

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

// 책 447p

//int main(void) {
//
//	int arr[5] = { 10,20,30,40,50 };
//	void* pa = arr;
//	printf("%d", *((int*)pa + 2));
//
//	return 0;
//}

// 책 451p malloc free

//int main(void) {
//
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));
//	pd = (double*)malloc(sizeof(double));
//
//	if (pi == NULL) {
//		printf(" # 메모리가 부족합니다. \n");
//		exit(1);
//	}
//
//	*pi = 10;
//	*pd = 7.7;
//
//	printf("정수형으로 사용 : %d\n", *pi);
//	printf("실수형으로 사용 : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
//
//	return 0;
//}

// 책 454p malloc arr

