#include<stdio.h>
#include<string.h>


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


//int main_275p(void) {
//
//	int arr[5] = { 10,20,30,40,50 };
//	int* pa = arr;
//	int* pb = pa + 3;
//	printf("pa : %u\n", pa);
//	printf("pb : %u\n", pb); // pb�� pa�� ���̴� sizeof(int) * 3�� ����.
//
//	pa++;
//	printf("pb - pa : %u\n", pb - pa); // 2. �ּ� ���̴� 8���� int�� ũ���� 4�� ������ 2.
//
//	printf("�տ� �ִ� �迭 ����� �� ��� : ");
//	if (pa < pb) printf("%d", *pa);
//	else printf("%d", *pb);
//
//	return 0;
//}



//void print_arr(int* pa);
//
//int main_282p(void) {
//	int arr[5] = { 1,2,3,4,5 };
//
//	print_arr(arr);
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//void print_arr(const int* pa) {
//
//	for (int i = 0; i < 5; i++) {
//		//printf("%d ", *(pa + i));
//		//pa[3] = 1000;
//		printf("%d ", pa[i]);
//	}
//
//}


//void print_arr(int* pa, int size);
//
//int main_284p(void) {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5,6,7 };
//
//	print_arr(arr1, sizeof(arr1) / sizeof(arr1[1]));
//	printf("\n");
//	print_arr(arr2, sizeof(arr2) / sizeof(arr2[1]));
//
//	return 0;
//
//}
//
//void print_arr(int* pa, int size) {
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", pa[i]);
//	}
//}


//void input_arr(double* pa, int size);
//double find_max(double* pa, int size);
//
//int main(void) {
//
//	double arr[5];
//	double max;
//	int size = sizeof(arr) / sizeof(arr[1]);
//
//	input_arr(arr, size);
//	max = find_max(arr, size);
//	printf("�迭�� �ִ밪 : %.1lf\n", max);
//	return 0;
//
//}
//
//void input_arr(double* pa, int size) {
//
//	for (int i = 0; i < size; i++) {
//		scanf_s("%lf", &pa[i]);
//	}
//}
//
//double find_max(double* pa, int size) {
//	
//	double max = pa[0];
//	for (int i = 1; i < size; i++) {
//		if (pa[i] > max) max = pa[i];
//	}
//
//	return max;
//}



//double find_max(double* pa, int size);
//
//int main(void) {
//
//	
//	double arr[5] = { 1.0,2.0,13.0,4.0,5.0 };
//	printf("5���� �Ǽ��� �Է� : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%.1lf ",arr[i]);
//	}
//
//	printf("\n");
//	double max;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	max = find_max(arr, size);
//
//	printf("�迭�� �ִ� �� : %.1lf",max);
//	
//
//	return 0;
//}
//
//
//double find_max(double* pa, int size) {
//	double max = pa[0];
//
//	for (int i = 1; i < size; i++) {
//		if (pa[i] > max) max = pa[i];
//	}
//
//	return max;
//}