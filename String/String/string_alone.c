#include<stdio.h>


//int main(void) {
//	char small, cap = 'G';
//
//
//
//	if ((cap >= 'A') && (cap <= 'Z')) {
//		
//		small = cap + ('a' - 'A');
//	}
//
//	printf("�빮�� %c \n", cap);
//	printf("�ҹ��� %c \n", small);
//
//
//	printf("�빮�� : %c %c", cap, '\n');
//	return 0;
//}

//int main(void) {
//
//	char ch1, ch2;
//
//	scanf_s("%c", &ch1);
//	scanf_s("%c", &ch2);
//
//	printf("[%c%c]", ch1, ch2);
//
//	return 0;
//}

//int main(void) {
//
//	int ch;
//	int 
//	ch = getchar();
//	printf("�Է��� ���� : ");
//	putchar(ch);
//	putchar('\n');
//
//
//}


// ----------------- å 310p

//void my_gets(char* str, int size);
//
//int main(void) {
//
//	char str[7];
//
//	my_gets(str, sizeof(str) / sizeof(str[0]));
//
//	printf("�Է��� ���ڿ� : %s\n", str);
//	return 0;
//}
//
//void my_gets(char* str, int size) {
//	
//	int ch;
//	int count = 0;
//
//	while ((ch=getchar())!='\n' && count< size-1) {
//		*str = ch;
//		str++;
//		count++;
//	}
//
//	*str = '\0';
//
//}

// --------------å 332p my_gets

//void my_gets(char* ps) {
//	
//	int idx = 0;
//	char ch;
//	while ((ch = getchar()) != '\n' && idx < 9) {
//		
//		*ps = ch;
//		ps++;
//		idx++;	
//	}
//	*ps = '\0';
//
//	printf("%s", ps-idx);
//}
//
//int main(void) {
//
//	char arr[10];
//	my_gets(arr);
//
//	return 0;
//}

