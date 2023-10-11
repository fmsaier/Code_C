#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;//a=a^b
	a = a ^ b;//b=a
	//a&1
	//a^0=a
	//a^a=0
	//a>>1->/2  ฒนท๛บลฮป
	//a<<1->*2  ฒน0
	//& | ^ ~
	//>> <<
	printf("a=%d b=%d", a, b);
	/*while (~scanf("%d",&a))
	{
		printf("%d", a);
	}
	while (scanf("%d", &a)!=EOF)
	{
		printf("%d", a);
	}*/
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		i[arr] = i;
	}
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", i[p]);
	}
	return 0;
}