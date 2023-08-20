#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//enum Day
//{
//	//枚举常量
//	Mon,//默认为0,可赋初始值Mon=1;
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//}; 
//int main()
//{
//	//enum Day d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	return 0;
//}

//union Un
//{
//	int a;//4
//	char c;//1
//};
////共用空间
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//?  //4
//	return 0;
//}

//判断大端小端
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}


//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
////	返回一是小端，返回0是大端
//	return u.c;
//}
//int main()
//{
//	int a = 1;//0x00 00 00 01
////	低--高
////	01 00 00 00 --小端
////	00 00 00 01--大端
//	int ret=check_sys();
//	if (1 == ret)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

union Un
{
	char arr[5];//5
	//char char char char char
	int i;//4 8
};
//存在对齐

