#include "game.h"

//typedef struct Ceil
//{
//	int count;//周围数量
//	bool isBoom;//是否是炸弹
// 	bool isAppear;//是否现行
//}Ceil;
//地雷是true,空白是false

//菜单
void menu()
{
	printf("****************************\n");
	printf("********做出您的选择********\n");
	printf("**1.开始游戏***0.结束游戏***\n");
}
//初始化棋盘
void InitChess(Ceil chess[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			chess[i][j].isBoom = false;
			chess[i][j].count = 0;
			chess[i][j].isAppear = false;
		}
	}
}
//打印棋盘
void PrintChess(Ceil chess[ROW][COL], int row, int col)
{
	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			if (chess[i][j].isAppear == true)
			{
				if (j < col - 2)
					printf(" %d |", chess[i][j].count);
				else
					printf(" %d  ", chess[i][j].count);
			}
			//显示炸弹测试用
			/*if (chess[i][j].isBoom == true)
			{
				if (j < col - 2)
					printf(" 1 |");
				else
					printf(" 1  ");
			}*/
			else
			{
				if (j < col - 2)
					printf("   |");
				else
					printf("    ");
			}

		}
		printf("\n");
		for (int j = 1; j < row - 1; j++)
		{
			printf("---");
			if (j < row - 2)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
//生成地雷
void CreateBoom(Ceil chess[ROW][COL], int row, int col, int boom_count)
{
	int x, y;
	bool isfull = false;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < boom_count; i++)
	{
		while (!isfull)
		{
			x = rand() % (row - 2) + 1;
			y = rand() % (col - 2) + 1;
			if (chess[x][y].isBoom == false)
			{
				isfull = true;
				chess[x][y].isBoom = true;
			}
		}
		isfull = false;
	}
}
//玩家开格子
int PlayerMove(Ceil chess[ROW][COL], int row, int col)
{
	int x, y;
	bool flag = false;
	while (!flag)
	{
		printf("请输入想点击位置坐标>");
		scanf("%d%d", &x, &y);
		system("cls");
		if (chess[x][y].isAppear == false)
		{
			if (chess[x][y].isBoom == false)
			{
				flag = true;
				AppearOne(chess, x, y);
				return 1;
			}
			else
			{
				printf("炸弹\n");
				printf("游戏结束\n");
				flag = true;
				return 0;
			}

		}
		else
			printf("坐标非法，请重新输入\n");

	}

}
//开一个
void AppearOne(Ceil chess[ROW][COL], int x, int y)
{
	if (chess[x][y].isAppear == false)
	{
		chess[x][y].isAppear = true;
		chess[x][y].count = ArroundCount(chess, x, y);
		if ((x > 0 && x < 10) && (y > 0 && y < 10) && chess[x][y].count == 0)
		{
			AppearArround(chess, x, y);
		}
	}
}
//开周围
void AppearArround(Ceil chess[ROW][COL], int x, int y)
{
	int count = 0;
	/*if (chess[x - 1][y - 1].isBoom == false)
	{
		AppearOne(chess, x - 1, y - 1);
	}*/
	if (chess[x - 1][y].isBoom == false)
	{
		AppearOne(chess, x - 1, y);
	}
	/*if (chess[x - 1][y + 1].isBoom == false)
	{
		AppearOne(chess, x - 1, y + 1);
	}*/
	if (chess[x][y - 1].isBoom == false)
	{
		AppearOne(chess, x, y - 1);
	}
	if (chess[x][y + 1].isBoom == false)
	{
		AppearOne(chess, x, y + 1);
	}
	/*if (chess[x + 1][y - 1].isBoom == false)
	{
		AppearOne(chess, x + 1, y - 1);
	}*/
	if (chess[x + 1][y].isBoom == false)
	{
		AppearOne(chess, x + 1, y);
	}
	/*if (chess[x + 1][y + 1].isBoom == false)
	{
		AppearOne(chess, x + 1, y + 1);
	}*/
}
//周围炸弹个数
int ArroundCount(Ceil chess[ROW][COL],int x, int y)
{
	int count = 0;
	if ((x > 0 && x < 10) && (y > 0 && y < 10))
	{
		if (chess[x - 1][y - 1].isBoom == true)
			count++;
		if (chess[x - 1][y].isBoom == true)
			count++;
		if (chess[x - 1][y + 1].isBoom == true)
			count++;
		if (chess[x][y - 1].isBoom == true)
			count++;
		if (chess[x][y + 1].isBoom == true)
			count++;
		if (chess[x + 1][y - 1].isBoom == true)
			count++;
		if (chess[x + 1][y].isBoom == true)
			count++;
		if (chess[x + 1][y + 1].isBoom == true)
			count++;
	}
	return count;
}
//打印炸弹位置
void PrintBoom(Ceil chess[ROW][COL], int row, int col)
{
	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			
			//显示炸弹测试用
			if (chess[i][j].isBoom == true)
			{
				if (j < col - 2)
					printf(" 1 |");
				else
					printf(" 1  ");
			}
			else
			{
				if (j < col - 2)
					printf("   |");
				else
					printf("    ");
			}

		}
		printf("\n");
		for (int j = 1; j < row - 1; j++)
		{
			printf("---");
			if (j < row - 2)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
//胜利
int isWin(Ceil chess[ROW][COL], int row, int col)
{
	bool flag = false;
	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			if (chess[i][j].isAppear == false && chess[i][j].isBoom == false)
			{
				flag = true;
			}
		}
	}
	if (flag == false)
	{
		printf("游戏胜利\n");
		return 1;
	}
	else
		return 0;
}
//游戏主程序
void game()
{
	int boom = 0;
	int win = 0;
	//建立棋盘
	Ceil chess[ROW][COL];
	//初始化
	InitChess(chess, ROW, COL);
	//打印棋盘
	//PrintChess(chess, ROW, COL);
	//生成地雷
	CreateBoom(chess, ROW, COL, BOOM_COUNT);
	//打印地雷位置
	//PrintBoom(chess, ROW, COL);
	while (1)
	{
		//玩家开格子
		boom = PlayerMove(chess, ROW, COL);
		if (boom == 0)
			break;
		PrintChess(chess, ROW, COL);
		//胜利
		win = isWin(chess, ROW, COL);
		if (win == 1)
			break;
		
	}
}