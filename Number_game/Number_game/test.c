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
	printf("******��������Ϸ*****\n");
	printf("******��Χ1~100******\n");
	printf("*********************\n");

}

void Enter()
{
	char scan;
	printf("���س�����ʼ��Ϸ");
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
		printf("\n�㻹��%d�λ���\n", count);
		printf("����������µ����֣�>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("���С��\n");
		}
		else if (guess > r)
		{
			printf("��´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("�����þ�����ȷ��Ϊ%d\n", r);
	}
	
}

void menu()
{
	printf("����������\n");
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
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			cls();
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;

		default:
			//printf("ѡ�����������ѡ��\n");
			printf("����˻����������\n");
			break;
		}
		
	} while (input);
	
	return 0;
}

