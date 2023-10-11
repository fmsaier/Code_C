#pragma once
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define ROW 3//行数
#define COL 3//列数

//打印菜单
void menu();
//初始化棋盘
void Initchess(char chess[ROW][COL], int row, int col);
//打印棋盘
void Printchess(char chess[ROW][COL], int row, int col);
//玩家行动回合
void Playermove(char chess[ROW][COL], int row, int col);
//电脑行动回合
void Pcmove(char chess[ROW][COL], int row, int col);
//胜利条件判定
int isWin(char chess[ROW][COL], int row, int col);
//游戏总函数
void game();