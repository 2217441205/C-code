#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//strcmp--> >0  ==0 <0
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	//strcmp--> >0  ==0 <0
	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是排好序的
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
void test2()
{
	struct stu s[] = { {"zhangsan",15},{"lisa",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s,sz, sizeof(s[0]),cmp_stu_by_name );
	qsort(s,sz, sizeof(s[0]),cmp_stu_by_age );
}  

int main()
{
	test2();
	return 0;
}