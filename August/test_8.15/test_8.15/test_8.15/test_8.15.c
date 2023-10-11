#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
typedef struct Stu
{
	int arr[5];
	char ch[5];
}Stu;

void test(Stu* p)
{

}

int main()
{
	Stu s1 = { {1,2},"ab"};
	//s1.ch = "an"; err 初始化后再赋值需要动每个元素进行单独改变
	//开始时定义char arr[5]="as"是整体赋值，事后改变只能一个一个元素改变
	//字符数组可以strcpy,整型数组就只能动每个元素
	strcpy(s1.ch, "aa");
	s1.arr[2] = 5;
    //test(&s1);
	int arr1[] = { 0,1,2,3,4 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 2,3,4,5,6 };
	//指针数组
	int* arr[] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}