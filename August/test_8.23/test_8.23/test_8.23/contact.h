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

//��̬
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	//��¼���ݸ���
//	int sz;
//}Contact;

//��̬
typedef struct Contact
{
	PeoInfo* data;
	//��¼���ݸ���
	int sz;
	int capacity;
}Contact;

//�����Ժ���
void test();

//�˵�
void menu();

//��ʼ��
void InitContact(Contact* con);

//���Ԫ��
void AddContact(Contact* con);

//ɾ��Ԫ��
void DelContact(Contact* con);

//����ָ����ϵ��
void SearchContact(const Contact* con);

//�޸�ָ����ϵ��
void ModifyContact(Contact* con);

//��ʾ������ϵ��
void ShowContact(const Contact* con);

//��ϵ������
void SortContact(const Contact* con);

//�����ֱȽ�
int CmpByName(const void* p1, const void* p2);

//�˳�
void ExitContact(Contact* con);
 
//ͨ�����ֲ���
int FindByName(const Contact* con, char* name);

//��������
void SaveContact(const Contact* con);

//�����ļ���Ϣ
void LoadContact(Contact* con);