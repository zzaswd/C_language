#include<stdio.h>
#include<string.h>

//int main(void) {
//
//	char arr[5][5]; // array의 약자.	
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			arr[i][j] = ' ';
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (j == i) {
//				arr[i][i] = '*';
//				arr[i][4 - i] = '*';
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main_arr(void) {
//	int arr[5];
//
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = arr[0] + arr[1];
//	printf("%u", arr + 1); // 주소 값은 u로.
//
//	scanf_s("%d", &arr[3]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	printf("%d\n", arr[4]);
//	return 0;
//}

//int main(void) {
//	
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//	count = sizeof(score) / sizeof(score[5]);
//
//	char str[] = "apple";
//	int count2 = sizeof(str) / sizeof(str[0]);
//	printf("count2 = %d", count2);
//
//
//	for (i = 0; i < count; i++) {
//		scanf("%d", &score[i]);
//	}
//	
//
//	for (i = 0; i < count; i++) {
//		total += score[i];
//	}
//	avg = total / (double)count;
//	
//
//	for (i = 0; i < count; i++) {
//		printf("%5d", score[i]);
//	}
//	printf("\n");
//	printf("평균 : %.1lf\n", avg);
//
//
//
//	return 0;
//}

