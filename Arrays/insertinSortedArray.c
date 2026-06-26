#include<stdio.h>

void main()
{
    int length = 8;
    int x = 18;
    int i = length - 2;
    int a[8] = {2,4,5,16,24,25,34};
    while(a[i] > x)
    {
        a[i+1] = a[i];
        i--;
    }
    a[i+1] = x;

    for(int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
}