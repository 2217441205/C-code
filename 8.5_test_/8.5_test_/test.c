#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��һ¥�ݹ�10������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�10�������ж����߷���

//�ݹ�
//int the_step(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//	//���̨����1 ��2
//	//���߷��ֱ�Ϊ1�� ������
//	//��̨��������3
//	//�߷�Ϊ
//	//1.����һ��̨�� ʣ���̨��
//	//2.��������̨�ף�ʣ��һ
//	//��֪x<=2,����x
//	//�򷵻�2+1=3
//	//��̨����Ϊn��n>3
//	//Ҫ�ߵĲ���Ϊ(n-1)+(n-2)
//	if(x>2)
//	{ 
//		return the_step(x - 1) + the_step(x - 2);
//	}
//	
//}
//int the_step2(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//
//	int dp[1000]; //C99������int dp[x+1]
//		dp[1] = 1;
//		dp[2] = 2;
//		for (int i = 3; i <= x; i++)
//		{
//			dp[i] = dp[i - 1] + dp[i - 2];
//		}
//		return dp[x];
//}
//int main()
//{
//	int a = 0;
//	printf("Ҫ�ϵ�̨����\n");
//	scanf("%d", &a);
//	getchar();
//	//int num = the_step(a);
//	int num=the_step2(a);
//	printf("Ҫ�ߵĲ���Ϊ%d\n",num);
//	return 0;
//}


//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	
//	int num=Add(3,4);
//	return 0;
//}


//int is_ddd(int x)
//{
//	if (x % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("������һ����");
//	scanf("%d", &a);
//	if (is_ddd(a))
//	{
//		printf("��ż��:%d\n", a);
//	}
//	else
//	{
//		printf("����ż��:%d\n", a);
//	}
//	return 0;
//}

int countupper(char str[])
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char input[100];
	printf("����Ҫ��ȡ���ַ�\n");
	fgets(input, sizeof(input), stdin);//fgets �� C ���Ա�׼���е�һ�����������ڴ���������ͨ���Ǽ������룩��ȡһ���ַ���
	//char *fgets(char *str, int n, FILE *stream);
	int count = countupper(input);
	printf("��д����Ϊ:%d\n", count);
	return 0;
}