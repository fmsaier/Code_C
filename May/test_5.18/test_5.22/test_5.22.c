//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
#include<stdio.h>

void Sort(int* a, int sz)
{
	int* tail = a;
	int tmp = 0;
	for (int i = 0; i < sz; i++)
	{
		tail++;
	}
	while (a < tail)
	{
		while (*a % 2 == 1)
		{
			a++;
		}
		while (*tail % 2 == 0)
		{
			tail--;
		}
		if (a < tail)
		{
			tmp = *a;
			*a = *tail;
			*tail = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}