//#include <stdio.h>
//int TotalInteger(int start, int end);//선언(함수의 시그니쳐), include라는 헤더가 scanf,printf 등의 함수가 모여있다
//int main()
//{
//	int sum = 0;
//
//	sum = TotalInteger(1, 50);
//	printf("total : %d\n", sum);
//}
//int TotalInteger(int start, int end)
//{
//	int sum = 0;
//	for (int i = start; i <= end; ++i)
//		sum = sum + i;
//
//	return sum;
//}

//#include <stdio.h>
//int totalinteger(int start, int end)
//{
//	int sum = 0;
//	for (int i = start; i <= end; ++i)
//		sum = sum + i;
//	
//	return sum;
//}
//int main()
//{
//	int sum = 0;
//	sum = totalinteger(1, 50);
//	printf("total : %d\n", sum);
//}

//#include <stdio.h>
//void PrintTotalInteger(int start, int end)
//{
//	int sum = 0;
//	for (int i = start; i <= end; ++i)
//		sum = sum + i;
//
//	printf("sum = %d\n", sum);
//}
//int main()
//{
//	PrintTotalInteger(1, 50);
//}

//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; ++i)
//		sum = sum + i;
//
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//void PrintNumber(int start, int end, int isOdd)
//{
//	for (int i = start; i <= end; ++i)
//	{
//		if (i % 2 == isOdd)
//		{
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	PrintNumber(1, 100,1);
//	PrintNumber(200, 300, 0);
//}

//#include <stdio.h>
//void PrintEven(int start, int end)
//{
//	for (int i = start; i <= end; ++i)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	PrintEven(1,100);
//	PrintEven(200,300);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100, ++i)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d", i);
//		}
//	}

#include <stdio.h>
int Add(int lhs, int rhs)
{
	int sum = lhs + rhs;
	return sum;
}
int main()
{
	int a = 10;
	int b = 20;
	int result = 0;

	result = Add(a, b);
	printf("sum = %d\n", result);
	printf("sum = %d\n", Add(10,50));
	printf("sum = %d\n", Add(4,5));
}

//#include <stdio.h>
//int Add(int lhs, int rhs)
//{
//	int sum = lhs + rhs;
//	return sum;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int result = 0;
//	
//	result = Add(a, b);
//	printf("sum = %d\n", result);
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d + %d = %d\n", a, b, a + b);
//}

//#include <stdio.h>
//void printhello(int size)              // 받는 것(매개변수)- 인수값을 저장하는 변수- 서버가 정의
//{
//	for (int i = 0; i < size; ++i)
//		printf("hello : %d\n", i + 1);
//	printf("\n");
//}
//int main()
//{
//	printhello(2);                                      //던지는 것- 인수- 클라이언트가 정의
//	printhello(5);
//	printhello(10);
//}


//#include <stdio.h>
//void PrintHello()
//{
//	printf("Hello\n");
//	printf("Hello\n");
//	printf("Hello\n");
//}
//int main()
//{
//	PrintHello();
//	PrintHello();
//}

//#include <stdio.h>
//int main()
//{
//	puts("Hello\n");                                              //puts 문자열을 실행하는 함수
//	return 0; 
//}

//#include <stdio.h>
//int main()
//{
//	printf("Hello\n");
//	printf("int : %d \n", 100);
//	printf("string : %s \n", "Hello");
//	return 0;                                                      // 생략됨
//}

//#include <stdio.h>
//int main()
//{
//	printf("Hello\n");                                            // f는 형식입니다.
//	printf("int : %d \n", 100);
//	printf("string : %s \n", "Hello");
//}