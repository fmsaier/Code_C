#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	//指针数组
//	int arr1[] = { 0,1,2,3,4 };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[] = { 2,3,4,5,6 };
//	int* arr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void Print(int(*p)[5], int row, int col)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//		}
//}
//void test(int arr[][5])
//{
//}
//void test(int(*arr)[5])
//{
//}
//void test0(int* arr[])
//{
//}
//void test0(int** arr)
//{
//}
//int main()
//{
//	//数组指针
//	int arr[3][5] = { 0,1,2,3,4,1,2,3,4,5,2,3,4,5,6 };
//	Print(arr,3,5);
//	test(arr);
//	int* arr0[] = { 0 };
//	test0(arr0);
//	char ch[3][10] = { "hello","world","print" };
//	char* pc = "aaa";
//  	return 0;
//}

typedef int(*arr_t)[5];

typedef void(*pf_t)(int);

void (*signal1(int, void(*)(int)))(int);
pf_t signal2(int, pf_t);

int (*signal3(int, void(*)(int)))[5];
arr_t signal4(int, pf_t);

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void Print(const int* arr,const int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void my_sort(const void* arr, const int numsize, const int bitsize, int(*cmp)(const void* p1, const void* p2))
{
	const void* p1 = arr;
	const void* p2 = (char*)arr + bitsize;
	char tmp;
	for (int i = 0; i < numsize - 1; i++)
	{
		for (int j = 0; j < numsize - 1 - i; j++)
		{
			p1 = (char*)arr + j * bitsize;
			p2 = (char*)arr + (j + 1) * bitsize;
			if (cmp(p1, p2) > 0)
			{
				for (int k = 0; k < bitsize; k++)
				{
					tmp = *((char*)p1 + k);
					*((char*)p1 + k) = *((char*)p2 + k);
					*((char*)p2 + k) = tmp;
				}
			}
		}
	}
}
void test()
{
	int arr[] = { 4,6,82,14,3,4,1,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_sort(arr, sz, sizeof(int), cmp_int);
	Print(arr, sz);
}
int Add(const int x,const int y)
{
	return x + y;
}
int main()
{
	//函数指针
	int (*pf1)(int, int) = &Add;
	int x = (*pf1)(3, 5);

	int (*pf2)(int, int) = Add;
	int y = pf2(3, 5);

	/*(*(void (*)())0)();
	((void (*)())0)();*/

	//二级函数指针
	//int(**pf)() = &pf1;
	// 函数指针数组指针
	//int (*(*pf)[4])()

	//函数指针数组
	int(*pfArr[4])(int, int) = { Add };

	pf_t pf0;
	test();

	return 0;
}