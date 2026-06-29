#include<stdio.h>
void main()
{
    int i = 0;int j = 5-1;
    int a[5] = {2,4,6,8,12};
    int k = 10;
    while(i < j)
    {
        if(a[i] + a[j] == k)
        {
            printf("%d + %d = %d \n",a[i],a[j],k);
            i++;
            j--;
        }
        else if(a[i]+a[j] < k)
        {
            i++;
        }else
        {
            j--;
        }
    }
}