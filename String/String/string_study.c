#include<stdio.h>
#include<string.h>


// --------------- å 323p
 
//int main_323p(void) {
//	char str[80];
//
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	printf("ù ��° �ܾ� : %s\n", str);
//	scanf("%s", str);
//
//	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
//	return 0;
//
//
//
//}


// ---------------------å 332p

//void my_gets(char* ps) {
//	char ch;
//
//	while ((ch = getchar()) != '\n') {
//		*ps = ch;
//		ps++;
//	}
//
//	*ps = '\n';
//
//}
//
//
//void str_print(char m_str[]) {
//	int cnt = 0;
//	char s1[100] = { 0 };
//
//	while (m_str[cnt] != '\0') {
//		s1[cnt] = m_str[cnt];
//		cnt++;
//	}
//
//	s1[cnt] = '\0';
//	printf("�迭 ���ڿ� ��ȯ : %s\n", s1);
//}
//
//
//
//
//int main(void) {
//
//	char str[] = "test";
//
//	str_print(str);
//
//	return 0;
//}
//
//// CASE 1
//void str_print(char *m) {
//	int cnt = 0;
//
//	printf("�迭 ���ڿ� ��ȯ : ");
//
//	while (*m !='\0') {
//		printf("%c", *m);
//		m++;
//	}
//	
//}
//
//CASE2
//void str_print(char* m) {
//	int cnt = 0;
//
//
//	char s1[100] = { 0 };
//
//	while (*m != '\0') {
//		s1[cnt] = *m;
//		cnt++;
//		m++;
//	}
//	*m = '\0';
//
//	printf("�迭 ���ڿ� ��ȯ : %s", s1);
//
//}
//
// CASE 3
//void str_print(char* from,char* to) {
//
//
//	while (*from != '\0') {
//		*(to++) = *(from++);
//	}
//	*to = '\0';
//	
//}
//
//
//
//int main(void) {
//
//	char str[] = "test";
//	char in_str[10];
//	str_print(str,in_str);
//	printf("%s", in_str);
//	return 0;
//}


//----------------------- å 337p.
 
//int main(void) {
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char* ps1 = "banana";
//	char* ps2 = str2;
//
//	printf("���� ���ڿ� : %s\n", str1);
//	strcpy(str1, str2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("�ٲ� ���ڿ� : %s\n", str1);
//
//	return 0;
//
//}


// ------------------- å 347p


//char* my_strcpy(char* pd, char* ps);
//
//int main(void) {
//	char str[80] = "strawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps) {
//
//	char* po = pd;
//
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	*pd = '\0';
//
//	return po;
//}

// ---------------------- å 343p

//int main(void) {
//
//	char str1[80] , str2[80] ;
//	char* resp;
//
//	printf("2���� ���� �̸� �Է� : ");
//	scanf("%s %s", str1, str2);
//
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//	printf("�̸��� �� ������ : %s\n", resp);
//
//
//	return 0;
//}


// ----------------------- å 344p

//int main(void) {
//
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("������ ���߿� ������ ���� �̸� : ");
//
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}



