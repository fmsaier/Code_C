#include<stdio.h>
#define MAXLEN  128

typedef struct {
    int elem[MAXLEN]; //存储数据的数组。下标从0开始。
    unsigned len;     //数组中数据的个数
} list;
void remove_elem(list* L, unsigned f) {
    int i = 0;
    int tmp[1000] = { 0 };
    int count = 0;
    for (i=0; i < L->len; i++)
    {
        if (L->elem[i] % f != 0)
        {
            tmp[count++] = L->elem[i];
        }
    }
    for (i=0; i < count; i++)
    {
        L->elem[i] = tmp[i];
    }
    L->len = count;
}
int main()
{
    
    list L;
    L.elem[0] = 23;
    L.elem[1] = 4;
    L.elem[2] = 861;
    L.elem[3] = 796;
    L.elem[4] = 233;
    L.elem[5] = 645;
    L.elem[6] = 751;
    L.len = 7;
    remove_elem(&L, 2);
    for (int i = 0; i < L.len; i++)
    {
        printf("%d ", L.elem[i]);
    }
    return 0;
}