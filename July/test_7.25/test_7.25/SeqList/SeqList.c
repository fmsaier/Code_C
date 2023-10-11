#include "SeqList.h"
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void SeqListPushBack(SeqList* ps, SLDateType x)//尾插
{
	SLCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SeqList* ps, SLDateType x)//头插
{
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void SeqListPopBack(SeqList* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
void SeqListInsert(SeqList* ps, int pos, SLDateType x)// 顺序表在pos位置插入x
{
	assert(ps);

	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);

	assert(pos >= 0 && pos < ps->size);

	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}
void SLCheckCapacity(SeqList* ps)
{
	assert(ps);

	// 满了要扩容
	if (ps->size == ps->capacity)
	{
		SLDateType* tmp = (SLDateType*)realloc(ps->a, ps->capacity * 2 * (sizeof(SLDateType)));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}
}
int main()
{
	SeqList SL;
	SeqListInit(&SL);
	SeqListPushBack(&SL, 1);
	SeqListPushFront(&SL, 5);
	SeqListPrint(&SL);
	SeqListDestroy(&SL);
	return 0;
}
