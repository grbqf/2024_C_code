#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int len = arr[9] - arr;//err
//
//	//int len = &arr[9] - &arr;
//	//int len = &arr[9] - &arr[0];
//	//printf("%zd", &arr[9] - &arr[0]);
//	printf("%d", len);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "qwerty";
//	char* p = arr;
//	int i = 0;
//	while (*p != '\0')
//	{
//		p++;
//		i++;
//	}
//	int len = p - arr;
//	printf("%d", len);
//	return 0;
//}

void print(int* p,int i)
{
	i--;
	while (i)
	{
		printf("%d\n", *p);
		p++;
		i--;
	}
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,8,9 };
	print(arr, 10);


	return 0;
}