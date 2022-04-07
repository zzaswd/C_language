#include<stdio.h>
#include<string.h>


// --------------- 책 323p
 
//int main_323p(void) {
//	char str[80];
//
//	printf("문자열 입력 : ");
//	scanf("%s", str);
//	printf("첫 번째 단어 : %s\n", str);
//	scanf("%s", str);
//
//	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);
//	return 0;
//
//
//
//}


// ---------------------책 332p

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
//	printf("배열 문자열 변환 : %s\n", s1);
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
//	printf("배열 문자열 변환 : ");
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
//	printf("배열 문자열 변환 : %s", s1);
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


//----------------------- 책 337p.
 
//int main(void) {
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char* ps1 = "banana";
//	char* ps2 = str2;
//
//	printf("최초 문자열 : %s\n", str1);
//	strcpy(str1, str2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, "banana");
//	printf("바뀐 문자열 : %s\n", str1);
//
//	return 0;
//
//}


// ------------------- 책 347p


//char* my_strcpy(char* pd, char* ps);
//
//int main(void) {
//	char str[80] = "strawberry";
//
//	printf("바꾸기 전 문자열 : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("바꾼 후 문자열 : %s\n", str);
//	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
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

// ---------------------- 책 343p

//int main(void) {
//
//	char str1[80] , str2[80] ;
//	char* resp;
//
//	printf("2개의 과일 이름 입력 : ");
//	scanf("%s %s", str1, str2);
//
//	if (strlen(str1) > strlen(str2))
//		resp = str1;
//	else
//		resp = str2;
//	printf("이름이 긴 과일은 : %s\n", resp);
//
//
//	return 0;
//}


// ----------------------- 책 344p

//int main(void) {
//
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//
//	if (strcmp(str1, str2) > 0)
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	return 0;
//}



