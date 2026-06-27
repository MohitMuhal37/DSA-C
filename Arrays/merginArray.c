#include<stdio.h>

void main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int a[5] = {3,8,16,20,25};
    int b[5] = {4,10,12,22,23};
    int c[10];
    while(i < 5 && j < 5)
    {
        if(a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }

       // for remaining last element
        for(; i < 5; i++)
        {
            c[k++] = a[i];
        }

         for(; j < 5; j++)
        {
            c[k++] = b[j];
        }

        for(int k = 0; k < 10; k++)
    {
        printf("%d ",c[k]);
    }
}