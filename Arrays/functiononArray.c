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

int main()
{
    int a[10] = {10,32,45,43,65,76,77,56,40,87};
    printf("%d \n",get(a, 5));
    printf("%d ",set(a, 5, 445));
}