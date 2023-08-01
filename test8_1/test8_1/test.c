#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char* p = "abcdef";//把字符串首字符a的地址赋值给了p;
//                    //常量字符串
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
//			printf("%d ", parr[i][j]);//等价
//
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int* p = &arr;//有警告的
	int(*p2)[10] = &arr;
	//整型指针是用来存放整型的地址
	//字符指针是用来存放字符的地址
	//数组指针是你用来存放数组的地址
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
//1.数组名通常表示的都是数组首元素的地址
//但是有两个例外：
//1.sizeof(数组名)，这里的数组名表示的是整个数组，计算的是整个数组的大小
//2.&数组名，这里的数组名表示的依然是整个数组，所以&数组名取出的是整个数组的地址
