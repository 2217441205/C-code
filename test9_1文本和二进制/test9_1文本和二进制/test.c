#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL; 
//	return 0;
//}

int main()
{
	FILE* pf = fopen("text.txt", "w");
	fputs("abcdef", pf); 
	printf("睡眠10秒-已经写数据");
	Sleep(10000);
	printf("刷新");
	fflush(pf);//刷新缓冲区，才将输出缓冲区的数据写到文件
	//高版本vs不能使用
	printf("在睡眠十秒");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}

