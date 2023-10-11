#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a=RAND_MAX;//32767
	srand((unsigned int)time(NULL));//初始化rand，传一个变化的值时间戳生成随机数，void srand(unsigned int)
	//time函数传一个指针返回时间戳，返回long long
	printf("%d\n", a);
	for (int i = 0; i < 10; i++)
	{//srand初始化一次就行
		int ran = rand();//0到32767之间的伪随机数,rand()%100->0-100的随机数
		printf("%d\n", ran);
	}
	goto flag;
	system("shutdown -s -t 60");
	Sleep(1000);
flag:
	system("shutdown -a");
	return 0;
}