#include <stdio.h>


//int main_page238(void) {
//
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10;
//
//	printf("�����ͷ� a �� ��� : %d\n", *pa);
//	printf("���������� a �� ��� : %d\n", a);
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
//	printf("�� ������ �� : %d, %d \n", *pa, *pb);
//	printf("�� ������ �� : %d \n", *pt);
//	printf("�� ������ ��� : %.1lf\n", *pg);
//
//	return 0;
//}

//int main_page244(void) {
//	int a = 10, b = 20;
//	const* pa = &a;
//
//	printf("���� a �� : %d\n", *pa);
//	
//	pa = &b;
//	printf("���� b �� : %d\n", *pa);
//
//	pa = &a;
//	a = 20;
//	printf("���� a �� : %d\n", *pa);
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
//	printf("Char�� �ڷ��� �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("Int�� �ڷ��� �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("Double�� �ڷ��� �ּ� ũ�� : %d\n", sizeof(&db));
//
//
//
//	printf("Char�� �������� �ּ� ũ�� : %d\n", sizeof(pc));
//	printf("Int�� �������� �ּ� ũ�� : %d\n", sizeof(pi));
//	printf("Double�� �������� �ּ� ũ�� : %d\n", sizeof(pd));
//
//	printf("Char�� �������� �� ũ�� : %d\n", sizeof(*pc));
//	printf("Int�� �������� �� ũ�� : %d\n", sizeof(*pi));
//	printf("Double�� �������� �� ũ�� : %d\n", sizeof(*pd));
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