#include<stdio.h>

int get(int *a, int index)
{
    if(index >= 0 && index < 9)
    {
        return a[index];
    }
    return 1;
}

int set(int *a, int index, int element)
{
      if(index >= 0 && index < 9)
    {
        return a[index] = element;
    }
    return 1;
}

int max(int *a)
{
    int i;
    int max;
    max = a[0];
    for(i = 0; i < 10; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        return max;
    }
    return -1;
}

int sum(int *a)
{
    int total = 0;
    for(int i = 0; i < 9; i++)
    {
        total = total + a[i];
    }
    return total;
}

int avg(int *a, int n)
{
    int total = 0;
    for(int i = 0; i < 9; i++)
    {
        total = total + a[i];
    }
    return total / n;
}

int main()
{
    int a[10] = {10,32,45,43,65,76,77,56,40,87};
    printf("%d \n",get(a, 5));
    printf("%d \n",set(a, 5, 445));
    printf("%d \n",sum(a));
    printf("%d ",avg(a,10));
}