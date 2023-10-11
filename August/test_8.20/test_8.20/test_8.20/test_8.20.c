#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
size_t my_strlen1(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen1(str + 1);
}
size_t my_strlen2(const char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//长度不受限的字符串函数
char* my_strcpy(char* des, const char* sour)
{
	assert(des);
	assert(sour);
	char* head = des;
	while (*des++ = *sour++)//先判断在++ des=\0+1;
	{

	}
	return head;
}
//字符串追加
char* my_strcat(char* des, const char* sour)
{
	assert(des&&sour);
	char* head = des;
	while (*des)//des=\0;
	{
		des++;
	}
	while (*des++ = *sour++)
	{

	}
	return head;
}
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return *str1 - *str2;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
//长度受限的字符串函数
char* my_strncpy(char* des, const char* sour, size_t num)
{
	assert(des && sour);
	char* head = des;
	while (num)
	{
		if (*sour == '\0')
			*des++ = 0;
		else
			*des++ = *sour++;
		num--;
	}
	return head;
}
char* my_strncat(char* des, const char* sour, size_t num)
{
	assert(des && sour);
	char* head = des;
	while (*des)//des=\0;
	{
		des++;
	}
	while (num)
	{
		if (*sour == '\0')
			*des++ = 0;
		else
			*des++ = *sour++;
		num--;
	}
	*des = '\0';
	return head;
}
int my_strncmp(const char* str1, const char* str2, size_t num)
{
	assert(str1 && str2);
	while (*str1 && *str2 && num)
	{
		if (*str1 != *str2)
			return *str1 - *str2;
		str1++;
		str2++;
		num--;
	}
	if (num == 0)
		return 0;
	else
		return *str1 - *str2;
}
//寻找子串
char* my_strstr(const char* str1, const char* str2)
{
	char* head1 = str1;
	char* head2 = str2;
	while (*head1)
	{	
		str1 = head1;
		str2 = head2;
		while (*str1 && *str2 && *str1 == *str2)
		{
			str1++;
			str2++;		
		}
		if (*str2 == '\0')
			return head1;
		head1++;
	}
	return NULL;
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//从前往后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后往前
		/*dest = (char*)dest + num;
		src = (char*)src + num;*/
		while (num--)
		{
			/**(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;*/
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	//char str[10] = "abcd";
	//char str1[] = "bbbd";
	//char str2[] = "bc";
	///*printf("%u\n", my_strlen1(str));
	//printf("%u\n", my_strlen2(str));
	//printf("%s\n", my_strcpy(str, str1));
	//printf("%s\n", my_strcat(str, str1));
	//printf("%d\n", my_strcmp(str, str1));
	//printf("%d\n", my_strcmp(str2, str1));*/
	//printf("%s\n", my_strstr(str, str2));
	//printf("%d\n", my_strncmp(str1, str2, 3));
	//printf("%d\n", my_strncmp(str1, str2, 6));
	//printf("%s\n", my_strncpy(str, str1, 4));
	//printf("%s\n", my_strncat(str, str1, 4));
	char str[] = "- This, a sample string.";
	char* pch;
	/*pch = strtok(str, " ,.-");//切割字符串
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}*/
	for (pch = strtok(str, " ,.-"); pch != NULL; pch = strtok(NULL, " ,.-"))
	{
		printf("%s\n", pch);
	}
	for (int i = 0; i < 100; i++)
	{
		printf("%d:%s\n", i, strerror(i));
	}
	free(NULL);
	return 0;
}