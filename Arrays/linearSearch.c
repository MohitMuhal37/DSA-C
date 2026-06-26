#include<stdio.h>

int linear(int *a, int key)
{
    int i;
    for(i = 0; i < 9; i++)
    {
        if(key == a[i])
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int a[10] = {2,43,44,23,17,86,54,56,98,42};
    int key = 50;
    printf("%d ",linear(a, key));
}