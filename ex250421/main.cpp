#include <stdio.h>
int main()
{
	int arr[4] = { 10, 20, 30, 40 };
	int* p = NULL; // 0주소라고 함....

	//p = &arr[0];
	//p = &arr[2];
	p = &arr[3];

	printf("%d %d %d %d\n", arr[0], *(arr + 1), arr[2], arr[3]);
	printf("%d\n", p[-3]);
	printf("%d\n", p[-2]);
	printf("%d\n", p[-1]);
	printf("%d\n", p[0]);
}


//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//
//	p = &arr[0];
//	//p = &arr[2];
//
//	printf("%d %d %d %d\n", arr[0], *(arr + 1), arr[2], arr[3]);
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	printf("%d\n", p[2]);
//	printf("%d\n", p[3]);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//
//	p = &arr[0];
//	//p = &arr[2];
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d\n", p[0]);
//	printf("%d\n", p[1]);
//	printf("%d\n", p[2]);
//	printf("%d\n", p[3]);
//}


//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//
//	//p = &arr[0];
//	p = &arr[2];
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d\n", *p);
//	printf("%d\n", p[0] + 1);
//	printf("%d\n", p[1]);
//
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//
//	//p = &arr[0];
//	p = &arr[2];
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d\n", *p);
//	printf("%d\n", *p + 1);
//	printf("%d\n", *(p + 1));
//
//}


//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//	
//	//p = &arr[0];
//	p = &arr[2];
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d\n", *p);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10, 20, 30, 40 };
//	int* p = NULL; // 0주소라고 함....
//	
//	p = &arr[0];
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%d\n", *p);
//}

//#include <stdio.h>
//int main()
//{
//	char arr[2] = { 1,2 };
//	double darr[3] = { 1.1,2.2,3.3 };
//
//	printf("%p %p\n", &arr[0], &arr[1]);
//	printf("%p %p %p\n", &darr[0], &darr[1], &darr[2]);
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2] = { 1,2 };
//	double darr[3] = { 1.1,2.2,3.3 };
//
//	printf("%d %d\n", arr[0], arr[1]);
//	printf("%g %g %g\n", darr[0], darr[1], darr[2]);
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2] = { 1,2 };
//	double darr[3] = { 1.1,2.2,3.3 };
//	
//	printf("char array : %d\n", sizeof(arr));
//	printf("double array : %d\n", sizeof(darr));
//}


//#include <stdio.h>
//int main()
//{
//	int arr[4] = { 10,20,30,40 };
//
//	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
//	printf("%p %p %p %p\n", &arr[0], &arr[1], &arr[2], &arr[3]);
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	for (int i = 0; i < 5; ++i)
//	{
//		arr[i] = (i + 1) * 10;
//	}
//	for (int i = 0; i < 5; ++i)
//		printf("%d", arr[i]);
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	arr[0] = (0+1) * 10;
//	arr[1] = (1+1) * 10;
//	arr[2] = (2+1) * 10;
//	arr[3] = (3+1) * 10;
//	arr[4] = (4+1) * 10;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d\n", arr[i]);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	for(int i=0, j=1; i < 5; ++i, ++j)
//		arr[i] = j * 10;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d", arr[i]);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	arr[0] = 1 * 10;
//	arr[1] = 2 * 10;
//	arr[2] = 3 * 10;
//	arr[3] = 4 * 10;
//	arr[4] = 5 * 10;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d", arr[i]);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5];
//
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d", arr[i]);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	for (int i = 0; i < 5; ++i)
//		printf("%d", arr[i]);
//
//	printf("\n");
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	printf("%d", arr[0]);
//	printf("%d", arr[1]);
//	printf("%d", arr[2]);
//	printf("%d", arr[3]);
//	printf("%d", arr[4]);
//	printf("\n");
//}


//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//
//	printf("%d %d %d %d %d\n",
//		arr[0], arr[1], arr[2], arr[3], arr[4]);
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));
//}


//#include <stdio.h>
//int main()
//{
//	//배열, 배열의 주소 연산
//	int a = 10;
//	int b = 20;
//	int arr[2] = { 10, 20 };
//
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", arr[0], arr[1]);
//}

//#include <stdio.h>
//int main()
//{
//	//주소의 연산 : 정수 가감산
//	int n = 10;
//
//	printf("%p\n", &n);
//	printf("%p\n", &n+1);
//	printf("%p\n", &n+2);
//}


//#include <stdio.h>
//void UpdateData(int* p,int data)
//{
//	*p = data;
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	UpdateData(&n, 50);
//	printf("data : %d\n", n);
//}

//#include <stdio.h>
//void PrintData(int* p)
//{
//	printf("%p %d\n", p, *p);
//	*p = 200;
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	PrintData(&n);
//	PrintData(p);
//}


//#include <stdio.h>
//void PrintData(int* p)
//{
//	printf("%p %d\n", p, *p); // 프린터 함수 안에서 만들어진 사용자 정의 함수
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	PrintData(&n);
//	PrintData(p);
//}

//#include <stdio.h>
//
//int main()
//{
//	short n = 10;
//	short* p = &n;
//
//	printf("%d %d\n", n, *p);
//	printf("%p %p\n", &n, &*p);
//	printf("%p %p\n", &n + 1, &*p + 1);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	printf("%d %d\n", n, *p);
//	printf("%p %p\n", &n, &*p);
//	printf("%p %p\n", &n+1, &*p+1);
//}
