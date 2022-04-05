#include <stdio.h>


//int main_page238(void) {
//
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10;
//
//	printf("포인터로 a 값 출력 : %d\n", *pa);
//	printf("변수명으로 a 값 출력 : %d\n", a);
//
//
//
//	return 0;
//}

//int main_page241(void) {
//	int a = 10, b = 15, total;
//	double avg;
//	int* pa, * pb;
//	int* pt = &total;
//	double* pg = &avg;
//
//	pa = &a;
//	pb = &b;
//
//	*pt = *pa + *pb;
//	*pg = *pt / 2.0;
//
//	printf("두 정수의 값 : %d, %d \n", *pa, *pb);
//	printf("두 정수의 합 : %d \n", *pt);
//	printf("두 정수의 평균 : %.1lf\n", *pg);
//
//	return 0;
//}

//int main_page244(void) {
//	int a = 10, b = 20;
//	const* pa = &a;
//
//	printf("변수 a 값 : %d\n", *pa);
//	
//	pa = &b;
//	printf("변수 b 값 : %d\n", *pa);
//
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 : %d\n", *pa);
//	
//	return 0;
//	
//}

//int main_page249(void) {
//
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//
//	printf("Char형 자료의 주소 크기 : %d\n", sizeof(&ch));
//	printf("Int형 자료의 주소 크기 : %d\n", sizeof(&in));
//	printf("Double형 자료의 주소 크기 : %d\n", sizeof(&db));
//
//
//
//	printf("Char형 포인터의 주소 크기 : %d\n", sizeof(pc));
//	printf("Int형 포인터의 주소 크기 : %d\n", sizeof(pi));
//	printf("Double형 포인터의 주소 크기 : %d\n", sizeof(pd));
//
//	printf("Char형 포인터의 값 크기 : %d\n", sizeof(*pc));
//	printf("Int형 포인터의 값 크기 : %d\n", sizeof(*pi));
//	printf("Double형 포인터의 값 크기 : %d\n", sizeof(*pd));
//
//
//
//	return 0;
//}



int main(void) {
	int a = 10;
	int* pi = &a;
	double* pd;
	
	pd = pi;

	printf("%d\n", *pd);


	double db = 3.4;
	pd = &db;

	pi = (int*)pd;

	printf("%d", *pi);

	return 0;
}