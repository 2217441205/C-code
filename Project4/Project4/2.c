#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	FILE* pf= fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	int ch=fgetc(pf);
//	printf("%c\n", ch);
//	/*char i = 0;
//	for (i = 'a';i<='z';i++)
//	{
//		fputc(i, pf);
//	}*/ //写
//	while (ch=fgetc(pf) != EOF)
//	{
//		printf("%c\n ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写一行数据
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读一行数据
//	char arr[20];
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//	/*fputs("hello bit\n", pf);
//	fputs("hello bit\n",pf);*/
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10]; 
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	/*fprintf(pf, "%s %d %f", s.arr, s.age, s.score);*/
//	fscanf(pf,"%s %d %f",s.arr,&(s.age),&(s.score));
//	fprintf(stdout,"%s %d %f", s.arr, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE*pf= fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf,"%s %d %f",s.arr,s.age,s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//	{
//		char arr[10]; 
//		int age;
//		float score;
//	};
//
//int main()
//{
//	struct S s = { "zhangsan",15,50.5f };
//	//以二进制的形式写到文件
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//二进制的方式写
//	//fwrite(&s, sizeof(struct S), 1, pf); 
//	//二进制的方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n",s.arr,s.age,s.score);
//	fclose(pf); 
//	pf = NULL;
//	return 0;
//}

struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	struct S s = { "zhangsan",20,55.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	//把s中的格式化数据转化为字符串放到buf中
	sprintf(buf,"%s %d %f", s.arr, s.age, s.score);
	printf("字符串: %s\n",buf);
	//从字符串buf中获取一个格式化的数据到tmp中
	sscanf(buf,"%s %d %f", tmp.arr , &(tmp.age), &(tmp.score));
	printf("格式化； %s %d %f ", tmp.arr, tmp.age, tmp.score);
	return 0;
}