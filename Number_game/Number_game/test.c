#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
void cls()
{
	system("cls");
}

void Game_introduction()
{
	printf("*********************\n");
	printf("******猜数字游戏*****\n");
	printf("******范围1~100******\n");
	printf("*********************\n");

}

void Enter()
{
	char scan;
	printf("按回车键开始游戏");
	while(1)
	{
		scanf("%c", &scan);

		if (isspace(scan) != 0)
		{
			break;
		}
	}

}
void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{	
		printf("\n你还有%d次机会\n", count);
		printf("请输入你想猜的数字：>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("你猜小了\n");
		}
		else if (guess > r)
		{
			printf("你猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("次数用尽，正确答案为%d\n", r);
	}
	
}

void menu()
{
	printf("请输入数字\n");
	printf("*********************\n");
	printf("******* 1 play ******\n");
	printf("******* 2 exit ******\n");
	printf("*********************\n");

}


int main()
{
	srand((unsigned int)time(NULL));
	Game_introduction();
	Enter();
	cls();
	int input = 0;

	do
	{
		
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			cls();
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;

		default:
			//printf("选择错误，请重新选择\n");
			printf("你个人机，都能输错\n");
			break;
		}
		
	} while (input);
	
	return 0;
}

