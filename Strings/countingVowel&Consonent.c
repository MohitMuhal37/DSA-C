#include<stdio.h>
void main()
{
    int i, cconst = 0, vowel = 0;
    char a[] = "Hi Pool how are you";
    for(i = 0; i < a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || 
        a[i] == 'o' || a[i] == 'u')
        {
            vowel++;
        }
        else if((a[i] >= 65 && a[i] <= 90) ||(a[i] >= 97 && a[i] <= 122))
        {
            cconst++;
        }
    }
    printf("Vowels are = %d ",vowel);
    printf("Constants are = %d ",cconst);
}