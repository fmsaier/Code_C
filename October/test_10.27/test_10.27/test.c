#include <stdio.h>

//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}



//int main()
//{
//	
//	int arr1[4] = { 0,1,2,3 };
//	int arr2[4] = { 1,2,3,4 };
//	int arr3[4] = { 2,3,4,5 };
//	int* arr[3] = { arr1, arr2, arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    printf("arr = %p\n", arr);
//    printf("&arr= %p\n", &arr);
//    printf("arr+1 = %p\n", arr + 1);
//    printf("&arr+1= %p\n", &arr + 1);
//    return 0;
//}


//#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void(*pf)() = test;
//	return 0;
//}

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main()
{
    int x, y;
    int input = 1;
    int ret = 0;
    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
    while (input)
    {
        printf("*************************\n");
        printf(" 1:add 2:sub \n");
        printf(" 3:mul 4:div \n");
        printf("*************************\n");
        printf("请选择：");
        scanf("%d", &input);
        if ((input <= 4 && input >= 1))
        {
            printf("输入操作数：");
            scanf("%d %d", &x, &y);
            ret = (*p[input])(x, y);
        }
        else
            printf("输入有误\n");
        printf("ret = %d\n", ret);
    }
    return 0;
}