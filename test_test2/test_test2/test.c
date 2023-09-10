#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void my_qort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int change = 0;
//		for (int j = 0; j < sz - i-1; j++)
//		{
//			
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j ];
//				arr[j ] = arr[j+1];
//				arr[j+1] = tmp;
//				change = 1;
//			}
//		}
//		if(!change)
//		{
//			return;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {23,5,6,89,78};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void init(int* arr, int sz,int set)
//{
//	for (int i = 0; i < sz ; i++)
//	{
//		printf("输入要设置的值:>\n");
//		scanf("%d", &set);
//		arr[i] = set;
//	}
//}
//void print(int* arr,int sz)
//{
//	for (int i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int set = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("初始化\n");
//	init(arr, sz,set);
//	printf("打印\n");
//	print(arr,sz);
//
//	//逆置
//	reverse(arr, sz);
//	printf("打印逆置后\n");
//
//	print(arr, sz);
//	return 0;
//}



//交换数组
void is_change(void* arr1, void* arr2, int size)
{
	unsigned char* bytearr1 = (unsigned char*)arr1;
	unsigned char* bytearr2 = (unsigned char*)arr2;
	for (int i = 0; i < size; i++)
	{
		unsigned char tmp = bytearr1[i];
		bytearr1[i] = bytearr2[i];
		bytearr2[i] = tmp;
	}
}
int main()
{
	int arr[] = { 0,2,3,5,8 };
	int arr2[] = { 12,23,34,45,56 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	is_change(arr, arr2,sizeof(arr));
	printf("\n交换后 arr1: ");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n交换后 arr2: ");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}