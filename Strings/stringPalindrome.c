#include<stdio.h>
void main()
{
    int i,j;
    int palin = 1;
    char a[] = "madam";
    for(i = 0, j = 5-1; i < j; i++, j--)
    {
        if(a[i] != a[j])
        {
            palin = 0;
            break;
        }
    }
      if(palin)
        {
             printf("Palindrome");
        }
        else
        {
             printf("Not Palindrome");
        }
}