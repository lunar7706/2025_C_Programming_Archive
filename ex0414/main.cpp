#include
void Add(int aa, int bb, int* rr)
{
*rr = aa + bb;
//printf(“%d %d %d\n”, aa, bb, rr = aa + bb);
}
int main()
{
int a = 10;
int b = 20;
int result = 0;

Add(a, b, &result);

printf(“result : %d\n”, result);
}

//#include
//void PrintInteger(int* k)
//{
// printf(“int: %d\n”, k0); -————> 입력 매개 변수 (IN), int* k
//}
//int main()
//{
// int n = 10;
// PrintInteger(&n);
//}

//#include
//void PrintInteger(int* k)
//{
// printf(“int: %d\n”, *k);
//}
//int main()
//{
// int n = 10;
// PrintInteger(&n);
//}

//#include
//void PrintInteger(int k)
//{
// printf(“int: %d\n”, k);
//}
//int main()
//{
// int n = 10;
// PrintInteger(n); // n이라는 변수가 혼자 있으면 read,
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
//
// printf(“data : %d\n”, n);
// p = 20;
// printf(“data : %d\n”, n);
// *p = *p + 1;
// printf(“data : %d\n”, n);
// ++(p);
// printf(“data : %d\n”, n);
// (*p)++;
// printf(“data : %d\n”, n);
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
//
// printf(“%d %d\n”, n, *p);
// printf(“%d %d\n”, n, *(p+0));
// printf(“%d %d\n”, n, p0);
//}

//#include
//int main()
//{
// int n = 10;
// int k = 20;
// int* p = NULL; // 널(NULL) 포인터가 0 주소를 담고있는 포인터이다
//
// p = &n;
// //p = &k;
//
// printf(“int : %d\n”, *p);
//}

//#include
//int main()
//{
// int n = 10;
// int k = 20;
// int* p;
//
// //p = &n;
// p = &k;
//
// printf(“int : %d\n”, *p);
// printf(“int : %d\n”, *p);
// printf(“int : %d\n”, *p);
// printf(“int : %d\n”, *p);
// printf(“int : %d\n”, *p);
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
// int** pp = &p;
//
// printf(“%d %p %p\n”, n, p, pp);
// printf(“%d %d %d\n”, n, p, *pp);
// printf(“%p %p %p\n”, &n, p, *pp);
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
// int** pp = &p;
//
// printf(“%d %p %p\n”, n, p, pp);
//}

//#include
//int main()
//{
// int n = 10;
// int* p1 = &n;
// int* p2 = p1;
//
// //n = 100;
// *p2 = 100;
// printf(“%d %d\n”, n, *p1);
// printf(“%d %d\n”, n, *p2);
//}

//#include
//int main()
//{
// int n = 10;
// int* p1 = &n;
//
// n = 100;
// printf(“%d %d\n”, n, *p1);
//}

//#include
//int main()
//{
// int n = 10;
// int k = n;
//
// n = 100;
//
// printf(“%d %d\n”, n, k);
//}

//#include
//int main()
//{
// char c = 10;
// double d = 4.5;
// char* p1 = &c;
// double* p2 = &d;
//
// printf(“%d %d\n”, c, *p1);
// printf(“%d %d\n”, d, *p2);
//
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
// printf(“%d %d\n”, n, p);
// printf(“%d %d\n”, &n, &p);
// printf(“%d %d\n”, &n, p);
// printf(“%d %d\n”, *&n, *p);
//}

//#include
//int main()
//{
// int n = 10;
// int* p = &n;
// printf(“%d %d\n”, n, *p);
// printf(“%d %d\n”, &n, p);
//}

//#include
//int Increament(int n)
//{
// return n + 1;
//}
//int main()
//{
// int n = 10;
// n = Increament(n);
// printf(“n : %d\n”, n);
// n = Increament(n);
// printf(“n : %d\n”, n);
// n = Increament(n);
// printf(“n : %d\n”, n);
//}

//#include
//int Increament(int n)
//{
// return n + 1;
//}
//int main()
//{
// int n = 10;
// n = Increament(n);
// printf(“n : %d\n”, n);
//}

//#include
//int Increament(int n)
//{
// return n+1;
//}
//int main()
//{
// int n = 10;
// n = Increament(n);
// printf(“n : %d\n”, n);
//}

//#include
//int Increament(int n)
//{
// return 100;
//}
//int main()
//{
// int n = 10;
// n = Increament(n);
// printf(“n : %d\n”, n);
//}
