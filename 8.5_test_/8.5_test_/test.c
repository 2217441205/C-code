#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//有一楼梯共10级，若每次只能跨上一级或二级，要走上第10级，共有多少走法？

//递归
//int the_step(int x)
//{
//	if (x <= 2)
//	{
//		return x;
//	}
//	//如果台阶是1 或2
//	//则走法分别为1种 ；两种
//	//若台阶数等于3
//	//走法为
//	//1.先走一个台阶 剩余二台阶
//	//2.先走两个台阶，剩余一
//	//已知x<=2,返回x
//	//则返回2+1=3
//	//若台阶数为n，n>3
//	//要走的步数为(n-1)+(n-2)
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
//	int dp[1000]; //C99编译器int dp[x+1]
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
//	printf("要上的台阶数\n");
//	scanf("%d", &a);
//	getchar();
//	//int num = the_step(a);
//	int num=the_step2(a);
//	printf("要走的步数为%d\n",num);
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
//	printf("请输入一个数");
//	scanf("%d", &a);
//	if (is_ddd(a))
//	{
//		printf("是偶数:%d\n", a);
//	}
//	else
//	{
//		printf("不是偶数:%d\n", a);
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
	printf("输入要读取的字符\n");
	fgets(input, sizeof(input), stdin);//fgets 是 C 语言标准库中的一个函数，用于从输入流（通常是键盘输入）读取一行字符串
	//char *fgets(char *str, int n, FILE *stream);
	int count = countupper(input);
	printf("大写个数为:%d\n", count);
	return 0;
}