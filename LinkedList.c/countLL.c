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

int count(struct node *p)
{
    int c = 0;
    while(p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
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
    int a[] = {89, 54, 76, 90, 32};
    create(a,5);
    printf("So count is = %d\n",count(p));
    disp(p);
}