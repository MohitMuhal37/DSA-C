#include<stdio.h>
int main()
{
    int a[5] = {1,2,6,8,9};
    int h[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 5; i++)
    {
        h[a[i]]++;
    }
    for(int i = 1; i <= 10; i++)
    {
        if(h[i] == 0)
        {
            printf("%d ",i);
        }
    }
}