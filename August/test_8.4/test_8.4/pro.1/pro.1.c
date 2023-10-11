#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//计算斐波那契数
//
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1

//int Fun(int x)
//{
//	if (x == 1 || x == 2)
//		return 1;
//	else
//		return Fun(x - 1) + Fun(x - 2);
//}
//int Fun(int x)
//{
//	int a = 1, b = 1, c, tmp;
//	if (x == 1 || x == 2)
//		return 1;
//	else
//	{
//		for (int i = 3; i <= x; i++)
//		{
//			c = a + b;
//			tmp = b;
//			b = c;
//			a = tmp;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	input = Fun(input);
//	printf("%d", input);
//	return 0;
//}







//递归实现n的k次方
//
//编写一个函数实现n的k次方，使用递归实现。

//int Fun(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k == 1)
//		return n;
//	else
//		return n * Fun(n, k - 1);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n,&k);
//	n = Fun(n,k);
//	printf("%d", n);
//	return 0;
//}






//计算一个数的每位之和（递归实现）
//
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return DigitSum(n / 10) + n % 10;// 前n-1位之和+第n位
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	input = DigitSum(input);
//	printf("%d", input);
//	return 0;
//}







//字符串逆序（递归实现）
//
//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//逆序之后数组的内容变成：fedcba

//int strlen(char* arr) 
//{
//	int len = 0;
//	while (*arr++ != '\0') {
//		len++;
//	}
//	return len;
//}
//
//void reverse(char* str) 
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1) 
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}







//strlen的模拟（递归实现）
//
//递归和非递归分别实现strlen

//int Strlen(char* arr)
//{
//	char* tail = arr;
//	int count = 0;
//	while (*tail)
//	{
//		count++;
//		tail++;
//	}
//	return count;
//}
//int Strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//	{
//		return 1 + Strlen(arr + 1);
//	}
//}
//int main()
//{
//	char arr[] = "acva";
//	int len = 0;
//	len = Strlen(arr);
//	printf("%d", len);
//	return 0;
//}







//求阶乘
//
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//int Fun(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		return n * Fun(n - 1);
//	}
//}
//int Fun(int n)
//{
//	int sum = 1;
//	if (n == 0)
//		return 1;
//	while (n >= 1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int a = Fun(input);
//	printf("%d", a);
//	return 0;
//}







//打印一个数的每一位
//
//递归方式实现打印一个整数的每一位

//void Print(int n)
//{
//	if (n < 9)
//		printf("%d\t", n);
//	else
//	{
//		printf("%d\t", n % 10);
//		return Print(n / 10);
//	}
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	Print(input);
//	return 0;
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	int a = sizeof(acX);//8
//	int b = sizeof(acY);//7
//	printf("%d %d", a, b);
//	return 0;
//}








//【一维数组】交换数组
//
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//void exchange(int* a, int* b, int numsize)
//{
//	int tmp = 0;
//	for (int i = 0; i < numsize; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//int main()
//{
//	int a[5] = { 1,6,8.6,9 };
//	int b[5] = { 6,9,8,4,3 };
//	exchange(a, b, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d %d\n", a[i], b[i]);
//	}
//	return 0;
//}







//使用函数实现数组操作
//
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//void init(int* a,int numsize)
//{
//	for (int i = 0; i < numsize; i++)
//	{
//		a[i] = 0;
//	}
//}
//void print(int* a, int numsize)
//{
//	for (int i = 0; i < numsize; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int* a, int numsize)
//{
//	int low = 0, high = numsize - 1, tmp = 0;
//	while (low <= high)
//	{
//		tmp = a[low];
//		a[low] = a[high];
//		a[high] = tmp;
//		high--;
//		low++;
//	}
//}
//int main()
//{
//	int a[] = { 1,2,13,46,481,45 };
//	print(a, 6);
//	reverse(a, 6);
//	print(a, 6);
//	init(a, 6);
//	print(a, 6);
//	return 0;
//}







//冒泡排序
//
//实现一个对整形数组的冒泡排序

//void BubbleSort(int* a, int numsize)
//{
//	int tmp = 0;
//	for (int i = 0; i < numsize; i++)
//	{
//		for (int j = 0; j < numsize - i - 1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 45,4612,12,48,31,4 };
//	print(a, 6);
//	BubbleSort(a, 6);
//	print(a, 6);
//	return 0;
//}


//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}






//BC100 有序序列合并
//
//描述
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000  ， 序列中的值满足 0 \le val \le 30000 \0≤val≤30000
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。

//void Sort(int* a, int n, int* b, int m)
//{
//    int* c = (int*)malloc(sizeof(int) * (m + n));
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m)
//    {
//        if (a[i] < b[j])
//        {
//            c[k++] = a[i++];
//        }
//        else
//        {
//            c[k++] = b[j++];
//        }
//
//    }
//    if (j == m)//看谁先录完，不是谁比谁小
//    {
//        while (i < n)
//        {
//            c[k++] = a[i++];
//        }
//    }
//    else
//    {
//        while (j < m)
//        {
//            c[k++] = b[j++];
//        }
//    }
//    for (int i = 0; i < m + n; i++)
//    {
//        printf("%d ", c[i]);
//    }
//
//}
//int main() 
// {
//    int m, n;
//    scanf("%d%d", &n, &m);
//    int* a = (int*)malloc(sizeof(int) * n);
//    int* b = (int*)malloc(sizeof(int) * m);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &b[i]);
//    }
//    Sort(a, n, b, m);
//    return 0;
//}







//BC96 有序序列判断
//
//描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//
//数据范围： 3 \le n \le 50 \3≤n≤50  序列中的值都满足 1 \le val \le 100 \1≤val≤100
//输入描述：
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述：
//输出为一行，如果序列有序输出sorted，否则输出unsorted。

//int main() 
//{
//    int numsize;
//    scanf("%d", &numsize);
//    int* a = (int*)malloc(sizeof(int) * numsize);
//    for (int i = 0; i < numsize; i++) 
//    {
//        scanf("%d", &a[i]);
//    }
//    if (a[0] <= a[1]) 
//    {
//        int i = 0;
//        while (a[i] <= a[i + 1] && i < numsize - 1) 
//        {
//            i++;
//        }
//        if (i == numsize - 1)
//            printf("sorted");
//        else
//            printf("unsorted");
//    }
//    else if (a[0] >= a[1]) 
//    {
//        int i = 0;
//        while (a[i] >= a[i + 1] && i < numsize - 1) 
//        {
//            i++;
//        }
//        if (i == numsize - 1)
//            printf("sorted");
//        else
//            printf("unsorted");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}



//int main()
//{
//	char ch[3] = "里";//一个汉字两个字符
//	printf("%s", ch);
//	return 0;
//}





#include <stdio.h>
//void test()
//{
//	//static修饰局部变量，改变生命周期，但只有在函数里面才有用
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//跟局部变量同名但不是同一个
//	{
//		test();
//	}
//	return 0;
//}


//int main()
//{
//	int ret = printf("你好");
//	printf("\n");
//	printf("%d", ret);
//	return 0;
//}


int main()
{
	double a=3.144612313434;
	float b = 3.144612313434f;
	int c = 2;
	printf("%lf\n", a);
	printf("%.7f\n", b);
	printf("%3d\n", c);
	printf("%03d", c);
	return 0;
}