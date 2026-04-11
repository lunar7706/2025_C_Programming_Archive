#include <stdio.h> //prinf()
#include <stdlib.h> //malloc, free() ---> Heap 형식
int main()
{
	int*p = malloc(sizeof(int)*4);

	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	printf("data : %d\n", p[0]);
	printf("data : %d\n", p[1]);
	printf("data : %d\n", p[2]);
	printf("data : %d\n", p[3]);
	
	free(p);                //heap 메모리만 삭제
}

//#include <stdio.h> //prinf()
//#include <stdlib.h> //malloc, free() ---> Heap 형식
//int main()
//{
//	int* p = malloc(sizeof(int));
//
//	*p = 10;
//	printf("data : %d\n", *p);
//
//	free(p);                //heap 메모리만 삭제
//}

//#include <stdio.h> //prinf()
//#include <stdlib.h> //malloc, free() ---> Heap 형식
//int main()
//{
//	double* p = malloc(sizeof(double));
//
//	*p = 100.67;
//	printf("data : %g\n", *p);
//
//	free(p);
//}

//#include <stdio.h> //prinf()
//#include <stdlib.h> //malloc, free() ---> Heap 형식
//int main()
//{
//	double* p = malloc(8);
//
//	*p = 100.67;
//	printf("data : %g\n", *p);
//
//	free(p);
//}

//#include <stdio.h> //prinf()
//#include <stdlib.h> //malloc, free() ---> Heap 형식
//int main()
//{
//	int* p = malloc(4);
//
//	*p = 100;
//	printf("data : %d\n", *p);
//
//	free(p);
//}

//#include <stdio.h>
//
//void PrintInteger(int n)
//{
//	printf("data : %d\n", n);
//}
//int main()
//{
//	PrintInteger(10);
//	int n = 20;
//	PrintInteger(n);
//}

//#include <stdio.h>
//int g = 200;     // 전역 변수
//int* pg = &g;
//
//void PrintGlobalData()
//{
//	printf("gd : %d %d\n", g, *pg);
//	//printf("gd : %d %d\n", g, *p);
//}
//int main()
//{
//	// 메모리/ 변수, 상수
//	int n = 10;               // 지역 변수
//	int* p = &n;
//
//	printf("%d %d\n", n, *p);
//	printf("%d %d\n", n, *pg);
//}

//#include <stdio.h>
//int main()
//{
//	//char s[4] = "ABC";
//	//char s[4] = {'A','B','C','\0'};
//	//char s[3] = {'A','B','C'};  -> \0 널문자가 없음
//	//char s[] = { 'A','B','C'}; // 3이 생략되어 있음
//	char s[] = "ABC"; // 4생략
//
//	//for (int i = 'A'; i <= 'C';  ++i)
//	printf("string : %s\n", s);
//	printf("%c\n", s[0]);
//	printf("%c\n", s[1]);
//	printf("%c\n", s[2]);
//
//	// 'A' 'B' 'C'
//}
