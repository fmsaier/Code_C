#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//int main()
//{
//	char ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//}


int main()
{
	char ch[] = "sas";
	int len = strlen(ch);
	int sz = sizeof(ch);
	printf("%d\n", len);
	printf("%d\n", sz);
	scanf("%s", ch);
	Sleep(2000);
	//system("cls");//system执行系统命令，cls清理屏幕
	return 0;
}