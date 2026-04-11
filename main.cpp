//#include <stdio.h>
//void PrintStringToAscii(char* s)
//{
//	for (int i = 0; s[i] != '\0'; ++i)
//		printf("%c : %d\n", s[i], s[i]);
//	printf("\n");
//}
//int main()
//{
//	PrintStringToAscii("Hello!");
//	PrintStringToAscii("abc");
//	PrintStringToAscii("12345678");
//}

//#include <stdio.h>
//void PrintStringToAscii(char* s)
//{
//	for (int i = 0; s[i] != '\0'; ++i)
//		printf("%c : %d\n", s[i], s[i]);
//	
//}
//int main()
//{
//	printf("%s\n", "Hello");
//	
//	PrintStringToAscii("Hello!");
//}


//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "Hello");
//	char* s = "Hello!";
//	for (int i = 0; s[i] != '\0'; ++i)
//		printf("%c : %d\n", s[i], s[i]);
//}


//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "Hello");
//	char* s = "Hello";
//	for (int i = 0; s[i] != '\0'; ++i)
//		printf("%c\n", s[i]);
//}

//#include <stdio.h>
//int main()
//{
//	printf("%s\n", "Hello");
//	char* s = "Hello";
//	printf("%c\n", s[0]);
//	printf("%c\n", s[1]);
//	printf("%c\n", s[2]);
//	printf("%c\n", s[3]);
//	printf("%c\n", s[4]);
//}

//#include <stdio.h>
//int main()
//{
//	char* s = "NULL";
//	s = "ABC";
//
//	char* s2 = s+1;
//
//	printf("%s %s\n", s, s2); //----> s는 주소
//}

//#include <stdio.h>
//int main()
//{
//	char* s = "NULL";
//	s = "ABC";
//
//	printf("%p %s\n", s, s);
//	printf("%p %s\n", s+1, s+1); //----> s는 주소
//}

//#include <stdio.h>
//int main()
//{
//	char* s = "ABC";
//	printf("%s %s\n", s, "ABC"); //--->s, "ABC"는 문자열의 시작 주소로 보고 널문자가 나오기 전까지 계속 출력
//	printf("%s %s\n", s + 1, "ABC" + 1); //---> 노트 볼것
//	printf("%c %c\n", s[0], "ABC"[0]);
//	printf("%c %c\n", s[1], "ABC"[1]); //--->기말 고사에 나옴
//}

//#include <stdio.h>
//int main()
//{
//	char* s = "ABC";
//	printf("%s %s\n", s, "ABC"); //--->s, "ABC"는 문자열의 시작 주소로 보고 널문자가 나오기 전까지 계속 출력
//	printf("%s %s\n", s+1, "ABC"+1); //---> 노트 볼것
//}


#include <stdio.h>
int main()
{
	char* s;
	"ABC";

	s = "ABC";

	char arr[4] = "ABC";    
	// -> 메모리 공간은 pointer, arr 2개

	printf("%s %s\n", s, &arr[0]); //-> s는 문자열 "ABC"의 배열의 시작 주소
	printf("%s %s\n", s+1, &arr[0]+1);
}


//#include <stdio.h>
//int main()
//{
//	printf("%c %s\n", 'A', "A");
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 26; ++i)
//		printf("%d : %c\n", 'A'+i, 'A'+i);
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 'A'; i <= 'z'; ++i)
//		printf("%d : %c\n", i, i);
//}


//#include <stdio.h>
//int main()
//{
//	int n1 = 65;
//	int n2 = 'A';
//	printf("%d %d\n", n1, n2);       //->65가 아스키 코드에서 변환되어서 65 65
//	printf("%c %c\n", n1, n2);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 65;
//	printf("%d %c\n", 65, 65);
//	printf("%d %c\n", n+1, n+1);  
//}

//#include <stdio.h>
//int main()
//{
//	int n = 65;              // 65는 ASCI코드와 UNICODE에서 A임 -> 사진 찍어둠
//	printf("%d %c\n", 65, 65);
//	printf("%d %c\n", n, n); // -> char 형식은 character의 약자로,정수에 포함이 된다
//	                         // -> 또한, char 형식은 문자로 나옴 
//}

//#include <stdio.h>
//int main()
//{
//	int n = 65;
//	printf("%d\n", 65);
//	printf("%d\n", n);
//}


//#include <stdio.h>
//int main()
//{
//	char arr[2] = { 1, 2 };
//	double darr[3] = { 1.1, 2.2, 3.3 };
//	char* pc = &arr[0];
//	double* pd = &darr[0];
//	
//	printf("%p %p\n", pd, pc);
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int* p = &n;
//
//	*p = 20;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 10;
//	double d = 4.5;
//	char* p1 = &c;
//	double* p2 = &d;
//}
