#include<stdio.h>
int tail(int n)
{
    if(n < 1)
    return 1;
    printf("%d ",n);
    return tail(n-1);
}
int main()
{
    tail(5);
}