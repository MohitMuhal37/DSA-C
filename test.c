#include<stdio.h>


int swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    // printf("%d %d\n",&a, &b);
}

int rand(int i, int j)
{
    return i,j;
}


int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz = **ppz+1;
    z = **ppz;
    *py = *py+2;
    y = *py;
    x = x + 3;
    return x+y+z;
}
int main()
{
   int c = 4;
   int *b, **a;
   b = &c;
   a = &b;
   printf("%d",f(c,b,a));
}
