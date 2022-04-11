#include<stdio.h>

//int main(void) {
//	char arr[10] = "test";
//	char* pc = "test";
//
//	printf("%x\n", arr);
//	printf("%x\n", pc);
//
//	
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%x", "test");
//
//
//
//}

//void swap_ptr(char** pa, char** pb);
//
//int main(void) {
//
//	char* pa = "Success";
//	char* pb = "Failure";
//
//	printf("pa --> %s	pb --> %s\n", pa, pb);
//	swap_ptr(&pa, &pb);
//	printf("pa --> %s	pb --> %s\n", pa, pb);
//
//	return 0;
//}
//
//void swap_ptr(char** pa, char** pb) {
//
//	char* temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//
//
//}


//void print_str(char* arr, int size);
//
//
//int main(void) {
//
//	char* parr[] = { "eagle","dog","cat" };
//	printf("%x\n", &parr[0]);
//	printf("%x\n", &parr[1]);
//	printf("%x\n", &parr[2]);
//
//
//	int count = sizeof(parr) / sizeof(parr[0]);
//
//
//	print_str(parr, count);
//	
//	return 0;
//
//}
//
//void print_str(char** arr, int size) {
//
//	for (int i = 0; i < size; i++) {
//	
//		printf("%s\n", arr[i]);
//
//	
//	}
//
//
//
//}



int sum(int pa, int pb);

int main(void) {

	int (*fb)(int, int);
	int res;

	fb = sum;
	res = fb(1, 2);

	printf("연산의 결과 값 : %d", res);
	return 0;
}

int sum(int pa, int pb) {
	
	return pa + pb;
}
