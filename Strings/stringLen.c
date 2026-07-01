#include<stdio.h>
#include<string.h>

// User define fnx of strlen
int myLen(char *T)
{
    int len = 0;
    while(*T != '\0')
    {
        T++;
        len++;
    }
    return len;
}

void main()
{
    char a[] = "Max";
    char T[] = "Maximus";
    printf("%d ",strlen(a));
    printf("%d ",myLen(T));
}