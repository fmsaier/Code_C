#define _CRT_SECURE_NO_WARNINGS 1
//BC113 小乐乐定闹钟
//
//描述
//小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
//
//输入描述：
//输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
//
//输入格式：hour : minute k(如hour或minute的值为1，输入为1，而不是01)
//
//(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
//
//输出描述：
//对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。

//#include <stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%d:%d %d", &a, &b, &c);
//    a += c / 60;
//    b += c - (c / 60) * 60;
//    a += b / 60;
//    b %= 60;
//    a %= 24;
//    printf("%02d:%02d", a, b);
//    return 0;
//}




//BC16 字符转ASCII码
//
//描述
//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。
//输入描述：
//一行，一个字符。
//输出描述：
//一行，输出输入字符对应的ASCII码。

//#include <stdio.h>
//int main() {
//    char ch;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//赋值不是判等
//			printf("%d ", i);
//	}
//	return 0;
//}





//打印3的倍数的数
//
//写一个代码打印1 - 100之间所有3的倍数的数字

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//从大到小输出
//
//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1

//#include <stdio.h>
//int main()
//{
//	int a[3],tmp;
//	scanf("%d %d %d", &a[0], &a[1], &a[2]);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2-i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}




//打印素数
//
//写一个代码：打印100~200之间的素数

//#include <stdio.h>
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int k = 0;
//		for (int j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				k++;
//				break;
//			}
//		}
//		if (k == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}





//打印闰年
//
//打印1000年到2000年之间的闰年

//#include <stdio.h>
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}





//最大公约数
//
//给定两个数，求这两个数的最大公约数
//
//输入：20 40
//
//输出：20

#include <stdio.h>
int main()
{
	int a, b,tmp;
	scanf("%d %d", &a, &b);
	if (a < b);//a>=b
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	while (a % b != 0)
	{
		a = a % b;//余数
		if (a < b);//a>=b
		{
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	printf("%d", b);
	return 0;
}