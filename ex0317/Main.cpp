//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d %d\n", a + b, a - b);
//
//	a = 100;
//	b = 200;
//	printf("%d %d\n", a, b);
//}

//#include<stdio.h>
//int main()
//{
//	printf("100 200\n");// 문자열
//	printf("%d %d\n", 100, 200);// 정수 상수
//	double a = 100.5;
//	float b = 200.5;
//	printf("%1f %f\n", a, b);// 정수 변수 출력
//}


#include<stdio.h>
int main()
{	
	int num;
	printf("정수를 입력 : "); //출력 함수
	scanf_s("%d", &num); //입력 함수
	num = num + 1;
	printf("정수 : %d\n", num);
}