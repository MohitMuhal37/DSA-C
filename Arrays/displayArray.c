#include<stdio.h>
void main()
{
    int length = 6;
    int a[10] = {10,20,30,40,50,60};
    a[length] = 34;
    length++;
    for(int i = 0; i < length; i++)
    {
        printf("%d ",a[i]);  
    }
}