#include<stdio.h>

int validate(char *a)
{
    int i;
    for(i = 0; i < a[i] != '\0'; i++)
    {
        if(!(a[i] >= 65 && a[i] <= 90) &&
            !(a[i] >= 97 && a[i] <= 122)&&
            !(a[i] >=48 && a[i] <= 57))
            {
                return 0;
            }
    }
    return 1;
}

void main()
{
    char *a = "Mohit21131";
    if(validate(a))
    {
        printf("String is Validate");
    }
    else
    {
        printf("Not Validate");
    }
}