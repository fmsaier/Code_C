#define _CRT_SECURE_NO_WARNINGS 1
#include <stdbool.h>
#include <stdio.h>
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
inline int Add(int x, int y)
{
	return x + y;
}
int main()
{
	//bool arr = TRUE;
	FILE* pf = fopen(".\\data.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fclose(pf);
	pf = NULL;
	int a = 5;
#if a<8
	printf("ss");
#endif

#if a==2
	printf("aa");
	printf("aa");
#elif a==6
	printf("aa");
#else 
	printf("66");
#endif

#if a==6
	printf("66");
#elif !defined(M)
	printf("a");
#endif
	
	bool asa = true;
	char* p = MALLOC(50, char);
	return 0;
}