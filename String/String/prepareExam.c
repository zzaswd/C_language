#include<stdio.h>
#include<string.h>
//int main_Chaper$(void) {
//
//	double kg, cm; // �����Ը� cm�� �������� ����.
//
//	printf("������(kg)�� Ű(cm) �Է� : ");
//	scanf("% .1lf, % .1lf", &kg, &cm);
//	
//	double BMI = (kg*10000) / (cm * cm);
//	
//	if (BMI >= 20.0 && BMI < 25.0)
//		printf("ǥ���Դϴ�\n");
//	else
//		printf("ü�߰����� �ʿ��մϴ�.\n");
//}

//int main_Chapter5(void) {
//
//	int x, y;
//	char Oper;
//	
//	printf("��Ģ���� �Է�(����) : ");
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
//		printf("�ƹ��͵� �ƴϴ�");
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
//	printf("���� �Է� : ");
//	gets(from);
//	int count = 0;
//	for (int i = 0; i < strlen(from); i++) {
//		if (from[i] >= 'A' && from[i] <= 'Z') {
//			from[i] = from[i] + ('a' - 'A');
//			count++;
//		}
//	}
//	
//	printf("�ٲ� ���� : ");
//	puts(from);
//	printf("�ٲ� ���� �� : %d", count);
//
//
//	return 0;
//
//}