#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ������

//ѧ��

//struct stu
//{
//	//����ѧ�����������
//	char name[20];
//	int age;
//}s1,s2;//������s1��s2��ȫ�ֱ���
//int main()
//{
//
//	return 0;
//}
 


////�����ṹ������
//struct 
//{
//	//����ѧ�����������
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