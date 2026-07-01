#include<stdio.h>
#include<string.h>

//Create User define fnx of Strcpy
void myStrxpy(char *T, char *S)
{
    while(*T++ = *S++);
} 

void main()
{
    char s[] = "Mohit";
    char t[10];
    char S[] = "Max";
    char T[5];
    strcpy(t,s);
    myStrxpy(T,S);
    printf("%s ",T);
}