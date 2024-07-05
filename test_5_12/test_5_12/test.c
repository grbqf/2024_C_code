#define  _crt_secure_no_warnings 1
#include<stdio.h>
//int main()
//{
//	(int*)0;
//
//	printf("%d", 0);
//	return 0;//Ctrl+K+C  注释  Ctrl+K+U  取消注释
//}
typedef int* pint_t;//重新定义类形名称

int main()
{
	int a = 10;
	pint_t p = &a;
	printf("%d", *p);

	return 0;
}