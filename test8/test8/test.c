#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* arr[5] = { 0 };
//	char*(*pc)[5] = &arr;
//	char ch = 'w';
//	char* p1 = &ch;
//	char**pw2=&p1;
//	return 0;
//}


//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	//int(*p)[10] = &arr;//[]�ڵ���������д
//	//int i = 0;
//	//int sz = sizepf(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p+i));//p��ָ�������*p��ʵ���൱��������
//	//	                   //����������������Ԫ�صĵ�ַ
//
//	//}
//	return 0;
//}

//void print1(int arr[3][5], int c, int r)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print3(int* p)
//{ 
//
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);//������һ�еĵ�ַ
//	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print3(data);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//	int (*pf)(int, int) = &Add;
//	int (*pf)(int ,int) = Add;
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	int ret=Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

void calc(int(*pf)(int ,int))
{
	int a = 3;
	int b = 5;
	int ret = pf(a, b);
	printf("%d\n", ret);
}

int main()
{
	calc(Add);
	return 0;
}