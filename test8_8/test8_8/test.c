#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr + 1));
//	return 0;
//}


//�ַ������ַ�������
// 
//������
//ָ��-ָ��
//�ݹ�
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	//char arr[] = { 'b','i','t' };
//	//[][][][][][b][i][t][][][][][][][][]
//	int len=strlen(arr);//���ֵ
//	my_strlen(arr);
//	return 0;
//}

//int main()
//{
//	char name[] = { 0 };
//	//"zhangsan"
//	strcpy(name,"zhangsan");
//	//name = "zhangsan";//err,name�������ǵ�ַ����ַ��һ������ֵ
//	//���ܱ���ֵ
//	printf("%s\n", name);
//	return 0;
//}

char* my_strlen(char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
//�ַ���׷��
char* my_strcat(char* arr1, char* arr2)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (*arr1 != '\0')
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
		;
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	my_strcat(arr1, "world");
	char arr2[20] = { 0 };
	my_stcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}
//Ϊʲô�ϴ�ʧ�ܣ�