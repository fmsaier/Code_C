﻿#define _CRT_SECURE_NO_WARNINGS 1
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
int main()
{
	for (int a = 1; a <= 5; a++)
	{
		for (int b = 1; b <= 5; b++)
		{
			for (int c = 1; c <= 5; c++)
			{
				for (int d = 1; d <= 5; d++)
				{
					for (int e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)) == 1 &&
							((b == 2) + (e == 4)) == 1 &&
							((c == 1) + (d == 2)) == 1 &&
							((c == 5) + (d == 3)) == 1 &&
							((e == 4) + (a == 1)) == 1)
						{
							if (a * b * c * d * e == 120)           
								printf("  a=%d\n  b=%d\n  c=%d\n  d=%d\n  e=%d\n",a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}

