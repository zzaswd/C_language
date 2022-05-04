#include <stdio.h>


//// free 후 메모리 공간이 어떻게 되는가.
//int main(void) {
//
//	int* pi = (int*) malloc(sizeof(int));
//	printf("%x\n", pi);
//	*pi = 3;
//	free(pi);
//
//	*pi = 3;
//	printf("%x", pi);
//
//	return	0;
//}


//책 454p

//int main(void) {
//
//	int* pi = (int*)malloc(5 * sizeof(int));
//
//	if (pi == NULL) {
//		printf("메모리 오버 !!\n");
//		exit(1);
//	}
//
//	printf("5명의 이름을 입력하세요 : ");
//	for (int idx = 0; idx < 5; idx++) {
//		scanf("%d", pi + idx);
//	}
//
//	int sum = 0;
//	for (int idx = 0; idx < 5; idx++) {
//		sum= sum + pi[idx];
//	}
//
//	free(pi);
//	printf("다섯명의 평균 나이는 %.1lf 입니다\n", sum / 5.0);
//}

//책 456p

//int main(void) {
//
//	int* pi = (int*)calloc(5, sizeof(int));
//	int size = sizeof(pi) / sizeof(int);
//	int idx = 0;
//
//	while (1) {
//		printf("양수를 입력하세요 => ");
//		scanf("%d", pi + idx);
//		if (pi[idx] <= 0) break;
//		idx++;
//
//		if (idx == size) {
//			size += 5;
//			pi = (int*)realloc(pi, size*sizeof(int));
//		}
//	}
//
//	for (int i = 0; i < idx; i++) {
//		printf("%5d", pi[i]);
//	}
//	
//	free(pi);
//
//	return 0;
//
//}

//책 477p

////#pragma pack(1)
//struct student {
//	int num;
//	double grade;
//	int num2;
//};
//
//int main(void) {
//	
//	struct student ksh = { 26,25,4.5 };
//
//	printf("나이 : %d	학점 : %.1lf\n", ksh.num, ksh.grade);
//	printf("size : %d", sizeof(ksh));
//	return 0;
//}

// 책 481p

//struct profile {
//	char name[20];
//	int age;
//	double height;
//	char* say;
//};
//
//int main(void) {
//
//	struct profile ksh;
//	strcpy(ksh.name,"강시형");
//	ksh.age = 26;
//	ksh.height = 171.0;
//
//	ksh.say = (char*)malloc(80);
//
//	printf("자기소개를 입력하세요 : ");
//	gets(ksh.say);
//
//	printf("이름 : %s\n", ksh.name);
//	printf("나이 : %d\n", ksh.age);
//	printf("키 : %.1lf\n", ksh.height);
//	printf("자기소개 : %s\n", ksh.say);
//
//	printf("size : %d", sizeof(ksh));
//	free(ksh.say);
//	return 0;
//}

// 책 483p

//struct profile {
//	int age;
//	double height;
//};
//
//struct student {
//	struct profile pf;
//	int id;
//	double grade;
//};
//
//int main(void) {
//	
//	struct student ksh;
//
//	ksh.pf.age = 26;
//	ksh.pf.height = 171.0;
//	ksh.id = 201636203;
//	ksh.grade = 4.3;
//
//	struct student ljh = { 29,171.0,201312175,4.5 };
//
//	printf("나이 : %d\n", ksh.pf.age);
//	printf("키 : %.1lf\n", ksh.pf.height);
//	printf("나이 : %d\n", ksh.id);
//	printf("나이 : %.1lf\n\n", ksh.grade);
//
//	printf("나이 : %d\n", ljh.pf.age);
//	printf("키 : %.1lf\n", ljh.pf.height);
//	printf("나이 : %d\n", ljh.id);
//	printf("나이 : %.1lf\n", ljh.grade);
//
//	return 0;
//}

// 책 488p

//struct vision {
//	double r;
//	double l;
//};
//
//struct vision ChangeVision(struct vision person);
//
//int main(void) {
//	struct vision ksh = { 1.0 ,2.0 };
//	printf("L : %.1lf	R : %.1lf \n", ksh.l, ksh.r);
//
//	ksh = ChangeVision(ksh);
//
//	printf("L : %.1lf	R : %.1lf \n", ksh.l, ksh.r);
//
//	return 0;
//}
//
//struct vision ChangeVision(struct vision person) {
//	double temp;
//	temp = person.l;
//	person.l = person.r;
//	person.r = temp;
//
//	return person;
//}

// 책 493p

//struct score {
//	int kor;
//	int eng;
//	int math;
//};
//
//int main(void) {
//	struct score yuni = { 90,80,70 };
//	struct score* ps = &yuni;
//
//	printf("국어 : %d,  영어 : %d,  수학 : %d\n", (*ps).kor, ps->eng, ps->math);
//
//	return 0;
//}

// 책 497p

//struct address {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//
//};
//
//void print_list(struct address* lp);
//
//int main(void) {
//	struct address list[5] = {
//		{"강시형",26,"010-3980-6858","화곡역"},
//		{"강현구",27,"12345678","화곡역"},
//		{"이지훈",29,"12345678","화곡역"},
//		{"김지호",26,"12345678","화곡역"},
//		{"에?",2,"12345678","화곡역"}
//	};
//
//	print_list(list);
//	return 0;
//}
//
//void print_list(struct address* lp) {
//	for (int idx = 0; idx < 5; idx++) {
//		printf("%10s%5d%15s%20s\n", (*(lp + idx)).name, lp[idx].age, (lp + idx)->tel, lp[idx].addr);
//	}
//}

// 책 499p

//struct list {
//	int num;
//	struct list* next; // 구조체의 주소를 가르킬거기 때문에 구조체형 포인터 사용.
//						// 이름이 어렵다고 헷갈리지 말자. 
//};
//
//int main(void) {
//	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
//	struct list* head = &a, * current;   // 구조체 주소 저장하기 위한 구조체.
//	
//	a.next = &b;
//	b.next = &c;
//
//	printf("head->num : %d\n", head->num);
//	printf("head->next->num : %d\n", head->next->num);
//	
//	printf("list all : ");
//	current = head;
//
//	while (current != NULL) {
//		printf("%d  ", current->num);
//		current = current->next;
//	}
//	printf("\n");
//	return 0;
//}

// 책 505p

typedef struct
{
	int num;
	double grade;
}Student1;

struct student {
	int num;
	double grade;
};

typedef struct student Student;
void print_data(Student* ps);

int main(void) {
	Student s1 = { 315,4.2 };
	print_data(&s1);
	return 0;	
}

void print_data(Student *ps){
	printf("학번 : %d\n",ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}