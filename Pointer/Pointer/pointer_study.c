#include<stdio.h>


//int main_236p(void) {
//	int a;
//	double b;
//	char c;
//	
//	int* pa = &a;
//	double* pb= &b;
//	char* pc=&c;
//
//	printf("int�� ������ �ּ� : %x, %x\n", &a,pa);
//	printf("double�� ������ �ּ� : %x, %x\n", &b,pb);
//	printf("char�� ������ �ּ� : %x, %x\n", &c,pc);
//
//	printf("int�� ������ ������ �ּ� : %x\n", &pa);
//	printf("double�� ������ ������ �ּ� : %x\n", &pb);
//	printf("char�� ������ ������ �ּ� : %x\n", &pc);
//	
//	printf("int�� ������ ������ ũ�� %d\n", sizeof(pa));
//	printf("double�� ������ ������ ũ�� %d\n", sizeof(pb));
//	printf("char�� ������ ������ ũ�� %d\n", sizeof(pc));
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

//int main(void) {
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("���� a �� :  %d\n", *pa);
//	pa = &b;
//
//	printf("���� b �� : %d\n", *pa); 
//	pa = &a;
//	a = 20;
//	printf("���� a �� :  %d\n", *pa);
//
//	return 0;
//}


//int main(void) {
//	int arr[] = { 1,2,3 };
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//
//	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
//	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
//	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
//
//	printf("char�� �������� �ּ� ũ�� : %d\n", sizeof(pc));
//	printf("int�� �������� �ּ� ũ�� : %d\n", sizeof(pi));
//	printf("double�� �������� �ּ� ũ�� : %d\n", sizeof(pd));
//
//	printf("char�� �������� ���� ũ�� : %d\n", sizeof(*pc));
//	printf("int�� �������� ���� ũ�� : %d\n", sizeof(*pi));
//	printf("double�� �������� ���� ũ�� : %d\n", sizeof(*pd));
//	
//	pi = 15727912+4; //arr�� �ּҰ��� dec�� ��ȯ�ؼ� �־��ָ� 1 ��µǴ� ���� Ȯ�� ����. 
//	printf("%d", *pi);
//	
//	return 0;
//}

//void swap(int x, int y);
//
//int main(void) { 
//
//	int a = 10, b = 20;
//
//	swap(a, b);
//	printf("a : %d, b : %d\n", a, b);
//	return 0;
//	
//}
//
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}


//void swap(int* x, int* y);
//
//int main(void) {
//	char arr[3];
//	int a = 10, b = 20;
//
//	swap(&a, &b);
//	printf("a : %d, b : %d\n", a, b);
//
//	printf("%d", sizeof(*arr));
//
//	return 0;
//
//}
//
//void swap(int *x, int *y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}


//int main(void) {
//
//	int arr[3];
//	int i;
//	*(arr + 0) = 10;
//	*(arr + 1) = *(arr + 0) + 10;
//	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
//	scanf_s("%d", arr + 2);
//
//	for (int i = 0; i < 3; i++) {
//		printf("%5d", *(arr+i));
//	}
//
//	return 0;
//
//}


//int main(void) {
//	int arr[3] = { 10,20,30 };
//	int* pa = arr;
//	int i;
//
//	printf("�迭�� �� :  ");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//
//	}
//
//	return 0;
//}

//int main(void) {
//	int arr[3] = { 10,20,30 };
//	int* pa = arr;
//	int i;
//
//	printf("�迭�� �� :  ");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr);
//		arr++;
//
//	}
//
//	return 0;
//}