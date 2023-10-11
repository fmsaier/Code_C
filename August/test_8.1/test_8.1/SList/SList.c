#include "SList.h"
#include <stdio.h>
#include <stdlib.h>
//typedef int SLTDateType;
//typedef struct SListNode
//{
//	SLTDateType data;
//	struct SListNode* next;
//}SListNode;
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* tmp = (SListNode*)malloc(sizeof(SLTDateType));
	if (tmp == NULL)
	{
		exit(-1);
	}
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
void SListPrint(SListNode* plist)
{
	assert(plist);
	while (plist != NULL)
	{
		printf("%d ", plist->data);
		plist = plist->next;
	}
}
void SListPushBack(SListNode** pplist, SLTDateType x)//β��
{
	assert(*pplist);
	if (*pplist == NULL)
	{
		*pplist=BuySListNode(x);
	}
	else
	{
		/*while ((*pplist)->next != NULL)//ע�����ȼ�
		{
			 
		}*/
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = BuySListNode(x);
	}
}
void SListPushFront(SListNode** pplist, SLTDateType x)//ͷ��
{
	assert(*pplist);	
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
void SListPopBack(SListNode** pplist)//βɾ
{
	assert(*pplist);
	if ((*pplist)->next != NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}
void SListPopFront(SListNode** pplist)//ͷɾ
{
	assert(*pplist);
	SListNode* tail = *pplist;
	*pplist = (*pplist)->next;
	free(tail);
}
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	SListNode* tail = plist;
	while (tail)
	{
		if (tail->data = x)
			return tail;
		tail = tail->next;
	}
	return NULL;
}
void SListInsertAfter(SListNode* pos, SLTDateType x)//posλ��֮�����x
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	assert(pos->next);
	SListNode* posNext = pos->next;
	pos->next = posNext->next;
	free(posNext);
	posNext = NULL;
}
void SListDestroy(SListNode* plist)
{
	assert(plist);
	free(plist);
	plist = NULL;
}