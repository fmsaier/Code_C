#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main()
{
	int input = 0;
	do
	{
		//�˵�
		menu();
		printf("ģʽѡ��������>");
		scanf("%d", &input);
		switch (input)
		{
			//�˳�
			case 0:
				break;
			//��ʼ��Ϸ
			case 1:
				game();
				break;
			default:
				printf("�������������ѡ��\n");
				break;
		}
		Sleep(1000);
		system("cls");
	} while (input);
	return 0;
}