#include<stdio.h>
void main()
{
    int i;
    char a[] = "MOHIT MUHAL";
    for(i = 0; i < a[i] != '\0' && a[i] == ' '; i++)
    {
            a[i] = ' ';
        a[i] += 32;
    }
    printf(a);
}