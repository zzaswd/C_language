//#include<stdio.h>
//
//void print_arr_ant(int arr[10][10]) {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main_ant(void) {
//
//
//	int arr_real[10][10];
//
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			scanf_s("%d", &arr_real[i][j]);
//		}
//	}
//
//	// 시작점 확인
//	if (arr_real[1][1] == 2) {
//		arr_real[1][1] = 9;
//		print_arr(arr_real);
//		return 0;
//	}
//	else arr_real[1][1] = 9;
//
//
//
//	/// 본격적 길찾기.
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (arr_real[i][j] == 9) {
//				if (arr_real[i][j + 1] == 2) {
//					arr_real[i][j + 1] = 9;
//					print_arr(arr_real);
//					return 0;
//				}
//
//				else if (arr_real[i][j + 1] == 1) {
//					if (arr_real[i + 1][j] == 2) {
//						arr_real[i + 1][j] = 9;
//						print_arr(arr_real);
//						return 0;
//					}
//					else if (arr_real[i + 1][j] == 1) {
//						print_arr(arr_real);
//						return 0;
//					}
//					else {
//						arr_real[i + 1][j] = 9;
//						break;
//					}
//				}
//				else
//					arr_real[i][j + 1] = 9;
//
//			}
//		}
//	}
//
//}