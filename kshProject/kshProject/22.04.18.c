#include <stdio.h>
#include <stdlib.h>


////// å 466p
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
////		printf("���ڿ��� �Է��ϼ��� : ");
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
////	printf("�й� : %d\n", s1.num);		// �й� : 2
////	printf("���� : %.1lf\n", s1.grade);	// ���� : 2.7
////
////	return 0;
////}
//
//
//// å 483p
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
//	strcpy(ksh.name, "������");
//	ksh.age = 26;
//	ksh.height = 171.0;
//	ksh.intro = (char*)malloc(80);
//
//	printf("�ڱ�Ұ��� �Է��ϼ��� : ");
//	gets(ksh.intro);
//
//
//	printf("�̸� : %s\n", ksh.name);
//	printf("���� : %d\n", ksh.age);
//	printf("Ű   : %.1lf\n", ksh.height);
//	printf("�ڱ�Ұ� : %s", ksh.intro);
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
//	struct student s1 = { 314,"������",2.7 },
//		s2 = { 315,"�幮��",2.9 },
//		s3 = { 316,"������",3.1 };
//
//	struct student max;
//
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//	// ���� ������ ����ü ���Կ����� ���� ��� �ѹ��� ����.
//
//	printf("�й� : %d\n", max.id);
//	printf("�̸� : %s\n", max.name);
//	printf("�й� : %.1lf\n", max.grade);
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
//	printf("���� %d\n", (*p).kor);
//	printf("���� %d\n", (*p).eng);
//	printf("���� %d\n", p->math);
//
//	return 0;
//}