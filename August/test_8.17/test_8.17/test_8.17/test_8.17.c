#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 255
////逆转整体
//void StrTurn(char* head, char* tail)
//{
//	char tmp;
//	while (head <= tail)
//	{
//		tmp = *head;
//		*head = *tail;
//		*tail = tmp;
//		head++;
//		tail--;
//	}
//}
////逆转单个
//void StrTurnEve(char* head)
//{
//	char* sta = head;
//	while (*sta != '\0')
//	{
//		while (*sta != '\0' && *sta != ' ')
//		{
//			sta++;
//		}
//		StrTurn(head, sta - 1);
//		if (*sta != '\0')
//		{
//			sta++;
//			head = sta;
//		}
//	}
//}
//int main()
//{
//	char arr[MAX + 1];
//	/*int i = 0;
//	while (1)
//	{	
//		arr[i]=getchar();
//		scanf("%c",&arr[i]);
//		if (arr[i] == '\n')
//		{
//			arr[i] = '\0';
//			break;
//		}
//		i++;
//	}*/
//	fgets(arr, MAX + 1, stdin);
//	char* head = arr, *tail = arr;
//	tail += strlen(arr);
//	tail--;
//	*tail = '\0';
//	tail--;
//	StrTurn(head, tail);
//	StrTurnEve(head);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void reverse(char* start, char* end)
//{
//    char tmp;
//    while (start < end)
//    {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//        start++;
//        end--;
//    }
//}
//int main()
//{
//    char arr[100] = { 0 };
//    //gets(arr);
//    scanf("%[^\n]s", arr);
//    int len = strlen(arr);
//    int i = 0;
//    //先将字符串整体翻转
//    reverse(arr, arr + len - 1);
//    char* a = arr;
//    for (i = 0; i <= len; i++)
//    {
//        if (arr[i] == ' ' || arr[i] == '\0')
//        {
//            reverse(a, arr + i - 1);//空格之前的再一次翻转，两次翻转正好
//            a = (arr + i + 1);
//        }
//
//    }
//    printf("%s", arr);
//
//    return 0;
//}




int main()
{
	char a = 128;
	//10000000 00000000 00000000 10000000
	//11111111 11111111 11111111 01111111
	//11111111 11111111 11111111 10000000
	//10000000
	//11111111 11111111 11111111 10000000
	printf("%u\n", a);
	printf("%u\n", 0xffffff80);
	int i = -20;
	//10000000 00000000 00000000 00010100
	//11111111 11111111 11111111 11101011
	//11111111 11111111 11111111 11101100
	unsigned int j = 10;
	//00000000 00000000 00000000 00001010
	//11111111 11111111 11111111 11110110
	//11111111 11111111 11111111 11110101
	//10000000 00000000 00000000 00001010
	printf("%d\n", i + j);

	//unsigned int k;
	//for (k = 9; k >= 0; k--)
	//{
	//	//00000000 00000000 00000000 00001001
	//	//
	//	printf("%u\n", k);
	//}
	//补码跟整型提升

	int n = 9;
	//0000000 00000000 00000000 00001001

	//0 00000000 0000000000000000001001 
	//S E        M
	float* p = (float*) & n;
	printf("%f", *p);
	return 0;
}