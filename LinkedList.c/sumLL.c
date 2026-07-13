#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*p = NULL;

void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = a[0];
    p->next = NULL;
    last = p;

    for(i = 1; i < n; i++)
    {
         t = (struct node *)malloc(sizeof(struct node));
         t->data = a[i];
         t->next = NULL;
         last->next = t;
         last = t;
    }
}

// Sum Function
int sum(struct node *p)
{
    int sum = 0;
    while(p != NULL)
    {
        sum += p->data;
        p = p -> next;
    }
    return sum;
}

void disp(struct node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void main()
{
    int a[] = {10, 20};
    create(a,2);
    printf("So count is = %d\n",sum(p));
    disp(p);
}