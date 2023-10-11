#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int main()
{
	int input = 0;
	//游戏循环开始
	do
	{
		//菜单
		menu();
		//选择模式
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		//退出
		case 0:
			printf("游戏退出\n");
			Sleep(1000);
			break;
		//开始游戏
		case 1:
			game();
			Sleep(1000);
			break;
		default:
			printf("选择错误，请重新选择\n");
			Sleep(1000);
			break;
		}	
		//一轮结束清屏
		//system("cls");

	} while (input != 0);
	return 0;
}