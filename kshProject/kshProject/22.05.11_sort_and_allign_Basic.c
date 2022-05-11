//#include <stdio.h>
//
//int main(void) {
//
//	int in, count = 0;
//
//	int odd[100] = { 0 }, even[100] = { 0 };
//	int idx_odd = 0, idx_even = 0;
//
//	scanf_s("%d", &in);
//	int temp = in;
//
//	while (temp > 0) {
//		temp /= 10;
//		count++;
//	}
//
//	printf("count = %d\n", count);
//
//	while (count > 0) {
//		int power = 1;
//		for (int idx = 0; idx < count - 1; idx++) {
//			power *= 10;
//		}
//
//		int val = in / power;
//
//		printf("val : %d\n", val);
//
//		if (val % 2 == 0) even[idx_even++] = val;
//		else odd[idx_odd++] = val;
//		count--;
//		in -= power * val;
//	}
//
//	for (int idx = idx_even - 1; idx >= 0; idx--) {
//		printf("%d", even[idx]);
//	}
//	printf("\t");
//
//	for (int idx = idx_odd - 1; idx >= 0; idx--) {
//		printf("%d", odd[idx]);
//	}
//}