#include<stdio.h>
#include<stdlib.h>
//定义最大顶点数量
#define MAX_VERTEX_NUM 20
typedef struct _arc_node {
    int adjvex;          //该弧指向顶点在顶点向量中的序号
    struct _arc_node* nextarc; //指向下一条弧的指针
} arc_node;

typedef struct vertex_node {
    char tag;   //顶点字符标签
    arc_node* firstarc; //指向该顶点第一条弧的指针
} vertex_node;

typedef struct Graph {
    vertex_node vertex[MAX_VERTEX_NUM]; //顶点向量。下标从0开始。
    int vexnum, arcnum; //图的顶点数和弧数
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