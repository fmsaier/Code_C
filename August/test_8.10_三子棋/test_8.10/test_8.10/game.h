#pragma once
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define ROW 3//����
#define COL 3//����

//��ӡ�˵�
void menu();
//��ʼ������
void Initchess(char chess[ROW][COL], int row, int col);
//��ӡ����
void Printchess(char chess[ROW][COL], int row, int col);
//����ж��غ�
void Playermove(char chess[ROW][COL], int row, int col);
//�����ж��غ�
void Pcmove(char chess[ROW][COL], int row, int col);
//ʤ�������ж�
int isWin(char chess[ROW][COL], int row, int col);
//��Ϸ�ܺ���
void game();