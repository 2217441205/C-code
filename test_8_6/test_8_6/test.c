#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdbool.h>

//	//����׳�
//int is_num(int i)
//{
//	if (i < 0)
//	{
//		printf("erro");
//		return 0;
//	}
//	else if (i == 0 || i == 1)
//	{
//		return 1;
//	}
//	//2
//	// //2*(2-1)
//	//3
//	//3*2*1
//	else
//		return i * is_num(i - 1);
//}
//int main()
//{
//	int a = 0;
//	printf("������Ҫ����Ľ׳�\n");
//	scanf("%d",&a);
//	int num=is_num(a);
//	printf("%d\n", num);
//	return 0;
//}

//��дһ������������һ���ַ�����Ϊ�������ж����Ƿ�Ϊ�����ַ����������͵�����һ���������ز���ֵ��
bool is_huiwen(char* a)
{
	int length = strlen(a);
	for (int i = 0; i < length / 2; i++)
	{
		if (a[i] != a[length - i - 1])
		{
			return  false;
		}
	}
	return true;
}
int main()
{
	char a[] = "123321";
	if (is_huiwen(a))
	{
		printf("�ǻ���\n");
	}
	else
	{
		printf("���ǻ���\n");
	}
	return 0;
}