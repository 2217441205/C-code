#include<stdio.h>
#include<string.h>
//& -����2���ƣ�λ��
//| -����2���ƣ�λ��
//^ -����2���ƣ�λ��� -��ͬΪ0����Ϊ1 
//int main()
//{
//	int a=3;
//	// 00000000000000000000000000000011
//	int b= -5;
//	//100000000000000000000000000000101
//	//λ������
//	//int c=a^b;
//	printf("jiaohuanǰ a=%d b=%d\n",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	//���֧�ֽ�����
//
//	printf("jiaohuanhou a=%d b=%d\n",a,b);
//	//printf("c=%d\n",c);
//	return 0;
//}
//��д���룺��һ�������洢���ڴ��ж�����1�ĸ���
//
//int a=3;
//00000000000000000000000000000011
//>>
//int main()
//{
//	int a=3;
//	int b=0;
//	int count =0;
//	while(count<32)
//	{	
//		if((a&1)==0)
//		{
//			b++;
//		}
//	a=a>>1;
//	count++;
//	}
//		printf("1�ĸ���Ϊ%d\n",b);
//	return 0;
//}
//int main()
//{
//	int a =0;
//	return 0;
//}
//int main()
//{
//	int a=3;
//	a=a+5;
//	a+=5;
//	a=a>>1;
//	a>>=1;
//	return 0;
//}
//int main()
//{
//	//int flag=3;
//	////flagΪ�����if
//	//if(flag)
//	//{}
//	////flagΪ�ٽ���if
//	//if(!flag)
//	//{}
//	int a =10;
//	int* p=&a;//p����ָ�����
//	printf("%p\n",&a);//�������ڴ��е���ʼ��ַ
//	printf("%d\n",*p);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	//sizeof��һ��������
//	//�����������/������ռ�ڴ�ռ�Ĵ�С
//	//�������ʹ����ı���ռ�ݵĿռ�Ĵ�С-
//	int n=sizeof(a);
//	printf("n=%d\n",n);
//	return 0;
//}
//int main()
//{
//	//int a=0;
//	//~�ǰ�����λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	int a=3;
//	printf("%d\n",~a);
//	return 0;
//}
//int main()
//{
//	//int a=3;
//	////int b=++a;//ǰ��++����++����ʹ��
//	////a=a+1,b=a
//	//int b=a++;//����++����ʹ�ú�++
//	////b=a,a=a+1
//	//printf("%d\n",a);
//	//printf("%d\n",b);
//	int a=3;
//	int b=--a;
//	//a=a-1,b=a
//	b=a--;
//	//b=a a=a-1
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}
//int main()
//{
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//	}
//	for(i=0;i<10;++i)
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	int a=10;
//	int* p=&a;
//	*p;//��p������
//	return 0;
//}
//int main()
//{
//	int a=(int)3.14;
//	printf("%d\n",a);
//	return 0;
//}
//sizeof�ǲ����������Ǻ���//�����ڵ��õ�ʱ����棨������ʡ��
//strlen�ǿ⺯�������������ַ�������
//int main()
//{
//	if(3==5)
//	{
//	}
//	if("abc"=="abcdef")//����д���ڱȽ������ַ���������ĸ�ĵ�ַ
//	{}
//}
//�����ַ����Ƚ���strcmp
//int main()
//{
//	int a=3;
//	int b=0;
//	int c=a&&b; //����//��עa��b�����//ȫ��Ϊ��һ��Ϊ��
//	int d=a||b;//����
//	printf("%d\n",d);
//	/*if(a&&b)
//	{
//
//	}*/
//	return 0;
//}
//1.�ܱ����������Ҳ���100����
//2.�ܱ�400����
//void is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	{
//		printf("run");
//	}
//	else
//	{
//		printf("no");
//	}
//}
//int main()
//{
//	int y=0;
//	printf("����Ҫ������\n");
//	scanf("%d\n",&y);
//	is_leap_year(y);
//	return 0;
//}

//&&���Ϊ�٣��ұ߲�����
// ||���Ϊ�棬�ұ߾Ͳ�����
//int main()
//{
//	int i=0,a=1,b=2,c=3,d=4;
//	//i=a++ && ++b && d++;
//	i=a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
//	return 0;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	(a>5 )?( b=3): (b=-3);
//	b=(a>5? 3:-3);
//	return 0;
//}
//int main()
//{
//	int arr[10]={0};
//	arr[7]=8;  //---->*(arr+7)------*(7+arr)����--->7[arr]
//			   //---->arr��������Ԫ�صĵ�ַ
//	           //----->arr+7�����������߸�Ԫ�أ�ָ���˵ڰ˸�Ԫ��
//	          //----->*(arr+7)���ǵڰ˸�Ԫ��
//				//
//	7[arr]=9;
//	return 0;
//}
//int Add(int x,int y )
//{
//	return x+y;
//}
//int main()
//{  
//	int a=10;
//	int b=20;
//	int c=Add(a,b);//() ���Ǻ������ò�����,��������Add��a��b
//	//���ں������ã�����������һ��
//	//sizeof a;
//
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ps)
//{
//	/*(*ps).age=20;
//	strcpy((*ps).name,"zhangsan");
//	(*ps).score=100.0;*/
//	strcpy(ps->name,"zhangsan");  
//	ps->age=20;
//	ps->score=100.0;
//}
//void printf_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n",ss.name,ss.age,ss.score);
//
//}
//
//int main()
//{
//	struct Stu s={0};
//	set_stu(&s);
//	printf_stu(s);
//	
//} 