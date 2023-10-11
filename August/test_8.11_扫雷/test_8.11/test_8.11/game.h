#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROW 11//��
#define COL 11//��
#define BOOM_COUNT 15//ը������

typedef struct Ceil
{
	int count;
	bool isBoom;
	bool isAppear;
}Ceil;

//�˵�
void menu();

//��ʼ������
void InitChess(Ceil chess[ROW][COL], int row, int col);

//��ӡ����
void PrintChess(Ceil chess[ROW][COL], int row, int col);

//��ӡը��λ��
void PrintBoom(Ceil chess[ROW][COL], int row, int col);

//���ɵ���
void CreateBoom(Ceil chess[ROW][COL], int row, int col);

//��ҿ�����
int PlayerMove(Ceil chess[ROW][COL], int row, int col);

//��Χը������
int ArroundCount(Ceil chess[ROW][COL], int x, int y);

//��һ��
void AppearOne(Ceil chess[ROW][COL], int x, int y);

//����Χ
void AppearArround(Ceil chess[ROW][COL], int x, int y);

//��Ϸ������
void game();

//ʤ��
int isWin(Ceil chess[ROW][COL], int row, int col);