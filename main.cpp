#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	
	printf("%d %d\n", a, b);

	a = 100;
	b = 200;
	printf("%d %d\n", a, b);
}

//#include<stdio.h>
//int main()
//{
//	printf("100 200\n");// 문자열
//	printf("%d %d\n", 100, 200);// 정수 상수
//	int a = 100;
//	int b = 200;
//	printf("%d %d\n", a, b);// 정수 변수 출력
//}


//#include<stdio.h>
//int main()
//{
// printf("정수를 입력 : "); //출력 함수
// int n; //메모리 공간 생성 : 변수
//
// scanf_s("%d", &n); //입력 함수
// printf("정수 : %d\n", n);
//} 


#include<stdio.h>
int main()
{
 printf("* * 100\n");
 printf("* * %d\n", 100);
 printf("* * %d %d\n", 100, 200);
}




#include<stdio.h>
int main()
{
 printf("* * 100\n");
 printf("* * %d\n", 100);
 printf("* * %d %d\n", 100, 200);
 printf("* * %d %g\n", 100, 200.123);
 printf("* * %d %s\n", 100, "200.123");
 printf("* * %c %p\n", 100, "200.123");
 printf("* * %c %s\n", 65, "A");
}



#include<stdio.h>
int main()
{
 printf("100 200\n");// 문자열
 printf("%d %d\n", 100, 200);// 정수 상수
 int a = 100;
 int b = 200;
 printf("%d %d\n", a, b);// 정수 변수 출력
}
