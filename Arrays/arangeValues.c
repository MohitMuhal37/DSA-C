#include<stdio.h>

int main()
{
    int i = 0; 
    int length = 8;
    int j = length-1;
    int a[8] = {1,2,3,4,-4,-3,-2,1};
    while(i < j)
    {
        while(a[i] < 0){i++;}
        while(a[j] > 0){j--;}
        if(i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for(int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}