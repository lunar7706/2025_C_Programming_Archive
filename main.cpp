#include <stdio.h>
int main()
{
	//논리연산자(값), && = 와 , || = or, !ㅁ = not(단항 연산자)
	int a = 1;
	int b = 0;

	printf("%d\n", a && b);
	printf("%d\n", a || b);
	printf("%d\n", !a);
	printf("%d\n", !b);
}

//#include <stdio.h>
//int main()
//{
//	//논리연산자(값), 참 아니면 거짓을 활용한 연산자 논리 연산 A가 있고 논리연산 B가 있는 데 값이 F라면 두개 다 
//	// 참만 and가 된다. or는 둘중에 하나만 참이여도 참. not은 입력이 두개가 아니라 하나다. and와 or는 이항 연산
//	//자 이지만 not 단항 연산자이다. a가 참이면 거짓이 값이 되고, a거짓이면 참이 값이 된다.
//	int a = 10;
//	int b = 0;
//    
//}

//#include <stdio.h>
//int main()
//{
//	//단항연산자(++, --),++a가 증가된 후, a++는 증가 되기 전
//	int a = 10;
//	int result = 0;
//
//	printf("a : %d, result : %d\n", a, result);
//	result = a--;
//	printf("a : %d, result : %d\n", a, result);
//}

//#include <stdio.h>
//int main()
//{
//	//단항연산자(++, --), =는 우선순위가 가장 끝
//	int a = 10;
//	int result = 0;
//
//	printf("a : %d, result : %d\n", a, result);
//	result = ++a;
//	printf("a : %d, result : %d\n", a, result);
//}

//#include <stdio.h>
//int main()
//{
//	//단항연산자(++, --), 원래의 값에서 1을 더하거나 빼는 것
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", ++a);
//	printf("%d\n", --b);
//}

//#include <stdio.h>
//int main()
//{
//	//단항 연산자 a, -a, +a는  무조건 기호가 앞에
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a );
//	printf("%d\n", -a );
//	printf("%d\n", +a );
//}

//#include <stdio.h>
//int main()
//{
//	//비교 연산자 =< 는 없다, != 틀리다고 물어보는 것
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a == b);
//	printf("%d\n", a != b);
//	printf("%d\n", a <= b);
//	printf("%d\n", a >= b);
//	printf("%d\n", a < b);
//	printf("%d\n", a > b);
//}

//#include <stdio.h>
//int main()
//{
//	//비교 연산자 거짓 - 0, 참 - 1
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a == b);
//}

//#include <stdio.h>
//int main()
//{
//	//산술 연산자 12 바이트 int
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a + b);
//	
//	int result = a + b;
//	printf("%d\n", result);
//
//}

//#include <stdio.h>
//int main()
//{
//	//산술 연산자
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
//}

//#include <stdio.h>
//int main()
//{
//	//산술 연산자
//	int a = 10;
//	int b = 3;
//
//	printf("%d\n", a+b);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//
//    printf("%d %d\n", sizeof(&n),sizeof(n) );
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//
//	
//	printf("%p %d\n", &n ,n);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int k = 1 + 2;
//	int q = 10 / 3;
//
//	printf("%d\n", n);
//	printf("%d\n", k);
//	printf("%d\n", q);
//}
