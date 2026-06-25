#include<stdio.h>
int pows(int m,int n)
{
    if(n <= 0)
    return 1;
    return pows(m, n-1)*m;
}
int main()
{
    printf("%d ",pows(2,5));
    return 0;
}