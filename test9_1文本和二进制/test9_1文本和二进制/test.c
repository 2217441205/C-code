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
	printf("˯��10��-�Ѿ�д����");
	Sleep(10000);
	printf("ˢ��");
	fflush(pf);//ˢ�»��������Ž����������������д���ļ�
	//�߰汾vs����ʹ��
	printf("��˯��ʮ��");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}

