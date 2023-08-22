#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//常见错误
//1.对NULL指针的解引用操作
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

//2对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(40);//40个字节
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//方式
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;//11个
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p=&a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//		int* p = (int*)malloc(40);//40个字节
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//		}
//	free(p);//没有指向开辟空间的起始位置
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存多次释放
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

//6.动态开辟内存忘记释放

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