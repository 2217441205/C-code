#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return(x %10) + DigitSum(x/10);
//	}
//	else
//	{
//		return x%10;
//
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("������һ����Ϊ0������ʼ:>\n");
//	while (scanf("%d",&input)==1)
//	{
//		int a = 0;
//		printf("������Ҫ�����:\n");
//		scanf("%d", &a);
//		int sum = DigitSum(a);
//		printf("Ҫ�����%d�����Ϊ%d\n", a, sum);
//	}
//	return 0;
//}


////�ݹ�ʵ��n��k�η�
//int is_MyTest(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1;
//	}
//	else if (y >= 1)
//	{
//		return x * is_MyTest(x,y - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("����Ҫ���nֵ\n");
//	scanf("%d", &n);
//	printf("����Ҫ��Ĵη�\n");
//	scanf("%d", &k);
//	int num=is_MyTest(n, k);
//	printf("ֵΪ:%d\n", num);
//	return 0;
//}

// //�ݹ鷽�����n��쳲�������
//int is_Func(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return is_Func(n - 1) + is_Func(n - 2);
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("����Ҫ�����\n");
//	scanf("%d", &a);
//	int num=is_Func(a);
//	printf("��%d����n��쳲���������%d", a, num);
//	return 0;
//}

//�ǵݹ����n��쳲�������
int main()
{
	printf("����Ҫ��ĵ�n����\n");
	int n = 0;
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("���Ϊ1\n");
	}
	else if (n > 2)
	{
		int a = 1;
		int b = 1;
		int c = 0;
		int i = 0;
		for (i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("���Ϊ%d\n", c);
	}
	return 0;
}