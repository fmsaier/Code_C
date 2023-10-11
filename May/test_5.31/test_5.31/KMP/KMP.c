#include <stdio.h>
#define MAX 255
typedef struct 
{
	char ch[MAX + 1];
	int length;
}SString;
int KMP(SString S,SString T,int *nextval,int pos)
{
	int i = pos, j = 1;
	while (i <= S.length && j <= T.length)
	{
		if (j == 0 || T.ch[j] == S.ch[i])
		{
			i++;
			j++;
		}
		else
			j = nextval[j];
	}
	if (j > T.length)
	{
		return i - T.length;
	}
	else return 0;
}
void Nextval(SString T, int* nextval)
{
	int i = 1, j = 0;
	nextval[1] = 0;
	while (i < T.length)
	{
		if (j == 0 || T.ch[j] == T.ch[i])
		{
			i++;
			j++;
			if (T.ch[j] == T.ch[i])
			{
				nextval[i] = nextval[j];
			}
			else
			{
				nextval[i] = j;
			}
		}
		else
		{
			j = nextval[j];
		}
	}
}