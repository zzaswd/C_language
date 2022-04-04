// C에서 문자를 저장하기 위해선 배열과 포인터가 있다.
// 왜냐하면 두 개 다 주소를 저장할 수 있기 때문이다.


// 배열로 할때는 문자 개수 +1 해준다. 문자열의 끝을 나타내는 NULL 고려.
// NULL(\0. ascii로 0)

#include<stdio.h>

// 1. 배열과 포인터 주소를 할당하는 지 확인 책 64p
//int main(void) {
//	char fruit[20] = "strawberry"; // index는 0~19. 얘는 나중에 크기 수정이 안됌. 그래서 포인터를 많이 씀.
//	char fruit0[] = "strawberry"; // sizeof(fruit0) 는 11이 나옴. 인덱스 선언해주지 않으면 크기에 따라 자동으로 타이트하게 할당.
//
//	char* ptr = fruit; // 배열명은 주소값을 가지고 있고 포인터는 주소값을 받아야 함.
//
//	printf("딸기 : %s\n", fruit0);
//	printf("딸기 : %s\n", fruit);  // ptr, fruit 동일한 출력 값. 즉, 동일한 주소를 가르킴.
//	
//	printf("딸기쨈 : %s %s\n", fruit, "jam");
//
//	// char는 1byte. &fruit[1]과 fruit의 주소차이는 1차이난다 --> 1byte 차이난다. char형이니깐.
//
//
//	return 0;
//}

//int main() {
//	int a[4] = { 255,4,3,2 };
//	char b[4] = "abc";
//	
//	int* pa = a;
//	char* pb = b;
//
//	
//	//unsigned char a = 255;
//
//}


//char fruit[20] = "strawberry";
//fruit = "banana" // 이미 fruit에는 딸기의 주소가 저장되어 있는데 바나나의 주소가 또 저장될 수 없음.
//				// 그것이 되는 것은 포인터



// 2. strcpy 함수 활용 책 65p
// 오히려 string.h 안불러오면 error 안남.
// string.h 쓰려면 전처리기 들어가서 템플릿을 사용해줘야 함.
// or #define _CRT_SECURE_NO_WARNINGS 사용
// 
//int main(void) {
//	char fruit[20] = "strawberry";
//	printf("%s\n", fruit);
//	strcpy(fruit, "banana");
//	printf("%s\n", fruit);
//
//	return 0;
//}

// * 컴파일러는 우리의 코드를 기계어로 만들어 주는 것.
// visual studio에서는 이렇게 해결해줘야 하는데 다른 컴파일러에서는 필요 없을 수도 있음.
// * 리눅스에선 보통 gcc compiler 사용.
// visual studio는 무슨 컴파일러야? VC++.



//// 3.  NULL이 있으면 문자열의 종료라고 판단하는 것 확인.
//int main(void) {
//	char fruit[20] = "strawberry";
//	printf("%s\n", fruit); //strawberry 출력
//	fruit[3] = NULL;
//	printf("%s\n", fruit); //str 출력
//
//	return 0;
//}



// 4. const. 책 66p
// 변수를 상수화 시킴. 즉 초기화시켰던 값이 변하지 않음. --> 쓰레기 값 할당 방지하기 위해 선언과 동시에 초기화

//int main(void) {
//	int income = 0;
//	double tax;
//	const double tax_rate = 0.12;
//
//	income = 456;
//	tax = income * tax_rate;
//	printf("세금은 : %.1lf입니다.\n", tax); 
//
//	return 0;
//}


// 추가로 const도 결국 변수(저장공간)이기 때문에 포인터로는 접근이 가능.
//int main(void) {
//	const int income = 0;
//	double tax;
//	int* ptr = &income;
//	*ptr = 10;
//	const double tax_rate = 0.12;
//
//	tax = income * tax_rate;
//	printf("세금은 : %.1lf입니다.\n", tax); // 출력 1.2 즉 , 10으로 바뀌었다.
//
//	return 0;
//}


// 5. 예악어는 컴파일러와의 약속. 식별자는 필요에 따라 만들어 쓰는 단어.
// C언어는 대소문자 구별이 되고, 숫자로 시작할 수 없고, 예약어는 식별자로 사용할 수 없다.
// * volatile은 최적화에서 제외되는 것으로 펌웨어에서 주로 사용.


// 6. printf는 단순히 저장공간에 있는 것을 보여주는 것.
// scanf는 키브도에서 입력한 값을 저장공간에 저장하는 것. 매우 중요!
// 입력할 변수 앞에 & 기호 사용. 포인터 변수명은 애초에 주소이기 때문에 &안써도 됌. 배열명도 마찬가지.
// 책 74p
//int main(void) {
//	int a;
//	scanf("%d", &a); 
//	printf("입력된 값 : %d\n", a); // ""안에는 전부 문자로 인식하기 때문에 변환문자를 사용하여 a값을 출력해줌.
//	
//	return 0;
//}
// 반환값이 무시되었다는 warning이 뜨지만 이거는 당연한 것. 
// scanf에는 반환값이 있는데 그것을 사용하지 않고 입력의 용도로만 사용해서 나오는 워닝.


// 7. 문자와 문자열의 입력 책 77p
// 배열명은 %s로받는다는 것과 문자열의 끝엔 NULL이 컴파일러가 자동으로 붙여주니 사이즈 주의하라는 문제
// * 한글은 2byte씩 영어는 1byte씩.
// 
//int main() {
//	char grade;
//	char name[20];
//
//	printf("학점 입력 : ");
//	scanf("%c", &grade);
//
//	printf("이름 입력 : ");
//	scanf("%s", name);
//	printf("%s의 학점은 %c입니다.\n", name, grade);
//
//	return 0;
//
//}
// 중요! : 홍 길동을 넣으면 space를 NULL로 판단, 엔터도 역시 NULL로 판단.
// scanf의 특성상 스페이스나 엔터같은 공백을 입력해주는 것은 불가. 별도의 함수 필요.




// 추가 화이트 스페이스 문제.
// 문자의 특징때문에 발생하는 문제.
// 
//int main() {
//
//
//	char grade;
//	char a, b, c;
//	
//	char name[20]; // 빈자리는 다 NULL이다!
//	
//	scanf("%c %c %c", &a, &b, &c);
//
//	printf("a: %c, b: %d, c: %c", a, b, c);
//
//	/*printf("1번 입력 : ");
//	scanf("%d", &data);
//	printf("2번 입력 : ");
//	scanf("%c", &grade);
//	printf("3번 입력 : ");
//	scanf("%s", &name);
//
//	printf("%s의 학점은 %c입니다.\n", name, grade);
//
//	*/return 0;
//}
//int main() {
//	int a, b, c;
//
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a: %d, b: %c, c: %c", a, b, c);
//	return 0;
//
//}


//면접은 문제 업따.
//회사 가서 내가 잘 적응하려면, 혼자 문제점을 해결하는 습관을 길러야 함.
// 7시 반부터 22시. 14시 30분  하루에? 이것이 실화? 너무 빡세당
// 엠브이텍 4천 후반
// 아이비스 사람들이 만족도가 높은 곳. 워라벨이 좋고 직무가 소프트웨어 전담.
// 보통은 신입한테 개발 안시키는데 아이비스는 신입에게도 시켜서 좋다더라.
// 파두
// 내가 좀 찾아봐야겠다.


// 250개? 진짜 많이 냈당. 서류가 탄탄하게 준비되면 같은 직무이기 때문에 수정할 필요 없음.

// 8. 연산자!!
// * : 간접 참조 연산자
// 동등 연산자 결과 값은 0 과 1
// 연산자는 컴파일 후 명령어로 바뀐다.
// 85p


//int main() {
//	int a, b;
//	int sum, sub, mul, inv;
//
//	a = 10;
//	b = 20;
//	sum = a + b;
//	sub = a - b;
//	mul = a * b;
//	inv = -a;
//
//	printf("a의 값 : %d, b의 값 : %d\n", a, b);
//	printf("덧셈 : %d\n", sum);
//	printf("뺄셈 : %d\n", sub);
//	printf("곱셈 : %d\n", mul);
//	printf("a의 음수 연산 : %d\n", inv);
//
//	return 0;
//}
//// 나머지 연산자의 피연산자는 반드시 정수만 사용해라!!


//int main() {
//	double apple;
//	int banana;
//	int orange;
//
//	apple = 5.0 / 2.0; // apple = 5/2 하면 2.0 출력 --> 저장공간이 실수여도 계산이 정수이기 때문에  
//	banana = 5 / 2; 
//	orange = 5 % 2;
//	printf("apple : %.1lf\n", apple);
//	printf("banana : %d\n", banana);
//	printf("orange : %d\n", orange);
//
//	return 0;
//}

// 9. 증감 연산자. for에 필수적으로 사용.
// 전위형과 후위형을 잘 알아야 함.
// 증감 연산자는 대입연산을 포함하기 때문에 상수에는 사용불가!
// ++10 은 10 = 10 +1 이란 소리인데, 10은 저장이 불가능한 상수이기 때문.
// * 한 수식에 두개의 변수가 있을 때는 증감연산자 사용하면 안된다!.

//int main() {
//	int a = 5, b = 5;
//	int pre, post;
//	
//	pre = (++a) * 3;
//	post = (b++) * 3;
//
//	printf("초기값 a = %d,b = %d\n", a, b);
//	printf("전위형 : (++a)*3 = %d, 휘위형 : (b++)*3 = %d\n", pre, post);
//	return 0;
//}


// 10. 관계연산자
// 연산의 결과는 1 또는 0

//int main() {
//	int a = 10, b = 20, c = 10;
//	int res;
//
//	res = (a > b);
//	printf("a>b : %d\n", res);
//	res = (a >= b);
//	printf("a>=b : %d\n", res);
//	res = (a < b);
//	printf("a<b : %d\n", res);
//	res = (a <= b);
//	printf("a<=b : %d\n", res);
//	res = (a <= c);
//	printf("a<=c : %d\n", res);
//	res = (a == b);
//	printf("a==b : %d\n", res);
//	res = (a != c);
//	printf("a!=c : %d\n", res);
//
//	return 0;
//}


// 11. 논리 연산자
// 숏 서킷 룰 : and는 앞에 것이 0이면 뒤에 꺼 안봄. or는 앞에 것이 1이면 뒤에꺼 안봄.
//int main() {
//	int a = 30;
//	int res;
//
//	res = (a > 10) && (a < 20);
//	printf("(a > 10) && (a < 20) : %d\n", res);
//	res = (a < 10) || (a > 20);
//	printf("(a < 10) || (a > 20) : %d\n", res);
//	res = !(a >= 30);
//	printf("!(a >= 30) : %d\n", res);
//
//}
// 연산 결과는 CPU에 있는 register에 임시적으로 저장됌. 따로 변수에 저장하지 않으면 사라짐.




// 12. 형변환
// sizeof()는 바이트의 크기를 반환해주는 함수.
// 임베디드는 void 형으로 많이 선언해놓고 목적에 따라 형변환해서 사용하는 경우가 많음!
// 저장하는 것이 목표. 형변환은 그 값이 저장되어 있는 장소 자체를 바꾸는 것이 아니라
// 새로운 저장장소에 저장하기 위해 일시적으로 바꾸는 것.
// ex) int a = 10;
//		double b ;
//		b = (double)a;      a는 그래도 int 10이지 double 10으로 바뀌지 않음.
// double은 용량도 크고 연산속도도 느리기에 int로 저장해놓았다가 필요할 때 변환시키는 게 좋음.
// or 실수에서 정수부분만 찾아올 때 좋음.
//int main() {
//	int a = 20, b = 3;
//	double res;
//	
//	res = ((double)a) / ((double)b);
//	printf("a = %d, b = %d\n", a, b); //20 3 
//	printf("a / b 의 결과 : %.1lf\n", res); // 6.7
//
//	a = (int)res; //6
//	printf("(int) %.1lf의 결과 : %d\n", res, a); //6.7  /6
//
//	return 0;
//}

// 13. sizeof()
// 데이터의 크기 확인에 사용하며, 동적 할당 작업에 자주 사용.
// 기본적으로 컴파일러는 정수는 int, 실수는 double을 기준으로 잡음.
// 따라서 sizeof(10) = 4, sizeof(4.9) = 8


// * shift 연산은 정수만 가능.

// 14. 비트 연산자

//int main() {
//	int a = 10; // 1010
//	int b = 12; // 1100
//	printf("a & b : %d\n", a & b); // 1000 8
//	printf("a ^ b : %d\n", a ^ b); // 0110 6
//	printf("a | b : %d\n", a | b); // 1110 14
//	printf("~a : %d\n", ~a); // 1111 0101 -->  0000 1011 -->  -11
//	printf("a << 1 : %d\n", a << 1); // 10100 20
//	printf("a >> 2 : %d\n", a >> 2); // 0010 2
//
//}


//int main(void) {
//	int init;
//	int one, A, B;
//	int count=0;
//	scanf("%d", &init);
//
//	one = init;
//	while (1) {
//		if (init < 10) one = one * 10;
//		
//		A = one / 10;
//		B = one % 10;
//		
//		one = B * 10 + (A + B) % 10;
//		
//		if (count == 0 & one == init) {
//			count = 0;
//			break;
//		}
//		count++;
//		if (init == one) break;
//
//	}
//	
//	printf("%d", count);
//}