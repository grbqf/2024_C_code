#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", j, i, (i * j));
//		}
//		printf("\n");
//	}
//	
//
//	return 0; 
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	for (int i=num1;i>=1;i--)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	for (int i = 100,j=0; i <= 200; i++)
//	{
//		for ( j = 2; j <= i/2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}	
//		}
//		if (j >= i / 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//    if (1)
//    {
//        printf("1\n");
//    }
//
//    else if (2)
//    {
//        printf("2\n");
//    }
//
//    else if (3)
//    {
//        printf("3\n");
//    }
//
//    else if (4)
//    {
//        printf("4\n");
//    }
//
//    else
//    {
//        printf("5\n");
//    }
//    return 0;
//}
//
//*   *
// * *
//  *
// * *
//*   *

//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 1; i <= a; i++)
//        {
//            for (int j = 1; j <= a; j++)
//            {
//                if (j == i || j == a - i + 1)
//                    printf("*");
//                else if (j != i && j < a)
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main() {
//    int a, b;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 1; i <= a; i++)
//        {
//            for (int j = 1; j <= a; j++)
//            {
//                if (i == 1 || i == a)
//                    printf("* ");
//                else if (j == 1 || j == a)
//                    printf("* ");
//                else
//                    printf("  ");
//
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//123456
// 142536
//

//int main() 
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int cun = a * b;
//    int arr[10][10] = {0};
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < b; i++)
//    {
//        for (int j = 0; j < a; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//   
//    return 0;
//}
void Bubble_sort(int size, int arr1[])
{
    int count = 0;
    int temp = 0;
    for (int i = 0; i<size - 1; i++)
    {
        count = 0;
        for (int j = 0; j <=size - 1 - i; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
                count=1;
            }
        }
        if (count == 0)
            break;
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int i = 0;
    int num = n + m;
    int arr[1000] = { 0 };
        while (num)
        {
            scanf("%d", arr + i);
            i++;
            num--;
        }
        Bubble_sort(n + m, arr);
           
        for (int j = 0; j < n + m; j++)
        {
            printf("%d ", arr[j]);
        } 
        return 0;
}