#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//��������
//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//2�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(40);//40���ֽ�
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ʽ
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;//11��
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p=&a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//		int* p = (int*)malloc(40);//40���ֽ�
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//		}
//	free(p);//û��ָ�򿪱ٿռ����ʼλ��
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	//..........
//	free(p);
//	//p=NULL;//RIGHT
//	//.......;
//	free(p);
//	return 0;
//}

//6.��̬�����ڴ������ͷ�

//void test()
//{
//	int* p = (int*)malloc(100);
//	int flag = 0;
//	scanf("%d", &flag);
//	if (5 == flag)
//		return;
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}