//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
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