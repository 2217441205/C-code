#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//fseek
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		perror("pf");
		return 1;
	}
	//读文件
	//定位文件指针
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));

	//fseek(pf, 2, SEEK_SET);
	fseek(pf, -1, SEEK_END);
	 ch = fgetc(pf);
	 printf("%c\n", ch);
	 printf("%d\n", ftell(pf));
	 rewind(pf);
	 ch = fgetc(pf);
	 printf("%c\n", ch);

	 //关闭文件
	 fclose(pf);
	 pf = NULL;
	return 0;
	//try pull again
}