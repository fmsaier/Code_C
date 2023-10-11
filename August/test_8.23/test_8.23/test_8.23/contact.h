#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_PHONE 15
#define MAX_ADDRESS 30

typedef enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
}OPTION;

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char phone[MAX_PHONE];
	char address[MAX_ADDRESS];
}PeoInfo;

//静态
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	//记录数据个数
//	int sz;
//}Contact;

//动态
typedef struct Contact
{
	PeoInfo* data;
	//记录数据个数
	int sz;
	int capacity;
}Contact;

//主测试函数
void test();

//菜单
void menu();

//初始化
void InitContact(Contact* con);

//添加元素
void AddContact(Contact* con);

//删除元素
void DelContact(Contact* con);

//查找指定联系人
void SearchContact(const Contact* con);

//修改指定联系人
void ModifyContact(Contact* con);

//显示所有联系人
void ShowContact(const Contact* con);

//联系人排序
void SortContact(const Contact* con);

//按名字比较
int CmpByName(const void* p1, const void* p2);

//退出
void ExitContact(Contact* con);
 
//通过名字查找
int FindByName(const Contact* con, char* name);

//保存数据
void SaveContact(const Contact* con);

//加载文件信息
void LoadContact(Contact* con);