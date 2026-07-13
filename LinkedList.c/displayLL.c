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

void recDisp(struct node *p)
{
    if(p != NULL)
    {
        printf("%d ", p->data);
        recDisp(p->next);
    }
}
void revRecDisp(struct node *p)
{
    if(p != NULL)
    {
        revRecDisp(p->next);
        printf("%d ", p->data);
    }
}

void main()
{
    int a[] = {10,32,4,5,67,54};
    create(a,6);
    revRecDisp(p);
}