//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
#include <stdio.h>
int main()
{
	int money = 20;
	int leftbotton = 0;
	int sum = 0;
	while (money >= 1)
	{
		sum += money;
		money += leftbotton;
		leftbotton = money - (money / 2) * 2;
		money = money / 2;

	}
	printf("%d", sum);
	return 0;
}