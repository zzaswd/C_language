#include<stdio.h>

// ������ ¯

//int add(int a, int b); 

//int main() {
//
//	//printf("Hello C World");
//	//printf("%d", add(1, 2));
//	return 0;
//
//}

// visual studio��� �����Ϸ��� ����Ǿ� �ִ� Tool.
// compile ���� �������� �� .obj ���ϸ� ����
// compile error�� �߻��ߴٸ� .obj ���� ������ �ȉ�.
// build���� �ϸ� linking�� ����Ǹ鼭 �������� ����

//error �ڵ带 ���� �� C2314 ���� C�� ������ ���� LNK1234 �� ��ŷ ����


// ������� ��

//int main() {
//	int data = 10 + 20; // 10+20 =30 �̶�� ��� ���� �����ϱ����ؼ� Data��� ����(�������)�� ������ ��
//
//	//printf("%d", 10 + 20);
//	print("%d", data); // �� �ΰ��� ����� �ٸ�. ������Ҹ� ���� �Ⱦ���.
//	return 0;
//}

//alt + �巡�� ������


// ���� ����� ���
//int main() {
//	printf("Be happy\n");
//	printf("12345678901234567890\n");
//	printf("My\tfriend\n");
//	printf("Goot\bd\tchance\n");
//	printf("Cow\rW\a\n");
//
//	return 0;
//
//}



// �迭�� �ּҰ��� �������� �ּҰ� Ȱ��
//int main() {
//	//��ȯ����� prinft������ ���
//	char ptr[] = "first";
//	char* ptr0 = "two";
//	
//	printf("%c\n", 'A');
//	printf("%s\n", "A"); //%c�� ������ ?�� ��� �Ʊ� 4
//	printf("%d�� %s�Դϴ�.\n", '1', ptr0); // �迭���� �ּҸ� ������ �־ �迭���� �־ �ּҰ��� ���� ������ %s���� ���� �� ����.
//	
//	// �� ptr �� �ּҸ� ��Ÿ��
//	// ptr[0] �� �ּҸ� �˷��� &ptr[0]
//	// printf("%d�� %s�Դϴ�.\n", ptr[1], &ptr[0]); �� �ϸ� first�� ����� ��� ��.
//	// �� ptr = &ptr[0]
//	// �� ���ڿ��� ǥ���Ҷ� �ּҰ� �ʿ��ϰ�, �ּҸ� ǥ���ϴ� ����� �迭 �̿��ϴ� ��, ������ �̿��ϴ� ��
//
//	//0x14 16 4;
//	
//	return 0;
//
//	
//}

//int add(int a, int b) {
//	return a + b;
//}
//
// 
// 
//// �����Ⱚ ��� ����
//int main(void) {
//	int a;
//	int b;
//	int c[1] = {0,};
//	a = 10;
//	b = 20;
//
//
//	printf("a:%d\n", a);
//	printf("b:%d\n", b);
//	printf("c:%d\n", c[1]);
//	
//	return 0;
//}

//unsigned �� �� �� ���� 60p


//int main(void) {
//
//	unsigned int a;
//	a = 4294967295; // 11111111 11111111 11111111 11111111(4byte�̹Ƿ�)
//	printf("%d\n", a); // �ִ밪�̳� ���������� ��ȯ���� �߱� ������ signed�� �ν� --> -1�� ��ȯ
//	a = -1; // -1 �� bit�� ǥ���ϸ� -11111111 11111111 11111111 11111111 �̰� unsigned�� �ִ밪�� ����
//	//printf("%d\n", a);
//	printf("%u\n", a); 
//
//	return 0;
//	// �� unsigned�� ����� �� �׻� %u����.
//
//}

//int main(void) {
//	char fruit[6] = "apple";
//
//	//fruit[0] =a
//	//fruit[0] =a
//	//fruit[0] =a
//	//fruit[0] =a
//	//fruit[0] =a
//	//fruit[0] =a
//
//
//}
