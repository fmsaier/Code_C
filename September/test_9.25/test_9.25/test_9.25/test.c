#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//#define COL 5
//#define ROW 5
//���Ͼ���
//
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
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




//�ַ�������
//
//ʵ��һ�����������������ַ����е�k���ַ���
//
//���磺
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB
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




//�ַ�����ת���
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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




//�ҵ���
//
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//
//���磺
//
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.
#define INT_PTR int*
typedef int* int_ptr;
int main()
{

	INT_PTR a, b;
	int_ptr c, d;
	return 0;
}