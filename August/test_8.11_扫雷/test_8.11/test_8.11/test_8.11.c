#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main()
{
	int input = 0;
	do
	{
		//菜单
		menu();
		printf("模式选择：请输入>");
		scanf("%d", &input);
		switch (input)
		{
			//退出
			case 0:
				break;
			//开始游戏
			case 1:
				game();
				break;
			default:
				printf("输入错误，请重新选择\n");
				break;
		}
		Sleep(1000);
		system("cls");
	} while (input);
	return 0;
}