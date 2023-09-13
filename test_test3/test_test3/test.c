#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int is_mine(int a, int b)
//{
//	int flag=a^b;
//	int count = 0;
//	while (flag)
//	{
//		flag = flag & (flag - 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (scanf("%d%d", &a, &b))
//	{
//		int ret=is_mine(a, b);
//		printf("%d", ret);
//	}
//	return 0;
//}

//void is_my(int a)
//{
//	for (int i = 1; i <= 31; i += 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 0; i <= 30; i += 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//void is_my(int a)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}



//int main()
//{
//	int a = 0;
//	if (scanf(" %d", &a) == 1)
//	{
//		is_my(a);
//	}
//	return 0;
//}

//int is_my(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (a >> i) & 1);
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("\n");
//	return count;
//}
//int main()
//{
//	int a = 0;
//	if (scanf(" %d", &a) == 1)
//	{
//		int ret=is_my(a);
//		printf("有%d个1", ret);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 23;
//	printf("交换前:\n");
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:\n");
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < b; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i < 99999; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n",sum);
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 0,1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", (*p)++);
	}
	return 0;
}