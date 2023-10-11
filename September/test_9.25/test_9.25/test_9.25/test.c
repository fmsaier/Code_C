#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//#define COL 5
//#define ROW 5
//杨氏矩阵
//
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
//int Search(int(*a)[COL], int row, int col, int x)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (a[i][col - 1] >= x)
//		{
//			break;
//		}
//	}
//	for (int j = col - 1; j >= 0; j--)
//	{
//		if (a[i][j] == x)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a[][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,6,7,8} };
//	printf("%d ", Search(a, 3, 5, 8));
//	return 0;
//}




//字符串左旋
//
//实现一个函数，可以左旋字符串中的k个字符。
//
//例如：
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB
void Reversal(char* s, int n)
{
	char* tail = s + n;
	char tmp;
	while (s < tail)
	{
		tmp = *s;
		*s = *tail;
		*tail = tmp;
		s++;
		tail--;
	}
}
void ReverK(char* s, int n, int k)
{
	k = k % n;
	Reversal(s, n - 1);
	Reversal(s, n - k - 1);
	Reversal(s + n - k, k - 1);
}
//int main()
//{
//	char s[] = "abcd";
//	ReverK(s, 4, 3);
//	printf("%s", s);
//	return 0;
//}




//字符串旋转结果
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//int isRever(char* s1, char* s2, int n)
//{
//	int count = n;
//	while (count--)
//	{
//		ReverK(s2, n, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "abcde";
//	char s2[] = "cdeab";
//	printf("%d ", isRever(s1, s2, 5));
//	return 0;
//}




//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}




//找单身狗
//
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//
//编写一个函数找出这两个只出现一次的数字。
//
//例如：
//
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//
//只有5和6只出现1次，要找出5和6.
#define INT_PTR int*
typedef int* int_ptr;
int main()
{

	INT_PTR a, b;
	int_ptr c, d;
	return 0;
}