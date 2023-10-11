//BC84 计算y的值
//
//描述
//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。 
//
//输入描述：
//一行，输入一个整数x。（ - 10000 < x < 10000）
//	输出描述：
//	一行，输出y的值。

#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a < 0)
    {
        printf("1\n");
    }
    else if (a == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}