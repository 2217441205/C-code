#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//enum Day
//{
//	//ö�ٳ���
//	Mon,//Ĭ��Ϊ0,�ɸ���ʼֵMon=1;
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
////���ÿռ�
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//?  //4
//	return 0;
//}

//�жϴ��С��
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
////	����һ��С�ˣ�����0�Ǵ��
//	return u.c;
//}
//int main()
//{
//	int a = 1;//0x00 00 00 01
////	��--��
////	01 00 00 00 --С��
////	00 00 00 01--���
//	int ret=check_sys();
//	if (1 == ret)
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}

union Un
{
	char arr[5];//5
	//char char char char char
	int i;//4 8
};
//���ڶ���

