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
//	//���ļ�
//	int ch=fgetc(pf);
//	printf("%c\n", ch);
//	/*char i = 0;
//	for (i = 'a';i<='z';i++)
//	{
//		fputc(i, pf);
//	}*/ //д
//	while (ch=fgetc(pf) != EOF)
//	{
//		printf("%c\n ", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//дһ������
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//��һ������
//	char arr[20];
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//	/*fputs("hello bit\n", pf);
//	fputs("hello bit\n",pf);*/
//
//	//�ر��ļ�
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
//	//�Զ����Ƶ���ʽд���ļ�
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//�����Ƶķ�ʽд
//	//fwrite(&s, sizeof(struct S), 1, pf); 
//	//�����Ƶķ�ʽ��
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
	//��s�еĸ�ʽ������ת��Ϊ�ַ����ŵ�buf��
	sprintf(buf,"%s %d %f", s.arr, s.age, s.score);
	printf("�ַ���: %s\n",buf);
	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf,"%s %d %f", tmp.arr , &(tmp.age), &(tmp.score));
	printf("��ʽ���� %s %d %f ", tmp.arr, tmp.age, tmp.score);
	return 0;
}