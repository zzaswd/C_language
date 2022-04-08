#include<stdio.h>
#include<string.h>
//int main_Chaper$(void) {
//
//	double kg, cm; // 몸무게를 cm의 제곱으로 나눔.
//
//	printf("몸무게(kg)과 키(cm) 입력 : ");
//	scanf("% .1lf, % .1lf", &kg, &cm);
//	
//	double BMI = (kg*10000) / (cm * cm);
//	
//	if (BMI >= 20.0 && BMI < 25.0)
//		printf("표준입니다\n");
//	else
//		printf("체중관리가 필요합니다.\n");
//}

//int main_Chapter5(void) {
//
//	int x, y;
//	char Oper;
//	
//	printf("사칙연산 입력(정수) : ");
//	scanf("%d %c %d", &x, &Oper, &y);
//
//	switch (Oper) { // + = 43, - = 45, / = 47, * = 42
//	case 43:
//		printf("%d%c%d=%d", x, Oper, y, x + y);
//		break;
//	case 45:
//		printf("%d%c%d=%d", x, Oper, y, x - y);
//		break;
//	case 47:
//		printf("%d%c%d=%d", x, Oper, y, x / y);
//		break;
//	case 42:
//		printf("%d%c%d=%d", x, Oper, y, x * y);
//		break;
//	default:
//		printf("아무것도 아니다");
//		break;
//	}
//}

//int main_Chapter6(void) {
//
//	int num_finish;
//	scanf("%d",&num_finish);
//	int prime[1000] = { 0 };
//
//	for (int i = 2; i <= num_finish; i++) {
//		
//		prime[i] = 1;
//		
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				prime[i] = -1;
//				break;
//			}
//		}
//
//	}
//
//	// {0,0,1,1,-1,1,-1,1,-1,-1,
//
//	int count = 0;
//
//	for (int i = 2; i <= num_finish; i++) {
//		
//		if (prime[i] == 1) {
//			printf("%5d", i);
//			count++;
//			if (count % 5 == 0) {
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//int rec_func(int n);
//
//int main_Chapter7(void) {
//	
//	printf("%d",rec_func(10));
//	
//	return 0;
//}
//
//int rec_func(int n) {
//
//	if (n == 0) return 0;
//
//	return rec_func(n - 1) + n;
//}

//int main_Chapter8(void) {
//
//	
//	char from[100];
//
//	printf("문장 입력 : ");
//	gets(from);
//	int count = 0;
//	for (int i = 0; i < strlen(from); i++) {
//		if (from[i] >= 'A' && from[i] <= 'Z') {
//			from[i] = from[i] + ('a' - 'A');
//			count++;
//		}
//	}
//	
//	printf("바뀐 문장 : ");
//	puts(from);
//	printf("바뀐 문자 수 : %d", count);
//
//
//	return 0;
//
//}