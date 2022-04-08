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
//	printf("int형 변수의 주소 : %x, %x\n", &a,pa);
//	printf("double형 변수의 주소 : %x, %x\n", &b,pb);
//	printf("char형 변수의 주소 : %x, %x\n", &c,pc);
//
//	printf("int형 포인터 변수의 주소 : %x\n", &pa);
//	printf("double형 포인터 변수의 주소 : %x\n", &pb);
//	printf("char형 포인터 변수의 주소 : %x\n", &pc);
//	
//	printf("int형 포인터 변수의 크기 %d\n", sizeof(pa));
//	printf("double형 포인터 변수의 크기 %d\n", sizeof(pb));
//	printf("char형 포인터 변수의 크기 %d\n", sizeof(pc));
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

//int main(void) {
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("변수 a 값 :  %d\n", *pa);
//	pa = &b;
//
//	printf("변수 b 값 : %d\n", *pa); 
//	pa = &a;
//	a = 20;
//	printf("변수 a 값 :  %d\n", *pa);
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
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char형 포인터의 주소 크기 : %d\n", sizeof(pc));
//	printf("int형 포인터의 주소 크기 : %d\n", sizeof(pi));
//	printf("double형 포인터의 주소 크기 : %d\n", sizeof(pd));
//
//	printf("char형 포인터의 값의 크기 : %d\n", sizeof(*pc));
//	printf("int형 포인터의 값의 크기 : %d\n", sizeof(*pi));
//	printf("double형 포인터의 값의 크기 : %d\n", sizeof(*pd));
//	
//	pi = 15727912+4; //arr의 주소값을 dec로 변환해서 넣어주면 1 출력되는 것을 확인 가능. 
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
//	printf("세 번째 배열 요소에 키보드 입력 : ");
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
//	printf("배열의 값 :  ");
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
//	printf("배열의 값 :  ");
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
//	printf("pb : %u\n", pb); // pb와 pa의 차이는 sizeof(int) * 3의 차이.
//
//	pa++;
//	printf("pb - pa : %u\n", pb - pa); // 2. 주소 차이는 8나고 int형 크기인 4로 나누면 2.
//
//	printf("앞에 있는 배열 요소의 값 출력 : ");
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
//	printf("배열의 최대값 : %.1lf\n", max);
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
//	printf("5개의 실수값 입력 : ");
//	for (int i = 0; i < 5; i++) {
//		printf("%.1lf ",arr[i]);
//	}
//
//	printf("\n");
//	double max;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	max = find_max(arr, size);
//
//	printf("배열의 최대 값 : %.1lf",max);
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