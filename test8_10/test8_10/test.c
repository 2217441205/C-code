#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while(*str1==*str2)
//	{ 
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//}
//int main()
//{
//	//strcmp�ַ����Ƚ�
//	char arr1[20] = "zhangsanfeng";
//	char arr2[] = "zhangsan";
//
//	//�Ƚ�������strcmp
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<");
//	else if (ret == 0)
//		printf("=");
//	else
//		printf(">");
//
//	//arr1��������
//	//arr2��������������������Ԫ�صĵ�ַ
//	//if (arr1 == arr2)//�����ǱȽ�������ַ����������
//	//{
//	//	printf("=");
//	//}
//	//else
//	//{
//	//	printf("!=");
//	//}
//	return 0;
//}

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello bit");
//	printf("%s", arr);
//	return 0;
//}

//���������Ƶ��ַ�������
//strncpy
//strncat
//straancmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//strncat
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] =  "abc";
//	int ret = strncmp(arr1, arr2, 3);
//	if (ret == 0)
//		printf("==\n");
//	else if (ret < 0)
//		printf(">\n");
//	else
//		printf(">\n");
//	return 0;
//}


//strstr
//�����Ӵ���һ������~

//KMP�㷨
//����㷨Ҳ������ʵ����һ���ַ����в������ַ���
//Ч�ʸߵ�ʵ�ָ���
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1!='\0'&&*s2!='\0'&& * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char emali[] = "ccccccc@hello.com";
//	char substr[] = "hello";
//	char* ret=strstr(emali, substr);
//	if (ret == NULL)
//	{
//		printf("not exit");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok
//�����и��ַ���
//cccc@cchello.com
//

//int main()
//{
//	char* sep = "@.";
//	char email[] = "cccc@cchello.com";
//	char cp[40] = { 0 };
//	strcpy(cp, email);
//	/*char*ret= strtok(cp, sep);*/
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//strerror
//���󱨸�
//C���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򶼻����ô�����
//0 1 2 3 4 5 6 7 8

//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	printf("%s\n", strerror(6));
//	printf("%s\n", strerror(7));
//	printf("%s\n", strerror(8));*/
//
//	//errno-C�������õ�һ��ȫ�ֵĴ�����Ĵ��λ��
//
//	FILE* pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//
//
//	}
//	return 0;
//}

//int main()
//{
//	/*int a = isspace(' ');
//	printf("%d\n", a);*/
//
//	return 0;
//}

//memcpy���𿽱���������ռ��е�����
//�ص��ڴ�Ŀ���������ô�����أ�memmove
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
	
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 28);
	return 0;
}