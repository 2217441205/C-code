#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a=2+6/3;
//	int b=2+3+4;//���ȼ�
//	return 0;
//}
//int main()
//{
//	char c=-1;//-1��������32������λ
//	//1000000000000000000000000000000
//	//1111111111111111111111111111110
//	//1111111111111111111111111111111  -->-1����
//	//c��char����//
//	//11111111  Ϊc
//
//}
//int main()
//{
//	char a=5;
//	char b=126;
//	char c = a + b;
//	printf("%d\n",c);
//	return 0;
//}
//00000101
//01111110
//��������
//int main()
//{
//	int a=1;
//	int b=(++a)+(++a)+(++a);
//	printf("%d\n",b);
//    return 0;
//	
//}
//С������̨��
//int fib(int x)
//{
//	if(x<=2)
//	{
//		return x;
//	}
//	else
//	{
//		return fib(x-1)+fib(x-2);
//	}
//
//}
//int main()
//{
//	int n=0;
//	int m =0;
//	scanf("%d",&n);
//	m= fib(n);
//	printf("%d\n",m);
//	return 0;
//}

//int main()
//{
//	 int n=0;
//	 scanf("%d",&n);
//	int arr[n];
//	 //����n������
//	int i=0;
//	for(i=0;i<n;i++);
//	{
//		scanf("%d",&arr[i]);
//	}
//	int del=0;
//	scanf("%d",&del);
//	int j=0;//j��Ϊ�±�������λ�þ���������Ų�ɾ��������
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]!=del)
//		{
//			arr[j++]=arr[i];
//		}
//	}
//	for(i=0;i<j;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
 
int main()
{
	char ch = 0;
	while (scanf("%c",&ch)==1)
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c\n", ch - 32);
		else if(ch>='A'&&ch<='Z')
			printf("%c\n", ch + 32);
		//getchar();//����\n
	}

	return 0;

}