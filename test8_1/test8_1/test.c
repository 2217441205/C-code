#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char* p = "abcdef";//���ַ������ַ�a�ĵ�ַ��ֵ����p;
//                    //�����ַ���
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6, };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", * (parr[i] + j));
//			printf("%d ", parr[i][j]);//�ȼ�
//
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int* p = &arr;//�о����
	int(*p2)[10] = &arr;
	//����ָ��������������͵ĵ�ַ
	//�ַ�ָ������������ַ��ĵ�ַ
	//����ָ�����������������ĵ�ַ
	/*printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr );
	printf("%p\n", &arr+1);*/
	//int sz = sizeof(arr);
	//printf("%d\n", sz);
	return 0;
}
//1.������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//�������������⣺
//1.sizeof(������)���������������ʾ�����������飬���������������Ĵ�С
//2.&���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ
