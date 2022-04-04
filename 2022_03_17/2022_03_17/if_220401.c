#include<stdio.h>
#include"print_char.h"
#include<string.h>
//int main(void) {
//
//	int a = 0, b = 0;
//	if (a > 0) {
//		b = 1;
//	}
//
//	else if (a == 0) {
//		b = 2;
//	}
//
//	else {
//		b = 3;
//	}
//
//	printf("B: %d\n", b);
//	
//
//	return 0;
//}


//int main(void) {
//	int a = 10, b = 20;
//	if (a < 0) {
//		if (b > 0) {
//			printf("ok");
//		}
//	}
//
//	else {
//		printf("ok");
//	}
//
//	return 0;
//
//}

//int main(void) {
//	int rank = 66 , m = 0;
//
//	//char rank = 'b';
//	switch (rank)
//	{
//	case 'A':
//		m = 300;
//	//	break;
//
//	case 'B':
//		m += 200;
//	//	break;
//
//	case 'c':
//		m += 100;
//	//	break;
//	default:
//		m += 10;
//	//	break;
//	}
//
//	printf("m = %d", m);
//
//
//
//}

//int main(void) {
//	int a = 1;
//	for (int i = 0; i < 3; i++) {
//		a = a * 2;
//	}
//	printf("%d", a);
//	return 0;
//}


//int add() {
//	int sum = 1;
//	sum++;
//	return sum;	
//}
//
//int main(void) {
//	
//	add();
//	add();
//	int result = add();
//	printf("%d", result);
//}


//int main(void) {
//
//	int a = 1;
//
//	do {
//		a = a * 2;
//	} while (a < 10);
//	printf("a : %d\n", a);
//
//	return 0;
//
//}

//int main(void) {
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("--------------------\n");
//
//	for (int i = 1; i <= 5; i++) {
//		if (i % 2 == 1) {
//			for (int j = 0; j < i; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//
//	printf("------------------\n");
//
//	for (int i = 1; i <= 5; i++) {
//		if (i % 2 == 1) {
//			for (int j = 0; j < 5-i; j++) {
//				printf(" ");
//			}
//			for (int j = 0; j < i; j++) {
//				printf("*");
//			}
//			
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//int main(void) {
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 10; i++) {
//
//		if (i == 7) continue;
//		sum += i;
//		if (sum > 30) break;
//	}
//
//	printf("누적한 값 : %d\n", sum);
//	printf("마지막 값으로 더한 값 : %d\n", i);
//
//	return 0;
//
//
//} 

//int sum(int, int);
//
//
//int main(void) {
//
//	int a = 10, b = 20;
//	int res;
//
//	res = sum(a, b);
//	printf("result : %d\n", res);
//	return 0;
//}
//
//int sum(int a, int b) {
//	int temp;
//	for(inti)
//	temp = a + b;
//	return temp;
//}


//int main(void) {
//	print_char('@', 5);
//	return 0;
//}


//void fruit(int);
//
//int main(void) {
//	fruit(1);
//	return 0;
//}
//
//void fruit(int i ) {
//
//	printf("apple\n");
//	if (i == 3)return;
//	fruit(++i);
//	printf("jam\n"); 
//
//}

//int main(void) {
//
//	char A[6];
//	
//	scanf("%s",A);
//
//	printf("%s", A);
//
//}

//int main(void) {
//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy("line", "tiger");
//	strcpy(str2, str1);
//
//	printf("%s", str1);
//	printf("%s", str2);
//
//	return 0;
//
//
//}


int main(void) {

	char arr[80];

	printf("문자열을 입력하시오 : ");
	gets(arr);

	printf("\n문자열 출력 : ");
	puts(arr);
	return 0;

}