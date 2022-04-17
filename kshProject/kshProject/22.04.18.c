#include <stdio.h>
#include <stdlib.h>


////// 책 466p
////void print_str(char** parr) {
////	while (*parr != NULL) {
////		printf("%s\n", *parr);
////		parr++;
////	}
////}
////
////
////int main(void) {
////	char temp[80];
////	char* ps[21] = { 0 };
////
////	int i = 0;
////	while (i < 20) {
////		printf("문자열을 입력하세요 : ");
////		gets(temp);
////		if (strcmp(temp, "end") == 0) break;
////		ps[i] = (char*)malloc(strlen(temp) + 1);
////		strcpy(ps[i], temp);
////		i++;
////	}
////	print_str(ps);
////}
////
////
//////try-think
////int main(void) {
////
////	char* parr[3] = { 0 };
////	char temp[80];
////	int i = 0;
////	while (i < 3) {
////		gets(temp);
////		temp[strlen(temp) + 1] = '\0';
////		strcpy(parr[i], temp);
////		i++;
////	}
////
////	for (i = 0; i < 3; i++) {
////		printf("%s\n", parr[i]);
////	}
////
////}
////
////
////// structure
////struct student {
////	int num;
////	double grade;
////};
////
////
////int main(void) {
////
////	struct student s1;
////
////	s1.num = 2;
////	s1.grade = 2.7;
////
////	printf("학번 : %d\n", s1.num);		// 학번 : 2
////	printf("학점 : %.1lf\n", s1.grade);	// 학점 : 2.7
////
////	return 0;
////}
//
//
//// 책 483p
//struct profile {
//	char name[20];
//	int age;
//	double height;
//	char* intro;
//};
//
//
//int main(void) {
//
//	struct profile ksh;
//
//	strcpy(ksh.name, "강시형");
//	ksh.age = 26;
//	ksh.height = 171.0;
//	ksh.intro = (char*)malloc(80);
//
//	printf("자기소개를 입력하세요 : ");
//	gets(ksh.intro);
//
//
//	printf("이름 : %s\n", ksh.name);
//	printf("나이 : %d\n", ksh.age);
//	printf("키   : %.1lf\n", ksh.height);
//	printf("자기소개 : %s", ksh.intro);
//	free(ksh.intro);
//
//	return 0;
//}
//
//// 
//struct student {
//	int id;
//	char name[20];
//	double grade;
//};
//
//int main(void) {
//
//	struct student s1 = { 314,"강시형",2.7 },
//		s2 = { 315,"장문석",2.9 },
//		s3 = { 316,"이지훈",3.1 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//	// 같은 구조의 구조체 대입연산을 통해 멤버 한번에 복사.
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학번 : %.1lf\n", max.grade);
//
//	return 0
//}
//
//struct vision {
//	double left;
//	double right;
//};
//
//struct vision exchange(struct vision robot);
//
//int main(void) {
//	struct vision ksh;
//
//	ksh.left = 1.0;
//	ksh.right = 2.0;
//
//	printf("%.1lf     %.1lf\n", ksh.left, ksh.right);
//
//	ksh = exchange(ksh);
//	printf("%.1lf     %.1lf\n", ksh.left, ksh.right);
//	return 0;
//}
//
//struct vision exchange(struct vision robot) {
//	double temp;
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//	return robot;
//}
//
//
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//int main(void) {
//	struct score s1 = { 90,80,70 };
//	struct score* p = &s1;
//
//	printf("국어 %d\n", (*p).kor);
//	printf("영어 %d\n", (*p).eng);
//	printf("수학 %d\n", p->math);
//
//	return 0;
//}