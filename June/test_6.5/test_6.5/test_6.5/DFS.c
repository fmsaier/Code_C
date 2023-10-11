#include<stdio.h>
#define MAX 255
typedef struct
{
	char vexs[MAX + 1];
	int arcs[MAX][MAX];
	int vexnum, arcnum;
}AMGraph;
void DFS(AMGraph G, int v,int*visit)
{
	printf("%c", G.vexs[v]);
	visit[v] = 1;
	for (int w = 0; w < G.vexnum; w++)
	{
		if (G.arcs[v][w] != 0 && visit[w] != 0)
		{
			DFS(G, w,visit);
		}
	}
}