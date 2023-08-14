#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体类型

//学生

//struct stu
//{
//	//描述学生的相关属性
//	char name[20];
//	int age;
//}s1,s2;//在这里s1，s2是全局变量
//int main()
//{
//
//	return 0;
//}
 


////匿名结构体类型
//struct 
//{
//	//描述学生的相关属性
//	char name[20];
//	int age;
//}s1;

//struct node
//{
//	int data;
//	struct node next;//erro
//};

//struct node
//{
//	int data;
//	struct node* next;
//};

struct S1
{
	char c1;
	int i;
	char c2;
};
int main()
{
	printf("%d\n", sizeof(struct S1));//12
	return 0;
}