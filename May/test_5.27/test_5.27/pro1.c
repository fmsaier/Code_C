#define _CRT_SECURE_NO_WARNINGS 1
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的X形图案。
//输入描述：
//多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输出描述：
//针对每行输入，输出用“ * ”组成的X形图案。
#include <stdio.h>
int main()
{
	int input = 0;
	while (~scanf("%d", &input))
	{
		if (input >= 2 && input <= 20)
		{
			if (input % 2 == 1)
			{
				for (int i = 0; i < (input + 1) / 2; i++)
				{
					for (int k = 0; k < i; k++)
					{
						printf(" ");
					}
					printf("*");
					for (int j = 0; j < input - 2 * (i + 1); j++)
					{
						printf(" ");
					}
					if (i < (input + 1) / 2 - 1)
					{
						printf("*\n");
					}
					else
						printf("\n");
				}
				for (int i = 0; i < (input + 1) / 2 - 1; i++)
				{
					for (int k = 0; k < (input / 2) - i - 1; k++)
					{
						printf(" ");
					}
					printf("*");
					for (int j = 0; j < 2 * (i + 1) - 1; j++)
					{
						printf(" ");
					}
					printf("*\n");
				}
			}
			else if (input % 2 == 0)
			{
				for (int i = 0; i < input / 2; i++)
				{
					for (int k = 0; k < i; k++)
					{
						printf(" ");
					}
					printf("*");
					for (int j = 0; j < input - 2 * (i + 1); j++)
					{
						printf(" ");
					}
					printf("*\n");
				}
				for (int i = 0; i < input / 2; i++)
				{
					for (int k = 0; k < (input / 2) - i - 1; k++)
					{
						printf(" ");
					}
					printf("*");
					for (int j = 0; j < 2 * i; j++)
					{
						printf(" ");
					}
					printf("*\n");
				}
			}
		}
	}
	
	return 0;
}