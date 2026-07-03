#include <stdio.h>
int main()
{
    int i;
    int word = 1;
    char a[] = "Hello Mr. Pool how are you";
    for(i = 0; i < a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
        {
            word++;
        }
    }
    printf("%d ",word);
    return 1;
}