#include <stdio.h>
void SumInteger(int num)
{
	int sum = 0;
	for (int i = 1; i <= num; ++i)
		sum = sum + i;
	printf("sum = %d\n", sum);
}
int main()
{
	SumInteger(3);
	SumInteger(10);
	SumInteger(100);
}

//#include <stdio.h>
//void SumInteger();
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; ++i)
//		sum = sum + i;
//	printf("sum = %d\n", sum);
//}
//int main()
//{
//	SumInteger();
//	SumInteger();
//	SumInteger();
//}


//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; ++i)
//		sum = sum + i;
//	printf("sum = %d\n", sum);
//}


//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 10; ++i)
//	{
//		sum = sum + i;
//	}
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%d\n", i);
//
//	int sum = 0;
//	printf("sum = %d\n", sum);
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//	sum = sum + 2;
//	printf("sum = %d\n", sum);
//	sum = sum + 3;
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//		printf("%d\n", i);
//
//	int sum = 0;
//	printf("sum = %d\n", sum);
//	sum = sum + 1;
//	printf("sum = %d\n", sum);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	for (int i = 0; i < n; ++i)
//	{
//		if (i % 2 == 0)// (i => 짝수)
//			printf("[%d] : %d\n", i, i + 1);
//	}
//}

//#include <stdio.h>
//int main()
//{
//int n = 100;
//	for (int i = 0; i < n; i = i+2)
//	{
//		printf("[%d] : %d\n", i, i + 1);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	for (int i = 0; i < n; ++i)
//		printf("[%d] : %d\n", i, i + 1);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	for (int i = 0; i < n; ++i)
//		printf("[%d] : %d\n", i, i + 1);
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	int run = 1;
//	while (run)
//	{
//		printf("문자를 입력해(종료:q) : ");
//		char c = _getch();
//		if (c == 'q')
//			run = 0;
//		else
//			printf("Hello! : %c\n", c);
//	}
//}


//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	while (1)
//	{
//		printf("문자를 입력해(종료:q) : ");
//		char c = _getch();
//		if (c == 'q')
//			break;
//		printf("Hello! : %c\n", c);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while(i < 5)
//	{
//	printf("int : %d\n", i);
//	++i;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 5; ++i) //대부분 i <= 4보다는 i < 5로 쓴다
//	{
//		printf("int : %d\n", i+1);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		printf("int : %d\n", i);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <= 5; ++i)//';'은 세미콜론 ':'은 콜론, 세미 콜론은 초기화, 한번만 
//	{
//		printf("int : %d\n", i);
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
//	switch (_getch()-'0')// 가장 많이 쓰는 제어문
//	{
//	case 1: // case와 break는 같이 쓴다
//		printf("A : %d\n", 1);
//		break;
//	case 2: // case와 break는 같이 쓴다
//		printf("B : %d\n", 2);
//		break;
//	case 3: // case와 break는 같이 쓴다
//		printf("C : %d\n", 3);
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n = 2;
//
//
//	switch (n)
//	{
//	case 1: // case와 break는 같이 쓴다
//		printf("A : %d\n", 1);
//		break;
//	case 2: // case와 break는 같이 쓴다
//		printf("B : %d\n", 2);
//		break;
//	case 3: // case와 break는 같이 쓴다
//		printf("C : %d\n", 3);
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	switch (5)
//	{
//	case 1: // case와 break는 같이 쓴다
//		printf("A : %d\n", 1);
//		break;
//	case 2: // case와 break는 같이 쓴다
//		printf("B : %d\n", 2);
//		break;
//	case 3: // case와 break는 같이 쓴다
//		printf("C : %d\n", 3);
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	switch (2)
//	{
//	case 1: // case와 break는 같이 쓴다
//		printf("A : %d\n", 1);
//		break;
//	case 2: // case와 break는 같이 쓴다
//		printf("B : %d\n", 2);
//		break;
//	case 3: // case와 break는 같이 쓴다
//		printf("C : %d\n", 3);
//		break;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	if (a < b)
//	{
//		printf("Hello True\n");
//	}
//	else
//	{
//		printf("Hello False\n");
//
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	if (a < b)
//	{
//		printf("Hello True\n");
//	}
//	if (a > b)
//		printf("Hello False\n");
//}

//#include <stdio.h>
//int main()
//{
//	if (1)
//	{
//		printf("Hello True\n");
//	}
//	if(1)
//	{
//		printf("Hello False\n");
//	} 
//}

//#include <stdio.h>
//int main()
//{
//	if (1)
//	{
//		printf("Hello\n");
//	}
//
//}

//#include <stdio.h>
//int main()
//{
//	int c = 10;
//	int n = 10;
//
//	printf("%d : %d\n", sizeof(int), sizeof(c));//%p print속에서 주소를 받는 것, &n이 실주소값
//	printf("%p : %d\n", &n, n);
//	printf("%p : %d\n", &n + 1, n + 1);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//
//	printf("%d : %d\n", sizeof(int), sizeof(n));
//	printf("%p : %d\n",&n, n ); // % d는 주소를 출력, 주소 하나 당 1b,int는 4b이기 때문에 4개의 주소를 가짐
//	//&n 주소의 첫 번째 이름,
//}

//#include <stdio.h>
//int main()
//{
//	char c = 10;
//	short s = 10;
//	int n = 10;
//	long l = 10;
//	float f = 10;
//	double d = 10;
//
//	printf("%d : %d\n", sizeof(char), sizeof(c));
//	printf("%d : %d\n", sizeof(short), sizeof(s));
//	printf("%d : %d\n", sizeof(int), sizeof(n));
//	printf("%d : %d\n", sizeof(long), sizeof(l));
//	printf("%d : %d\n", sizeof(float), sizeof(f));
//	printf("%d : %d\n", sizeof(double), sizeof(d));
//}


//#include <stdio.h>
//int main()
//{
//	int n1 = 10;
//	int n2 = 2;
//
//	printf("%d + %d = %d\n", 1, 2, 3);
//	printf("%d + %d = %d\n", 1, 2, 1 + 2);
//	printf("%d + %d = %d\n", n1, n2, n1 = n2);
//	int r = n1 + n2;
//	printf("%d + %d = %d\n", n1, n2, r);
//	printf("%d + %d = %d\n", n1, n2, r);
//	printf("%d + %d = %d\n", n1, n2, r);
//}
