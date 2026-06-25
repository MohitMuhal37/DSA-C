#include<stdio.h>

void insert(int index,int element,int length,int *a)
{
    int i;
    for(i = length; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = element;
    length++;
    
    for(i = 0; i < length; i++)
    {
        printf("%d ",a[i]);
    }
}

void main()
{
    int a[10] = {10,20,30,40,50,60};
    int length = 6;
    insert(4,15,length,a);
}