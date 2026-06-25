#include<stdio.h>


int b(int n){
    if(n < 1)
    return 1;
    printf("%d ",n);
    b(n-2);
}

int a(int n){
    if(n < 1)
    return 1;
    printf("%d ", n);
    a(n-2);
    b(n-1);
    printf("%d ",n);
}

int main()
{
    a(5);
    return 0;
}