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
	//s1.ch = "an"; err ��ʼ�����ٸ�ֵ��Ҫ��ÿ��Ԫ�ؽ��е����ı�
	//��ʼʱ����char arr[5]="as"�����帳ֵ���º�ı�ֻ��һ��һ��Ԫ�ظı�
	//�ַ��������strcpy,���������ֻ�ܶ�ÿ��Ԫ��
	strcpy(s1.ch, "aa");
	s1.arr[2] = 5;
    //test(&s1);
	int arr1[] = { 0,1,2,3,4 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 2,3,4,5,6 };
	//ָ������
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