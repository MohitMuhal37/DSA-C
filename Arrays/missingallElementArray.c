#include<stdio.h>

void main()
{
    int a[11] = {1,2,3,4,5,6,8,11};
    int diff = 1 - 0;
    for(int i = 0; i < 11; i++)
    {
        if(a[i] - i != diff)
        {
            while(diff < a[i]-i)
            {
                printf("%d ",i+diff);
                diff++;
            }
        }
    }
}