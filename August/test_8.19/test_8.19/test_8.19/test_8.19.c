#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//};
//int main()
//{
//	//int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));//a[]
//	//printf("%d\n", sizeof(a + 0));//int*
//	//printf("%d\n", sizeof(*a));//int
//	//printf("%d\n", sizeof(a + 1));//int*
//	//printf("%d\n", sizeof(a[1]));//int
//	//printf("%d\n", sizeof(&a));//int(*)[]
//	//printf("%d\n", sizeof(*&a));//a[]
//	//printf("%d\n", sizeof(&a + 1));//int(*)[]
//	//printf("%d\n", sizeof(&a[0]));//int*
//	//printf("%d\n", sizeof(&a[0] + 1));//int*
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//char[]
//	//printf("%d\n", sizeof(arr + 0));//char*
//	//printf("%d\n", sizeof(*arr));//char
//	//printf("%d\n", sizeof(arr[1]));//char
//	//printf("%d\n", sizeof(&arr));//char(*)[]
//	//printf("%d\n", sizeof(&arr + 1));//char(*)[]
//	//printf("%d\n", sizeof(&arr[0] + 1));//char*
//
//	/*printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));*/
//
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//char[]
//	printf("%d\n", sizeof(arr + 0));//char*
//	printf("%d\n", sizeof(*arr));//char
//	printf("%d\n", sizeof(arr[1]));//char
//	printf("%d\n", sizeof(&arr));//char(*)[]
//	printf("%d\n", sizeof(&arr + 1));//char(*)[]
//	printf("%d\n", sizeof(&arr[0] + 1));//char*
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//char*
//	//printf("%d\n", sizeof(p + 1));//char*
//	//printf("%d\n", sizeof(*p));//char
//	//printf("%d\n", sizeof(p[0]));//char
//	//printf("%d\n", sizeof(&p));//char**
//	//printf("%d\n", sizeof(&p + 1));//char**
//	//printf("%d\n", sizeof(&p[0] + 1));//char*
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//a[][]
//	printf("%d\n", sizeof(a[0][0]));//int
//	printf("%d\n", sizeof(a[0]));//a[]
//	printf("%d\n", sizeof(a[0] + 1));//int*
//	printf("%d\n", sizeof(*(a[0] + 1)));//int
//	printf("%d\n", sizeof(a + 1));//int(*)[]
//	printf("%d\n", sizeof(*(a + 1)));//a[]
//	printf("%d\n", sizeof(&a[0] + 1));//int(*)[]
//	printf("%d\n", sizeof(*(&a[0] + 1)));//a[]
//	printf("%d\n", sizeof(*a));//a[]
//	printf("%d\n", sizeof(a[3]));//a[]
//
//	int b = 0;
//	printf("%p\n", b);//以地址的形式把值打印出来
//
//	
//	//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//	//已知，结构体Test类型的变量大小是20个字节
//	struct Test* p = (struct Test*)0x100000;
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//4
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}