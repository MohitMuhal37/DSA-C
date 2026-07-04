#include<stdio.h>

void gfg(int x)
{
    printf("%d ", x);
    if(x <= 2)
    {
        gfg(x+1);
    }
    printf("%d ",x);
}

int main()
{
    long long a = 0;
    for(long long i = 0 ; i < 100000000000000; i++)
    {
      a = a + i;
    }
    printf("%lld ", a);
    // printf("hello");
    return 0;
}
