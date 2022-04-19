#include <stdio.h>
#include <stdlib.h>

// å 495p
// ����ü �迭

//struct address {
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[80];
//};
//
//int main(void) {
//
//	struct address list[5] = {
//		{"������",15,"111-1111","������"},
//		{"����ǥ",25,"222-2222","���ֵ�"},
//		{"�����",35,"333-3333","������"},
//		{"�幮��",45,"444-4444","������"},
//		{"������",55,"555-5555","�����"}
//	};
//
//	for (int idx = 0; idx < 5; idx++) {
//		printf("%5s%5d%15s%15s\n", list[idx].name, list[idx].age, list[idx].tel, list[idx].addr);
//	}
//
//	return 0;
//}


struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print__list(struct address* p);

int main(void) {

	struct address list[5] = {
		{"������",15,"111-1111","������"},
		{"����ǥ",25,"222-2222","���ֵ�"},
		{"�����",35,"333-3333","������"},
		{"�幮��",45,"444-4444","������"},
		{"������",55,"555-5555","�����"}
	};

	print__list(list);
	
	return 0;

}

void print__list(struct address* p) {
	
	for (int idx = 0; idx < 5; idx++) {

		printf("%5s%10d%15s%20s\n", p->name, p->age, p->tel, p->addr);
		p++;
	}

}