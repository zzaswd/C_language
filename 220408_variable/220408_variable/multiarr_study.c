#include <stdio.h>
#include <stdlib.h>
//-------------------------------------å 384p

//int main(void) {
//	int score[3][4];
//	int total;
//	double avg;
//
//
//	for (int i = 0; i < 3; i++) {
//		printf("4������ ���� �Է� : ");
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		total = 0;
//		for (int j = 0; j < 4; j++) {
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("���� : %d, ��� : %.2lf\n", total, avg);
//	}
//
//}



//-------------------------------------å 384p

//int main(void) {
//	char animal[5][20];
//
//	int count;
//
//	count = sizeof(animal) / sizeof(animal[0]);
//	for (int i = 0; i < count; i++) {
//		scanf("%s", animal[i]);
//	}
//
//
//	for (int i = 0; i < count; i++)
//	{
//		printf("%s     ", animal[i]);
//	}
//	return 0;
//}

// ------------------------------------å 404p

//int main(void) {
//
//	char* pary[5];
//	
//	pary[0] = "dog";
//	pary[1] = "elephant";
//	pary[2] = "horse";
//	pary[3] = "tiger";
//	pary[4] = "lion";
//
//	for (int i = 0; i < 5; i++) {
//		printf("%s\n", pary[i]);
//	}
//
//	return 0;
//}


// ------------------------------------å 417p

//int main(void){
//
//	int a = 10;
//	int* pi = &a;
//	int** ppi = &pi;
//
//	printf("------------------------------------------\n");
//	printf("����   ������   &����    *����   **����   \n");
//	printf("------------------------------------------\n");
//	printf("a %10d%10u\n", a, &a);
//	printf("pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
//	printf("------------------------------------------\n");
//	return 0;
//}

// ------------------------------------å 425p

//void print_str(char** pps, int cnt) {
//	for (int i = 0; i < cnt; i++) {
//		printf("%s\n", pps[i]);
//	}
//}
//
//int main(void) {
//
//	char* ptr_arr[] = { "eagle","tiger","lion","squirrel" };
//	int count;
//
//	count = sizeof(ptr_arr) / sizeof(ptr_arr[1]);
//	print_str(ptr_arr, count);
//
//		return 0;
//}

// ------------------------------------å 439p

//int sum(int a, int b) {
//	return (a + b);
//}
//
//
//int main(void) {
//	int(*fp)(int, int);
//	int res;
//	
//	fp = sum;
//	res = fp(10, 20);
//	printf("result : %d\n", res);
//
//	return 0;
//}

// ------------------------------------å 444p

//int main(void) {
//	int a = 65;
//	double b = 3.5;
//	void* vp;
//	vp = &a;
//	printf("a : %d\n", *((char*)vp));
//
//	vp = &b;
//	printf("b : %.1lf\n", *(double*)vp);
//	
//	return 0;
//}


// ------------------------------------ 16��
// ------------------------------------å 451p

//int main(void) {
//
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int));
//	if (pi == NULL) {
//		printf("# �޸𸮰� �����մϴ�. \n");
//		exit(1);
//	}
//
//	pd = (double*)malloc(sizeof(double));
//	*pi = 10;
//	*pd = 3.4;
//
//	printf("���������� ��� : %d\n", *pi);
//	printf("�Ǽ������� ��� : %.1lf\n", *pd);
//
//	free(pi);
//	free(pd);
//
//	return 0;
//}

//int main(void) {
//
//	int* pi = (int*)malloc(sizeof(int));
//	*pi = 255;
//	frre(pi);
//	*pi = 10;
//	
//	return 0;
//}

//int main(void) {
//
//	int score[3][4];
//	int total;
//	double avg;
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			scanf("%d", &score[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		total = 0;
//
//		for (int j = 0; j < 4; j++) {
//			total += score[i][j];
//		}
//		avg = total / 4.0;
//		printf("���� : %d, ��� : %.2lf", total, avg);
//	}
//	return 0;
//
//}

//int main(void) {
//	char animal[5][20];
//
//	int count = sizeof(animal) / sizeof(animal[0]);
//
//	for (int i = 0; i < count; i++) {
//		scanf("%s", animal[i]);
//	}
//
//	for (int i = 0; i < count; i++) {
//		printf("%s     ", animal[i]);
//	}
//
//	return 0;
//
//}
