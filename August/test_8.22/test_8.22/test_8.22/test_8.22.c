#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#pragma pack()
struct S
{
	char c1;//1 8 1
	int arr[2];//4 8 4
	char c2;//1 8 1
	char c : 3;
};
enum Sex
{
	male,
	female
};
int main()
{
	printf("%d\n", offsetof(struct S, arr));
	printf("%d\n", offsetof(struct S, c2));
	printf("%d\n", sizeof(struct S));
	enum Sex a = male;
	return 0;
}