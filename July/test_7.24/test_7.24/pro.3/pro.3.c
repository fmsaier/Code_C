#define _CRT_SECURE_NO_WARNINGS 1
//BC23 时间转换
//
//描述
//给定秒数 seconds ，把秒转化成小时、分钟和秒。
//
//数据范围： 0 < seconds < 100000000\0 < seconds < 100000000
//	输入描述：
//	一行，包括一个整数，即给定的秒数。
//	输出描述：
//	一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。

#include <stdio.h>
int main() {
    int a;
    int x = 0, y = 0, z = 0;
    scanf("%d", &a);
    x = a / 3600;
    y = (a - 3600 * x) / 60;
    z = (a - 3600 * x - 60 * y);
    printf("%d %d %d", x, y, z);
    return 0;
}