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
//	printf("请输入一个不为0的数开始:>\n");
//	while (scanf("%d",&input)==1)
//	{
//		int a = 0;
//		printf("输入你要算的数:\n");
//		scanf("%d", &a);
//		int sum = DigitSum(a);
//		printf("要算的数%d各项和为%d\n", a, sum);
//	}
//	return 0;
//}


////递归实现n的k次方
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
//	printf("输入要算的n值\n");
//	scanf("%d", &n);
//	printf("输入要算的次方\n");
//	scanf("%d", &k);
//	int num=is_MyTest(n, k);
//	printf("值为:%d\n", num);
//	return 0;
//}

// //递归方法求第n个斐波那契数
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
//	printf("输入要求的数\n");
//	scanf("%d", &a);
//	int num=is_Func(a);
//	printf("第%d个第n个斐波那契数是%d", a, num);
//	return 0;
//}

//非递归求第n个斐波那契数
int main()
{
	printf("输入要求的第n个数\n");
	int n = 0;
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("结果为1\n");
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
		printf("结果为%d\n", c);
	}
	return 0;
}