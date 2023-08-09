#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdbool.h>

//	//计算阶乘
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
//	printf("请输入要计算的阶乘\n");
//	scanf("%d",&a);
//	int num=is_num(a);
//	printf("%d\n", num);
//	return 0;
//}

//编写一个函数，接受一个字符串作为参数，判断它是否为回文字符串（正读和倒读都一样），返回布尔值。
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
		printf("是回文\n");
	}
	else
	{
		printf("不是回文\n");
	}
	return 0;
}