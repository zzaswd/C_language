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



//int main(void) {
//	int a = 10;
//	int* pi = &a;
//	double* pd;
//	
//	pd = pi;
//
//	printf("%d\n", *pd);
//
//
//	double db = 3.4;
//	pd = &db;
//
//	pi = (int*)pd;
//
//	printf("%d", *pi);
//
//	return 0;
//}


//int main(void) {
//
//
//
//	//int arr[5];
//	//arr[0] = 1;
//	//arr[1] = 2;
//	//scanf_s("%d", arr + 1);
//
//	//printf("%d, %d ", arr[0],arr[1]);
//	double arr[5];
//	arr[0] = 1.0;
//	arr[1] = 2.0;
//
//	scanf_s("%lf", arr+1);
//	printf("%lf,%lf", arr[0],arr[1]);
//
//
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
//int main_282p(void){
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
//int main_286p(void) {
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


//----------- 확인 문제
//int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//void print_month(int* mp) {
//	
//	for (int i = 0; i < 12; i++) {
//		printf("%5d", mp[i]);
//		if ((i+1) % 5 == 0) printf("\n");
//	}
//}
//
//
//int main(void) {
//
//	print_month(month);
//}





// -------------- 도전문제

//void input_nums(int* lotto_nums);
//void print_nums(int* lotto_nums);
//
//int main(void) {
//
//	int lotto_nums[6];
//
//	input_nums(lotto_nums);
//	print_nums(lotto_nums);
//
//	return 0;
//}
//
//void input_nums(int* lotto_nums) {
//
//	int temp;
//	int i = 0;
//	while (1) {
//		if (i == 6) break;
//		int compare = -1;
//		scanf_s("%d", &temp);
//		for (int j = 0; j < i; j++) {
//			if (lotto_nums[j] == temp) {
//				printf("같은 번호가 있습니다!\n");
//				compare = 1;
//				break;;
//			}
//		}
//
//		if (compare == 1) continue;
//		else lotto_nums[i] = temp;
//		i++;
//		
//	}
//}
//
//void print_nums(int* lotto_nums) {
//	printf("로또 번호 : ");
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", lotto_nums[i]);
//	}
//}


 