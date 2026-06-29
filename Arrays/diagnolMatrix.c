#include<stdio.h>

int set(int *a, int i, int j, int k)
{
    if(i == j)
    return a[i-1] = k;
}

int get(int *a, int i, int j)
{
    if(i == j) return a[i-1];
    else return 0;
}

void display(int *m)
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j)
            printf("%3d ", m[i]);
             else
                printf(" 00 ");
        }
        printf("\n");
    }
}


void main()
{
    int a[5];
    int m[5][5];
    // set(a,0,0,10);
    set(a,1,1,20);
    set(a,2,2,30);
    set(a,3,3,40);
    set(a,4,4,50);
    set(a,5,5,60);
    display(a);
}