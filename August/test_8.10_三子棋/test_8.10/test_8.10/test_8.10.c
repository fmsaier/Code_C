#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main()
{
	int input = 0;
	//��Ϸѭ����ʼ
	do
	{
		//�˵�
		menu();
		//ѡ��ģʽ
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		//�˳�
		case 0:
			printf("��Ϸ�˳�\n");
			Sleep(1000);
			break;
		//��ʼ��Ϸ
		case 1:
			game();
			Sleep(1000);
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			Sleep(1000);
			break;
		}	
		//һ�ֽ�������
		//system("cls");

	} while (input != 0);
	return 0;
}