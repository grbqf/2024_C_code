#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int arr[10] = { '0' };
	//int* p1 = arr;
	//int* p2 = arr + 3;
	///*char arr[10] = { '0' };
	////char* p1 = arr;
	////char* p2 = arr + 3;
	////printf("%d,%p\n", p2 - p1, p2 - p1);*/
	//char a[] = { "aaaa","bbbb", "cccc" };err
	char a[] = { "aaaa" };
	char* as[] = { "aaaa","bbbb","cccc" };
	char* ap[] = { a };
	char** p = as;
	char** p2 = &as[0];
	//char*** p1 = p;
	//����p��Ȼ������Ϊ����ָ�룬���书������ָͨ��û������p�д�ŵ�Ϊas��Ԫ�صĵ�ַ��
	// asΪ����ָ�룬asָ����Ԫ�ص�ַ������Ԫ��Ϊ��aaaa������Ԫ�ء�a���ĵ�ַ������ p ������Ϊ����ָ��
	// 
	//printf("%s\n", *as);
	//printf("%p\n", as);
	printf("%s\n", a+2);
	printf("%s\n", *as);
	printf("%s\n", *ap);
	////printf("%s\n", *p);
	////printf("%s\n", *p1);




	return 0;
}
////#include <stdio.h>
////int main()
////{
////	char* c[] = { "ENTER","NEW","POINT","FIRST" };
////	char** cp[] = { c + 3,c + 2,c + 1,c };
////	char*** cpp = cp;
////	printf("%s\n", **++cpp);
////	printf("%s\n", *-- * ++cpp + 3);
////	printf("%s\n", *cpp[-2] + 3);
////	printf("%s\n", cpp[-1][-1] + 1);
////	return 0;
////}