#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void scan_arr(int *p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		//scanf("%d", arr1 + i);
//		*(p+i) = i;
//	}
//}
//
//void print_arr(int *p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	scan_arr(arr);
//	print_arr(arr);
//
//	return 0;
//}
void scan_arr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		//scanf("%d", arr1 + i);
		arr[i] = i;
	}
}

void print_arr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main()
{
	int arr[10] = { 0 };
	scan_arr(arr);
	print_arr(arr);

	return 0;
}