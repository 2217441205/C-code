#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//弹跳小球的实现

int main()
{
	int i, j;
	int x = 0;
	int y = 10;
	int velocity_x = 1;
	int velocity_y = 1;
	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 20;
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台句柄
	//for(x=1;x<10;x++)
	printf("game will begin\n");
	Sleep(1000);
	system("cls");
	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");//清屏
		//COORD cursorPos; // 光标位置结构体
		//cursorPos.X = 0;
		//cursorPos.Y = 0;
		//SetConsoleCursorPosition(hConsole, cursorPos); // 将光标移动到左上角

		//输出小球前的空行
		for (i = 0; i < x; i++)
		{
			printf("\n");
		}
		for (j = 0; j < y; j++)
		{
			printf(" ");
		}
		printf("o\n");
		Sleep(10);
		if ((x == top) || (x == bottom))
		{
			velocity_x=-velocity_x;
		}
		if ((y == left) || (y == right))
		{
			velocity_y = -velocity_y;
		}
		/*if ((x == top) || (x == bottom) || (y == left) || (y == right))
		{
			printf("\a");
		}*/
	}
	
	return 0;
}