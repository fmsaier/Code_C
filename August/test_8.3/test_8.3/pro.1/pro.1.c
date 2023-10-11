#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//乘法口诀表
//
//在屏幕上输出9 * 9乘法口诀表

//int main()
//{
//	int x;
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			x = i * j;
//			printf("%d * %d = %d\t", i, j, x);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//求最大值
//
//求10 个整数中最大值

//int main()
//{
//	int input[10] = { 0 };
//	int tmp = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &input[i]);//scanf输入多个值必须空格分开不用自己打多此一举
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 - i - 1; j++)
//		{
//			if (input[j] > input[j+1])
//			{
//				tmp = input[j];
//				input[j] = input[j + 1];
//				input[j + 1] = tmp;
//			}
//		}
//	}
//	printf("MAX=%d", input[9]);
//	return 0;
//}








//分数求和
//
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果

//int main()
//{
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1 / (double)i;
//		}
//		else
//		{
//			sum -= 1 /(double) i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}









//数9的个数
//
//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if ( i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}








//二分查找
//
//编写代码在一个整形有序数组中查找具体的某个数
//
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

//int BinarySearch(int* nums,int numsize,int x)
//{
//	int high = numsize - 1, low = 0, middle = numsize / 2;
//	while (low <= high)
//	{
//		if (nums[middle] < x)
//		{
//			low = low + 1;
//		}
//		else if (nums[middle] > x)
//		{
//			high = high - 1;
//		}
//		else 
//			return middle;
//		middle = (low + high) / 2;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[5] = { 6,31,51,463,1512 };
//	int mid = BinarySearch(arr, 5, 1512);
//	printf("%d", mid);
//	return 0;
//}








//猜数字游戏

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int ran = rand();
//	//printf("%d\n", ran);
//	int input;
//	while (scanf("%d",&input)!=EOF)
//	{
//		if (input < ran)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > ran)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("回答正确\n");
//			break;
//		}
//	}
//}







//BC112 小乐乐求和
//
//描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//
//输出描述：
//输出一个值，为求和结果。

//#include <stdio.h>
//int main() {
//    long long sum = 0, input = 0;
//    scanf("%d", &input);
//    for (int i = 0; i <= input; i++)
//    {
//        sum += i;
//    }
//    printf("%ld", sum);
//    return 0;
//}





//BC123 小乐乐找最大数
//
//描述
//小乐乐获得4个最大数，请帮他编程找到最大的数。
//输入描述：
//一行，4个整数，用空格分开。
//输出描述：
//一行，一个整数，为输入的4个整数中最大的整数。

//int main() {
//    int a[4] = { 0 };
//    int tmp = 0;
//    scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
//    for (int i = 0; i < 4; i++)
//    {
//        for (int j = 0; j < 4 - i - 1; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                tmp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = tmp;
//            }
//        }
//    }
//    printf("%d", a[0]);
//    return 0;
//}






//BC47 判断是不是字母
//
//描述
//KiKi想判断输入的字符是不是字母，请帮他编程实现。
//
//输入描述：
//多组输入，每一行输入一个字符。
//输出描述：
//针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。

//int main() {
//    char ch = '0';
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 65 && ch <= 90)
//            printf("%c is an alphabet.\n", ch);
//        else if (ch >= 97 && ch <= 122)
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}






//BC37 网购
//
//描述
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
//
//数据范围：衣服价格满足 1 \le val \le 100000 \1≤val≤100000
//输入描述：
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
//输出描述：
//一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）

//int main() {
//    float money = 0;
//    int mon, day, isdis;
//    scanf("%f%d%d%d", &money, &mon, &day, &isdis);
//    if (mon == 11)
//    {
//        money = money * 0.7;
//    }
//    if (mon == 12)
//    {
//        money = money * 0.8;
//    }
//    if (isdis == 1)
//    {
//        money = money - 50;
//    }
//    if (money < 0)
//    {
//        money = 0;
//    }
//    printf("%0.2f", money);
//    return 0;
//}






//乘法口诀表
//
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

void Mix(int input)
{
	int x;
	for (int i = 1; i <= input; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			x = i * j;
			printf("%d * %d = %d\t", i, j, x);
		}
		printf("\n");
	}
}
int main()
{
	int input;
	scanf("%d", &input);
	Mix(input);
	return 0;
}







//交换两个整数
//
//实现一个函数来交换两个整数的内容。

//void Exchange(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	Exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}







//函数判断闰年
//
//实现函数判断year是不是润年。

//int runnian(int year)
//{
//	if (year % 100 != 0 && year % 4 == 0)
//	{
//		return 1;
//	}
//	if (year % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (runnian(year) == 1)
//	{
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d年不是闰年", year);
//	}
//	return 0;
//}






//函数判断素数
//
//实现一个函数is_prime，判断一个数是不是素数。
//
//利用上面实现的is_prime函数，打印100到200之间的素数。

//int issushu(int num)
//{
//	for (int j = 2; j <= num/2; j++)
//	{
//		if (num % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (issushu(i)) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}