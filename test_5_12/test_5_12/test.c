#define  _crt_secure_no_warnings 1
#include<stdio.h>
//int main()
//{
//	(int*)0;
//
//	printf("%d", 0);
//	return 0;//Ctrl+K+C  ע��  Ctrl+K+U  ȡ��ע��
//}
typedef int* pint_t;//���¶�����������

int main()
{
	int a = 10;
	pint_t p = &a;
	printf("%d", *p);

	return 0;
}