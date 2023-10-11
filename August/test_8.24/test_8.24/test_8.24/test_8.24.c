#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 10;
//	for (int i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	ps = ptr;
//	ps->n = 20;
//	for (int i = 0; i < 20; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	free(ps);
//	ps = NULL;
//	//FILE* pf = fopen(".\\x64\\test.txt", "w");//本级目录之后
//	//FILE* pf = fopen("..\\x64\\test.txt", "w");上级目录之后
//	FILE* pf = fopen(".\\test.txt", "w");//本级目录
//	//FILE* pf = fopen("..\\..\\test.txt", "w");//上上级目录
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//		fputc('a' + i, stdout);
//	}
//	fclose(pf);
//	pf = NULL;
//	printf("\n");
//	FILE* pf2 = fopen(".\\test.txt", "r");
//	if (pf2 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		fputc(fgetc(pf2), stdout);
//	}
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}

int Add(int, int);

int main()
{
	FILE* pf = fopen(".\\test.txt", "a");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	int a = 100;
	fputs("hello world", pf);
	fputs("hello world", stdout);
	fscanf(stdin, "%d", &a);
	fprintf(pf, "%d\n", a);
	fprintf(stdout, "%d\n", a);
	fclose(pf);
	pf = NULL;
	int c = Add(3, 5);
	return 0;
}