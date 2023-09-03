#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i= 0; i < 10; i++);
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;
//		//EXIT_SUCCESS
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s,line=%d date=%s time=%s %d\n",
//			__FILE__,
//			__LINE__,
//			__DATE__,
//			__TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//²»×ñÑ­ANSI C
//	return 0;
//}

#define MAX 1000

int main()
{
	int m = MAX;
	printf("%d\n", MAX); 
	return 0;
}