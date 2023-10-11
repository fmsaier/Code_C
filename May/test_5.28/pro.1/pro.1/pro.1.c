#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上打印杨辉三角。
//
//1
//
//1 1
//
//1 2 1
//
//1 3 3 1
//
//……
#include<stdio.h>
void print(int n)
{
    int form[20][20] = { 0 };
    int i, j;
    for (i = 0; i < n; i++)
    {
        form[i][0] = 1;
        for (j = 1; j <= i; j++)
        {
            form[i][j] = form[i - 1][j] + form[i - 1][j - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", form[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    print(4);
    return 0;
}