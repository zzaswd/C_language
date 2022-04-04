#include<stdio.h>

// 메인이 짱

//int add(int a, int b); 

//int main() {
//
//	//printf("Hello C World");
//	//printf("%d", add(1, 2));
//	return 0;
//
//}

// visual studio라는 컴파일러가 적재되어 있는 Tool.
// compile 까지 진행했을 때 .obj 파일만 생성
// compile error가 발생했다면 .obj 파일 생성이 안됌.
// build까지 하면 linking이 진행되면서 실행파일 생성

//error 코드를 봤을 때 C2314 에서 C는 컴파일 에러 LNK1234 는 링킹 에러


// 변수라는 것

//int main() {
//	int data = 10 + 20; // 10+20 =30 이라는 결과 값을 저장하기위해서 Data라는 변수(저장장소)를 생성한 것
//
//	//printf("%d", 10 + 20);
//	print("%d", data); // 이 두개는 상당히 다름. 저장장소를 쓰고 안쓰고.
//	return 0;
//}

//alt + 드래그 개꿀팁


// 각종 제어문자 사용
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



// 배열의 주소값과 포인터의 주소값 활용
//int main() {
//	//변환제어는 prinft에서만 사용
//	char ptr[] = "first";
//	char* ptr0 = "two";
//	
//	printf("%c\n", 'A');
//	printf("%s\n", "A"); //%c로 받으면 ?가 출력 아깐 4
//	printf("%d는 %s입니다.\n", '1', ptr0); // 배열명은 주소를 가지고 있어서 배열명을 넣어도 주소값이 들어가기 때문에 %s값을 받을 수 있음.
//	
//	// 즉 ptr 은 주소를 나타냄
//	// ptr[0] 의 주소를 알려면 &ptr[0]
//	// printf("%d는 %s입니다.\n", ptr[1], &ptr[0]); 을 하면 first가 제대로 출력 됌.
//	// 즉 ptr = &ptr[0]
//	// 즉 문자열을 표현할땐 주소가 필요하고, 주소를 표현하는 방법은 배열 이용하는 법, 포인터 이용하는 법
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
//// 쓰레기값 출력 예제
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

//unsigned 잘 못 쓴 예제 60p


//int main(void) {
//
//	unsigned int a;
//	a = 4294967295; // 11111111 11111111 11111111 11111111(4byte이므로)
//	printf("%d\n", a); // 최대값이나 정수형으로 변환제어 했기 때문에 signed로 인식 --> -1로 변환
//	a = -1; // -1 은 bit로 표현하면 -11111111 11111111 11111111 11111111 이게 unsigned면 최대값이 나옴
//	//printf("%d\n", a);
//	printf("%u\n", a); 
//
//	return 0;
//	// 즉 unsigned를 사용할 땐 항상 %u쓰기.
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
