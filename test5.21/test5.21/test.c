#include<stdio.h>
#include<string.h>
//& -按（2进制）位与
//| -按（2进制）位或
//^ -按（2进制）位异或 -相同为0相异为1 
//int main()
//{
//	int a=3;
//	// 00000000000000000000000000000011
//	int b= -5;
//	//100000000000000000000000000000101
//	//位操作符
//	//int c=a^b;
//	printf("jiaohuan前 a=%d b=%d\n",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	//异或支持交换律
//
//	printf("jiaohuanhou a=%d b=%d\n",a,b);
//	//printf("c=%d\n",c);
//	return 0;
//}
//编写代码：求一个整数存储在内存中二进制1的个数
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
//		printf("1的个数为%d\n",b);
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
//	////flag为真进入if
//	//if(flag)
//	//{}
//	////flag为假进入if
//	//if(!flag)
//	//{}
//	int a =10;
//	int* p=&a;//p就是指针变量
//	printf("%p\n",&a);//变量在内存中的起始地址
//	printf("%d\n",*p);
//	return 0;
//}
//int main()
//{
//	int a=10;
//	//sizeof是一个操作符
//	//计算的是类型/变量所占内存空间的大小
//	//计算类型创建的变量占据的空间的大小-
//	int n=sizeof(a);
//	printf("n=%d\n",n);
//	return 0;
//}
//int main()
//{
//	//int a=0;
//	//~是按二进位取反
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
//	////int b=++a;//前置++，先++，后使用
//	////a=a+1,b=a
//	//int b=a++;//后置++，先使用后++
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
//	*p;//对p解引用
//	return 0;
//}
//int main()
//{
//	int a=(int)3.14;
//	printf("%d\n",a);
//	return 0;
//}
//sizeof是操作符，不是函数//函数在调用的时候后面（）不能省略
//strlen是库函数，是用来求字符串长度
//int main()
//{
//	if(3==5)
//	{
//	}
//	if("abc"=="abcdef")//这样写是在比较两个字符串的首字母的地址
//	{}
//}
//两个字符串比较用strcmp
//int main()
//{
//	int a=3;
//	int b=0;
//	int c=a&&b; //并且//关注a和b的真假//全真为真一假为假
//	int d=a||b;//或者
//	printf("%d\n",d);
//	/*if(a&&b)
//	{
//
//	}*/
//	return 0;
//}
//1.能被四整除并且不被100整除
//2.能被400整除
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
//	printf("输入要查的年份\n");
//	scanf("%d\n",&y);
//	is_leap_year(y);
//	return 0;
//}

//&&左边为假，右边不计算
// ||左边为真，右边就不计算
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
//	arr[7]=8;  //---->*(arr+7)------*(7+arr)成立--->7[arr]
//			   //---->arr是数组首元素的地址
//	           //----->arr+7就是跳过了七个元素，指向了第八个元素
//	          //----->*(arr+7)就是第八个元素
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
//	int c=Add(a,b);//() 就是函数调用操作符,操作数是Add，a，b
//	//对于函数调用，操作数至少一个
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