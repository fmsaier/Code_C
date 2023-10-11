#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//�˵���ӡ
void menu()
{
	printf("****************************\n");
	printf("********��������ѡ��********\n");
	printf("**1.��ʼ��Ϸ***0.������Ϸ***\n");
}
//��ʼ������
void Initchess(char (*chess)[COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			chess[i][j] = ' ';
		}
	}
}
//��ӡ����
void Printchess(char chess[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(j < col - 1)
				printf(" %c |", chess[i][j]);
			else
				printf(" %c  ", chess[i][j]);
		}
		printf("\n");
		for (int j = 0; j < row; j++)
		{
			printf("---");
			if (j < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");

	}
}
//����ж��غ�
void Playermove(char chess[ROW][COL], int row, int col)
{
	int x, y, flag = 1;
	while (flag)
	{
		printf("�������\n");
		printf("����������>");
		scanf("%d%d", &x, &y);
		if ((x <= 3 && x >= 1) && (y <= 3 && y >= 1) && chess[x - 1][y - 1] == ' ')
		{
			chess[x - 1][y - 1] = '*';
			flag = 0;
		}
		else if(chess[x - 1][y - 1] == '*'|| chess[x - 1][y - 1] == '#')
			printf("���걻ռ��,����������\n");
		else
			printf("����Ƿ�,����������\n");
	}
}
//�����ж��غ�
void Pcmove(char chess[ROW][COL], int row, int col)
{
	int x, y, flag = 1;
	srand((unsigned int)time(NULL));
	printf("��������\n");
	while (flag)
	{
		x = rand() % row;
		y = rand() % col;
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '#';
			flag = 0;
		}
	}
}
//�ж�ʤ������
int isWin(char chess[ROW][COL], int row, int col)
{
	int flag = 1;
	for (int i = 0; i < row; i++)
	{
		if (chess[i][0]==chess[i][1] && chess[i][1]==chess[i][2])
		{
			if (chess[i][0] == '*')
			{
				printf("���ʤ��\n");
				return 0;
			}
			else if (chess[i][0] == '#')
			{
				printf("����ʤ��\n");
				return 0;
			}			
		}
		else if (chess[0][i]==chess[1][i] &&chess[1][i]==chess[2][i])
		{
			if (chess[0][i] == '*')
			{
				printf("���ʤ��\n");
				return 0;
			}			
			else if (chess[0][i] == '#')
			{
				printf("����ʤ��\n");
				return 0;
			}					
		}
	}
	if ((chess[0][0]==chess[1][1] && chess[1][1]==chess[2][2]) ||
		(chess[0][2]==chess[1][1] && chess[1][1]==chess[2][0]))
	{
		if (chess[1][1] == '*')
		{
			printf("���ʤ��\n");
			return 0;
		}
		else if (chess[1][1] == '#')
		{
			printf("����ʤ��\n");
			return 0;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (chess[i][j] == ' ')
				flag = 0;
		}
	}
	if (flag == 1)
	{
		printf("ƽ��\n");
		return 0;
	}
	return 1;
}
//��Ϸ�ܴ���
void game()
{
	int flag = 1;
	char chess[ROW][COL];
	Initchess(chess, ROW, COL);
	Printchess(chess, ROW, COL);
	while (1)
	{
		Playermove(chess, ROW, COL);
		Printchess(chess, ROW, COL);
		flag = isWin(chess, ROW, COL);
		if (flag == 0)
			break;
		Pcmove(chess, ROW, COL);
		Printchess(chess, ROW, COL);
		flag = isWin(chess, ROW, COL);
		if (flag == 0)
			break;
	}
}
