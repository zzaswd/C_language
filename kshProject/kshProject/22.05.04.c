#include <stdio.h>


//// free �� �޸� ������ ��� �Ǵ°�.
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


//å 454p

//int main(void) {
//
//	int* pi = (int*)malloc(5 * sizeof(int));
//
//	if (pi == NULL) {
//		printf("�޸� ���� !!\n");
//		exit(1);
//	}
//
//	printf("5���� �̸��� �Է��ϼ��� : ");
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
//	printf("�ټ����� ��� ���̴� %.1lf �Դϴ�\n", sum / 5.0);
//}

//å 456p

//int main(void) {
//
//	int* pi = (int*)calloc(5, sizeof(int));
//	int size = sizeof(pi) / sizeof(int);
//	int idx = 0;
//
//	while (1) {
//		printf("����� �Է��ϼ��� => ");
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

//å 477p

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
//	printf("���� : %d	���� : %.1lf\n", ksh.num, ksh.grade);
//	printf("size : %d", sizeof(ksh));
//	return 0;
//}

// å 481p

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
//	strcpy(ksh.name,"������");
//	ksh.age = 26;
//	ksh.height = 171.0;
//
//	ksh.say = (char*)malloc(80);
//
//	printf("�ڱ�Ұ��� �Է��ϼ��� : ");
//	gets(ksh.say);
//
//	printf("�̸� : %s\n", ksh.name);
//	printf("���� : %d\n", ksh.age);
//	printf("Ű : %.1lf\n", ksh.height);
//	printf("�ڱ�Ұ� : %s\n", ksh.say);
//
//	printf("size : %d", sizeof(ksh));
//	free(ksh.say);
//	return 0;
//}

// å 483p

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
//	printf("���� : %d\n", ksh.pf.age);
//	printf("Ű : %.1lf\n", ksh.pf.height);
//	printf("���� : %d\n", ksh.id);
//	printf("���� : %.1lf\n\n", ksh.grade);
//
//	printf("���� : %d\n", ljh.pf.age);
//	printf("Ű : %.1lf\n", ljh.pf.height);
//	printf("���� : %d\n", ljh.id);
//	printf("���� : %.1lf\n", ljh.grade);
//
//	return 0;
//}

// å 488p

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

// å 493p

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
//	printf("���� : %d,  ���� : %d,  ���� : %d\n", (*ps).kor, ps->eng, ps->math);
//
//	return 0;
//}

// å 497p

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
//		{"������",26,"010-3980-6858","ȭ�"},
//		{"������",27,"12345678","ȭ�"},
//		{"������",29,"12345678","ȭ�"},
//		{"����ȣ",26,"12345678","ȭ�"},
//		{"��?",2,"12345678","ȭ�"}
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

// å 499p

//struct list {
//	int num;
//	struct list* next; // ����ü�� �ּҸ� ����ų�ű� ������ ����ü�� ������ ���.
//						// �̸��� ��ƴٰ� �򰥸��� ����. 
//};
//
//int main(void) {
//	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
//	struct list* head = &a, * current;   // ����ü �ּ� �����ϱ� ���� ����ü.
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

// å 505p

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
	printf("�й� : %d\n",ps->num);
	printf("���� : %.1lf\n", ps->grade);
}