#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main ()
//{
//	//printf("hehe\n");
//	int a = 11;
// 	//scanf("%d", &a);
//	int b = 5;
//	//int c = a | b;
//	int c = a & b;
//	//printf("a=%d\n", a);
//	printf("%d", c);
//return 0;
//}
int main()
{
	int n = -2147483647;//1000000000000000000000000000010
	unsigned int a = n;
	n >>= 1;
	printf("%d\n", n*2);
	printf("%d", a);
	return 0;
}