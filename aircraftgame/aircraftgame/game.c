#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void menu()
{
	printf("***1.play****\n");
	printf("***0.exit****\n");
	printf("w a s d 移动\n");
	printf("按空格发射子弹\n");

}
int game()
{
	int i, j;
	int x = 10;
	int y = 5;
	char input;
	int bazi = 5;
	int isFired = 0;
	int isKilled = 0;
	int disappearTimer = 0; // 计时器，用于控制靶子的消失和重新出现
	while (1)
	{
		system("cls");
		if (isKilled)
		{
			if (disappearTimer > 2)
			{
				isKilled = 0;
				disappearTimer = 0;
			}
			else
			{
				disappearTimer++;
			}
		}
		if (isKilled == 0)
		{
			for (i = 0; i < bazi; i++)
			{
				printf(" ");
			}
			printf("+\n");
		}

		if (isFired == 0)
		{
			for (i = 0; i < x; i++)
				printf("\n");
		}
		else
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
					printf(" ");
				printf("  |\n");
			}
			if (y + 2 == bazi)
				isKilled = 1;
			isFired = 0;
		}
		for (j = 0; j < y; j++)
			printf(" ");
		printf("  *  \n");
		for (j = 0; j < y; j++)
			printf(" ");
		printf("*****\n");
		for (j = 0; j < y; j++)
			printf(" ");
		printf(" * * \n");
		//scanf("%c", &input);
		input = _getch();

		if (input == 's' || input == 'S')
			x++;
		if (input == 'w' || input == 'W')
			x--;
		if (input == 'a' || input == 'A')
			y--;
		if (input == 'd' || input == 'D')
			y++;
		if (input == ' ')
		{
			isFired = 1;
		}


	}
	return 0;
}
int main()
{
	int chose=0;
	do
	{
		menu();
		printf("选择:>\n");
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit");
			break;
		default:
			printf("erro");
			break;
		}

	} while (chose);
	
	
	return 0;
}