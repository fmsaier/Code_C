#include<stdio.h>
#define MAX 255
typedef struct Triple
{
	int row, col;
	int e;
}Triple;
typedef struct TSMatrix
{
	Triple data[MAX+1];
	int m, n, len;
}TSMatrix;
void TurnTS(TSMatrix source, TSMatrix dest)
{
	
	int cNum[MAX], cPos[MAX];
	for (int Pos = 1; Pos <= source.n; Pos++)
	{
		cNum[source.data[Pos].col]++;
	}
	cPos[1] = 1;
	for (int col = 2; col <= source.n; col++)
	{
		cPos[col] = cPos[col - 1] + cNum[col - 1];
	}
	for (int p = 1; p <= source.len; p++)
	{
		dest.data[cPos[source.data[p].col]].row = source.data[p].col;
		dest.data[cPos[source.data[p].col]].col = source.data[p].row;
		dest.data[cPos[source.data[p].col]].e = source.data[p].e;
		cPos[source.data[p].col]++;
	}
}