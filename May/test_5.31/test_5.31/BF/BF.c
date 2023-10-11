#include <stdio.h>
#define MAX 255
typedef struct 
{
	char ch[MAX + 1];
	int length;
}SString;
int BFstr(SString S, SString T,int pos)
{
	int i = pos, j = 1;
	while (i <= S.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length)
	{
		return i - T.length;
	}
	else return 0;
}
#include <cstdio>
#include <cstdlib>
#define MAX_LEN  2010
#define MAX_NUM  4000010

int valueSum[MAX_LEN][MAX_LEN];

void updateSum(int totalElements, int maxNum, int* numbers) {
    for (int i = 1; i <= totalElements; ++i) {
        for (int j = 1; j <= maxNum; ++j) {
            valueSum[j][i] = valueSum[j][i - 1];
        }
        ++valueSum[numbers[i]][i];
    }
}

void executeQueries(int maxNum, int totalQueries) {
    while (totalQueries--) {
        int start, end, distinctNum = 0;
        scanf("%d%d", &start, &end);
        for (int i = 1; i <= maxNum; ++i) {
            if (valueSum[i][end] - valueSum[i][start - 1] > 0) {
                ++distinctNum;
            }
        }
        printf("%d\n", distinctNum);
    }
}

int getInput() {
    int inputVal;
    scanf("%d", &inputVal);
    return inputVal;
}

void getArray(int totalElements, int* numbers) {
    for (int i = 1; i <= totalElements; ++i) {
        numbers[i] = getInput();
    }
}

int main() {
    int totalElements = getInput(), maxNum = getInput();
    int numbers[MAX_LEN];
    getArray(totalElements, numbers);
    updateSum(totalElements, maxNum, numbers);
    int totalQueries = getInput();
    executeQueries(maxNum, totalQueries);
    return 0;
}