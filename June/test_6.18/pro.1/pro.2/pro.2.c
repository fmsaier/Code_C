#include<stdio.h>
//定义节点类型
typedef struct _node {
    int data;           //数据域
    struct _node* next; //指针域
} node;

//定义单链表类型
typedef struct {
    node* head;      //头指针
    unsigned len;    //链表中的节点数量
} list;
int list_shared(list* La, list* Lb) {
    int n = 0, m = 0;
    int i = 0;
    node* p = La->head;
    node* q = Lb->head;
    if (La->head == NULL || Lb->head == NULL)
        return 0;
    else
    {
        while (p)
        {
            p = p->next;
            n++;
        }
        while (q)
        {
            q = q->next;
            m++;
        }
        if (p != q)return 0;
        p = La->head;
        q = Lb->head;
        if (n > m)
        {
            for (i = 0; i < n - m; i++)
            {
                p = p->next;
            }
            i = 0;
            while (p != q)
            {
                p = p->next;
                q = q->next;
                i++;
            }
            return m - i ;
        }
        else
        {
            for (i = 0; i < m - n; i++)
            {
                q = q->next;
            }
            i = 0;
            while (p != q)
            {
                p = p->next;
                q = q->next;
                i++;
            }
            return n - i ;
        }
    }
}
