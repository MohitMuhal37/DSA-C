#include<stdio.h>
void main()
{
    int a[10] = {2,7,3,6,4,8,1,9,10,32};
    int i;
    int j;
    int k = 10;
    for(i = 0; i < 10-1; i++)
    {
        for(j = i+1; j < 10; j++)
        {
            if(a[i] + a[j] == k)
            printf("%d + %d = %d \n",a[i],a[j], k);
        }
    }
}