#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p1)[10] = &arr;
//	printf("%p\n", *p1);//p1==&arr, *p1==*&arr==arr, 所以，打印首地址；
//	printf("%d ", (*p1)[1]);
//	return 0;
//}
int main()
{
	int arr[3][3][3] = { {{1,2,3},{4,5,6},{7,8,9}} ,{{1,2,3},{4,5,6},{7,8,9}} ,{{1,2,3},{4,5,6},{7,8,9}} };
	printf("%p", arr[0]);
	//int(*p1)[3];

	return 0;
}

//0113FE18
//0x0113fdf4, 0x0113fe00 {4, 5, 6}, 0x0113fe0c {7, 8, 9}}	int[3][3]
