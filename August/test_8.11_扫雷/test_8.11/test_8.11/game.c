#include "game.h"

//typedef struct Ceil
//{
//	int count;//��Χ����
//	bool isBoom;//�Ƿ���ը��
// 	bool isAppear;//�Ƿ�����
//}Ceil;
//������true,�հ���false

//�˵�
void menu()
{
	printf("****************************\n");
	printf("********��������ѡ��********\n");
	printf("**1.��ʼ��Ϸ***0.������Ϸ***\n");
}
//��ʼ������
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
//��ӡ����
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
			//��ʾը��������
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
//���ɵ���
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
//��ҿ�����
int PlayerMove(Ceil chess[ROW][COL], int row, int col)
{
	int x, y;
	bool flag = false;
	while (!flag)
	{
		printf("����������λ������>");
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
				printf("ը��\n");
				printf("��Ϸ����\n");
				flag = true;
				return 0;
			}

		}
		else
			printf("����Ƿ�������������\n");

	}

}
//��һ��
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
//����Χ
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
//��Χը������
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
//��ӡը��λ��
void PrintBoom(Ceil chess[ROW][COL], int row, int col)
{
	for (int i = 1; i < row - 1; i++)
	{
		for (int j = 1; j < col - 1; j++)
		{
			
			//��ʾը��������
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
//ʤ��
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
		printf("��Ϸʤ��\n");
		return 1;
	}
	else
		return 0;
}
//��Ϸ������
void game()
{
	int boom = 0;
	int win = 0;
	//��������
	Ceil chess[ROW][COL];
	//��ʼ��
	InitChess(chess, ROW, COL);
	//��ӡ����
	//PrintChess(chess, ROW, COL);
	//���ɵ���
	CreateBoom(chess, ROW, COL, BOOM_COUNT);
	//��ӡ����λ��
	//PrintBoom(chess, ROW, COL);
	while (1)
	{
		//��ҿ�����
		boom = PlayerMove(chess, ROW, COL);
		if (boom == 0)
			break;
		PrintChess(chess, ROW, COL);
		//ʤ��
		win = isWin(chess, ROW, COL);
		if (win == 1)
			break;
		
	}
}