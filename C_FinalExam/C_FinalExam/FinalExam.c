#include<stdio.h>

//1번 문제

//int main(void) {
//	for (int i = 0; i < 3; i++) {
//		
//		for (int j = 0; j <5-(2*i+1); j++) {
//			printf(" ");
//		}
//		
//		for (int j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2번 문제

//void swap(int* pa, int *pb) {
//
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main(void) {
//	int a = 20, b = 30;
//	swap(&a, &b);
//	
//	printf("a:%d, b:%d\n", a, b);
//	
//	return 0;
//}

//3번 문제


//double find_max(double* pa, int size) {
//	double max = pa[0];
//
//	for (int i = 1; i < size; i++) {
//		if (pa[i] > max) max = pa[i];
//	}
//
//	return max;
//}
//
//int main(void) {
//	double max;
//	double ary[] = { 2.5,3.1,5.5,7.1,4.6,9.9,1.5 };
//	int size = sizeof(ary) / sizeof(ary[1]);
//
//	max = find_max(ary, size);
//	printf("배열의 최대값 : %.1lf", max);
//
//	return 0;
//}

//4번 문제

//void print_ary(int* pa, int size) {
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", pa[i]);
//	}
//	printf("\n");
//
//}
//
//int main(void) {
//	int ary1[] = { 10,20,30,40,50 };
//	int ary2[] = { 10,20,30,40,50,60,70 };
//	
//	int size = sizeof(ary1) / sizeof(ary1[0]);
//
//	print_ary(ary1, size);
//
//	size = sizeof(ary2) / sizeof(ary2[0]);
//
//	print_ary(ary2, size);
//
//	return 0;
//}


//5번 문제


//char* my_strcpy(char* pd, char* ps) {
//
//	char* po = pd;
//
//	while (*ps!='\0') {
//		*pd++ = *ps++;
//	}
//	*pd = '\0';
//
//	return po;
//}
//
//
//int main(void) {
//
//	char str[20] = "strawberry";
//
//	my_strcpy(str, "apple");
//	printf("바꾼 후 문자열 : %s\n", str);
//
//	return 0;
//}


// 6번 문제

//int prime_check(int n) {
//	int result = 1;
//	for (int i = n - 1; i > 1; i--) {
//		if (n % i == 0) {
//			result = 0;
//			break;
//		}
//	}
//
//	return result;
//}

//int main(void) {
//
//	int num,count = 0;
//	printf("#양수 입력 : ");
//	scanf("%d", &num);
//	
//	//printf("%d", prime_check(num));
//	for (int i = 2; i <= num; i++) {
//
//		if (prime_check(i)) {
//			printf("%5d",i);
//			count++;
//			if (count % 5 == 0) {
//				printf("\n");
//				count = 0;
//			}
//		}
//	}
//
//	return 0;
//}