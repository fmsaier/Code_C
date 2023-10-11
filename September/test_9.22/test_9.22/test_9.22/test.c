#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//交换两个变量（不创建临时变量）
//
//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}



//JZ15 二进制中1的个数

//描述
//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//int NumberOf1(int n) {
//    // write code here
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((n & (1 << i)) != 0)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    printf("%d", NumberOf1(1));
//    return 0;
//}




//打印整数二进制的奇数位和偶数位
//
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 32; i+=2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i += 2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	for (int i = 1; i < 32; i++)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("1 ");
//		else
//			printf("0 ");
//	}
//	printf("\n");
//}







//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((a & (1 << i)) != (b & (1 << i)))
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}



//杨氏矩阵
//
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
int main()
{

	return 0;
}