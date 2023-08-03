#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int (*pa)[5] = &arr2;
//	char* arr3[6];
//	char*(*p3)[6] = &arr3;
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	//函数指针- 也是一种指针，是指向函数的指针
//	printf("%p\n", test);
//	int (*pf)(const char*) = test;
//	pf("abc");
//	(*pf)("abc");
//	return 0;
//}

//int main()
//{
//	   
//	return 0;
//}

//函数指针用途

//写一个计算器
//加法减法乘法除法


//void menu()
//{
//	printf("************************\n");
//	printf("*********1.add 2.sub********\n");
//	printf("*********3.mul 4.div**********\n");
//	printf("*********   0.exit      ******\n");
//	printf("************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针的数组
//	//转移表
//	int(*parr[])(int,int) = {0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("chose:>");
//			scanf("%d", &input);
//			if (input == 0)
//			{
//				printf("exit\n");
//			}
//			else if (input >= 1 && input <= 4)
//			{
//				printf("请输入两个操作数:>");
//				scanf("%d %d", &x, &y);
//				ret = parr[input](x, y);
//				printf("%d\n", ret);
//			}
//			else
//			{
//				printf("选择错误");
//			}
//		/*switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("exit");
//		default:
//			printf("erro");
//
//			break;
//		}*/
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add;//pf是函数指针
//	int (*arr[4])(int,int) = {Add,Sub,Mul,Div};//arr就是函数指针的数组
//	 
//	return 0;
//}


//int main()
//{
//	//函数指针数组
//	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//指向函数指针数组
//	int((*ppfarr)[5])(int, int) = &pfarr;
//	//ppfarr = &pfarr;
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是有序的
		int j = 0;
		for (j = 0; j < sz - 1 - i; i++)
		{
			if(arr[j]<arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
//qsort
int cmp_t(const void* e1, const void* e2)
{
	return (*(int*)e1) - *(int*)e2;
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_t);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
 }