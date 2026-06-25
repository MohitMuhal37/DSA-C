#include<stdio.h>
int head(int n)
{
    if(n < 1)
    return 1;
    head(n-1);
    printf("%d ",n);
}
int main()
{
    head(5);
    return 0;
}