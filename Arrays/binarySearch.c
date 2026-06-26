#include<stdio.h>

int binarySearch(int *a,int key,int l, int h)
{
    while(l <= h)
    {
        int mid = (l + h) / 2;
        if(key == a[mid])
        {
            return mid;
        }
        else if(key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int key = 60;
    int l = 0;
    int length = 10;
    int h = length-1; 
    printf("key found at %dth index ", binarySearch(a,key,l,h));
}