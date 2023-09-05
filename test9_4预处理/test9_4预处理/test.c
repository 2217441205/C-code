#define _CRT_SECURE_NO_WARNINGS 1
//#define SQUARE(X) X*X 
#define SQUARE(X) ((X)*(X))
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

//int main()
//{
//	int r = SQUARE(5+1);
//	//r = 5 + 1 * 5 + 1; 替换了
//	//r = ((5 + 1) * (5 + 1));
//	//定义宏的时候不吝啬括号
//	printf("%d\n", r);
//	return 0;
//}

//#define DOUBLE(x) ((x)+(x)) 
//int main()
//{
//	int r = DOUBLE(3 * 2);
//	printf("%d\n",r);
//	return 0;
//}

//#define M 100
//#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	DOUBLE(100 + 2);
//	//((100+2)+(100+2))
//	return 0;
//}

//宏不能递归
//"M"
//"DOUBLE"不是替换，是字符串内的内容

//#define print(n) printf("the value of "#n"is %d\n", n)
//#define print(N, format) printf("the value of "#N" is "format,N)
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello ""world\n");//两个字符串合并一个字符串
//	int a = 10;
//	print(a, "%d");
//	//printf("the value of a is %d\n", a);
//	//print(a);
//	int b = 20;
//	float f = 3.14f;
//	print(f,"%lf");
//	//print(b);
//	//printf("the value of b is %d\n", b);
//
//	return 0;
//}

//#define CAT(class,num) class##num
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class, 106));
//	printf("%d\n", class106);
//	return 0;
//}


//宏和函数对比
//宏
//#define max(a,b) ((a)>(b)?(a):(b))
//
////函数
//int Max(int a, int b)
//{
//	return (a > b ? a : b);
//}
//int main()
//{
//	int m = max(2, 3);
//	printf("%d\n", m); 
//
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//int main()
//{
//	//malloc(40);
//	int*p=MALLOC(10, int);
//	return 0;
//}

//注意宏的命名约定
//宏名全大写
//函数名不要全大写

//ofssetof -宏
//getchar

//#define M 100;
//int main()
//{
//	printf("M");
//}

//写一个宏，计算结构体中某变量对于首地址的偏移，并给出说明
//计算结构体变量对首地址的偏移量
#include<stddef.h>
struct S
{
	char c1;
	int i;
	char c2;
};
#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)
int main()
{
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));

	/*printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));*/
	return 0;
}
