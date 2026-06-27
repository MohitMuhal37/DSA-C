#include<stdio.h>

void main()
{
    int a[11] = {1,2,3,4,5,6,8,9,10,11};
    int sum = 0;
    int s = 0;
    int res;
    for(int i = 0; i < 11; i++)
    {
        sum = sum+a[i];
    }
        s = 11*(11+1)/2;
        res = s-sum;
        printf("%d ",res);
}