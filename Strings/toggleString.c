#include<stdio.h>

void main()
{
    int i;
    char a[] = "Mohit Muhal";
    for(i = 0; i < a[i] != '\0'; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        } 
        else if(a[i] >= 97 && a[i] <= 122)
        {
            a[i] -= 32;
        }
    }
    printf(a);
}