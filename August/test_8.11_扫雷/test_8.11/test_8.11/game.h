#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROW 11//行
#define COL 11//列
#define BOOM_COUNT 15//炸弹数量

typedef struct Ceil
{
	int count;
	bool isBoom;
	bool isAppear;
}Ceil;

//菜单
void menu();

//初始化棋盘
void InitChess(Ceil chess[ROW][COL], int row, int col);

//打印棋盘
void PrintChess(Ceil chess[ROW][COL], int row, int col);

//打印炸弹位置
void PrintBoom(Ceil chess[ROW][COL], int row, int col);

//生成地雷
void CreateBoom(Ceil chess[ROW][COL], int row, int col);

//玩家开格子
int PlayerMove(Ceil chess[ROW][COL], int row, int col);

//周围炸弹个数
int ArroundCount(Ceil chess[ROW][COL], int x, int y);

//开一个
void AppearOne(Ceil chess[ROW][COL], int x, int y);

//开周围
void AppearArround(Ceil chess[ROW][COL], int x, int y);

//游戏主程序
void game();

//胜利
int isWin(Ceil chess[ROW][COL], int row, int col);