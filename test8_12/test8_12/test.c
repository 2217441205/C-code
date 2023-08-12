#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
////memcpy函数是不用来处理重叠的内存
////memmove实现重叠拷贝
//void* my_memove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//void test3()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}
//int main()
//{
//	test3();
//	return 0;
//}


//memcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//memset-内存设置
int main()
{
	char arr[] = "hello bit";
	memset(arr+6, 'x', 3);
	printf("%s\n", arr);
	return 0;
}