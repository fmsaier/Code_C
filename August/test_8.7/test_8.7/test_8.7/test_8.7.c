#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a=RAND_MAX;//32767
	srand((unsigned int)time(NULL));//��ʼ��rand����һ���仯��ֵʱ��������������void srand(unsigned int)
	//time������һ��ָ�뷵��ʱ���������long long
	printf("%d\n", a);
	for (int i = 0; i < 10; i++)
	{//srand��ʼ��һ�ξ���
		int ran = rand();//0��32767֮���α�����,rand()%100->0-100�������
		printf("%d\n", ran);
	}
	goto flag;
	system("shutdown -s -t 60");
	Sleep(1000);
flag:
	system("shutdown -a");
	return 0;
}