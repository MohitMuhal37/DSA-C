#include<stdio.h>

int isSorted(int *a)
{
    int i;
     for(int i = 0; i < 6; i++)
    {
        if(a[i+1] < a[i])
        {
            return 0;
        }
          return 1;
    }
}

 int main()
{
    int a[6] = {10,2,30,40,50,60};
   
    printf("%d ",isSorted(a));
}