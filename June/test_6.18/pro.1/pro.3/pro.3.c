#include<stdio.h>
#include<stdlib.h>
//������󶥵�����
#define MAX_VERTEX_NUM 20
typedef struct _arc_node {
    int adjvex;          //�û�ָ�򶥵��ڶ��������е����
    struct _arc_node* nextarc; //ָ����һ������ָ��
} arc_node;

typedef struct vertex_node {
    char tag;   //�����ַ���ǩ
    arc_node* firstarc; //ָ��ö����һ������ָ��
} vertex_node;

typedef struct Graph {
    vertex_node vertex[MAX_VERTEX_NUM]; //�����������±��0��ʼ��
    int vexnum, arcnum; //ͼ�Ķ������ͻ���
} adjlist;

arc_node* Init(adjlist* G, int i, int k)
{
    arc_node* p = (arc_node*)malloc(sizeof(arc_node*));
    if (G->vertex[i].firstarc != NULL)
    {
        p = G->vertex[i].firstarc;
        while (k-- && p != NULL)
        {
            p = p->nextarc;
        }
        return p;
    }
    else return NULL;
}
void merge_arcs(adjlist* G1, adjlist* G2)
{
    //TODO
    if (G1 == NULL || G2 == NULL)return NULL;
    int i = 0, j = 0, k = 0;
    arc_node* p;
    for (i = 0; i < G2->vexnum; i++)
    {
        j = locate_vertex(G1, G2->vertex[i].tag);
        do
        {
            k = 0;
            p = Init(G2, i, k);
        } while (p != NULL);
        {
            p->nextarc = G1->vertex[j].firstarc;
            G1->vertex[j].firstarc = p;
            k++;
        }
    }
}
int main()
{
    return 0;
}