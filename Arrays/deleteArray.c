#include<stdio.h>

void delete(int index,int element, int length, int *a)
{
    element = a[index];
    int i;
    for(i = index; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }
    length--;
    for(i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
}

void main()
{
    int a[10] = {10,20,30,40,50,60};
    int length = 6;
    delete(4,50,length,a);
}