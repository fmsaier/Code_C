#include<stdio.h>
#include<stdlib.h>
typedef struct OLNode
{
	int row, col;
	int value;
	struct OLNode* down, * right;
}OLNode,*OLink;
//OLink= struct OLNode*
//OLNode=struct OLNode
typedef struct
{
	OLink* row_head, * col_head;//二级指针模拟指针数组
	int m, n, len;
}CrossList;
void CreatCrossList(CrossList* M)
{
	int m, n, t, i, j, e;
	OLink p, q;
	for (scanf("%d %d %d", &i, &j, &e); i != -1; scanf("%d %d %d", &i, &j, &e))
	{
		if (!(p = (OLink)malloc(sizeof(OLNode))))
		{
			exit(-1);
		}
		p->row = i;
		p->col = j;
		p->value = e;
		if (M->row_head[i] == NULL)
		{
			M->row_head[i] = p;
		}
		else
		{
			q = M->row_head[i];
			while (q->right && q->right->col < j)
			{
				q = q->right;
			}
			p->right = q->right;
			q->right = p;
		}
		if (M->col_head[i] == NULL)
		{
			M->col_head[i] = p;
		}
		else
		{
			q = M->col_head[i];
			while (q->down && q->down->row < i)
			{
				q = q->down;
			}
			p->down = q->down;
			q->down = p;
		}
	}
}