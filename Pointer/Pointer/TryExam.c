#include<stdio.h>

//
//void swap(double* pa, double* pb);
//void line_up(double* maxp, double* midp, double* minp);
//
//
//int main(void) {
//	double max, mid, min;
//	printf("�Ǽ��� 3�� �Է�: ");
//	scanf_s("%lf%lf%lf", &max, &mid, &min);
//	line_up(&max, &mid, &min);
//	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
//
//	return 0;
//}
//
//void swap(double* pa, double* pb) {
//	double temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp) {
//
//
//	double temp;
//	if (*maxp <= *midp) {
//		swap(maxp, midp);
//		line_up(maxp, midp, minp);
//	}
//
//	else if (*maxp <= *minp) {
//		swap(maxp, minp);
//		line_up(maxp, midp, minp);
//
//	}
//
//	else if (*midp <= *minp) {
//		swap(midp, minp);
//		line_up(maxp, midp, minp);
//	}
//
//}

//int main(void) {
//
//	char str[5]="a";
//
//	scanf_s("%s", str,5);
//
//	return 0;
//}