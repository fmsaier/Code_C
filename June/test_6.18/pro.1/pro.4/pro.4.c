#include<stdlib.h>
void xsort(unsigned* a, unsigned n) {
    //TODO
     int k = 0;
    if (n == 0) return;
    unsigned b[1000] = { 0 };
    for (int i = 0; i < 1000; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]] = a[i];
    }
    for (int i = 0; i < 1000; i++)
    {
        if (b[i] != 0)
            a[k++] = b[i];
    }
}
int main()
{
    unsigned a[] = { 1,8,61,52,4,52,12 };
    unsigned n = 7;
    xsort(a, n);
    return 0;
}