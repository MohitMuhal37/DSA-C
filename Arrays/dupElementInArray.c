#include<stdio.h>

void main()
{
    int a[10] = {2,3,4,4,5,6,7,7,7,10};
    int lastDup = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == a[i+1] && a[i] != lastDup)
        {
            printf("%d ",a[i]);
            lastDup = a[i];
        }
    }
}