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

int insertLL(int pos, int element)
{
    struct node *v, *n;
    if(pos == 0)
    {
        v = (struct node *)malloc(sizeof(struct node)); 
        v->data = element;
        v->next = p;
        p=v;
    }
    else if(pos > 0)
    {
        n = p;
        for(int i = 0; i < pos-1 && n; i++)
        {
            p = p -> next;
        }
        if(p)
        {
            v = (struct node *)malloc(sizeof(struct node)); 
            v->data = element;
            v->next = p->next;
            p->next = v;
        }
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

void main()
{
    int a[] = {10,32,4,5,67,54};
    create(a,6);
    // insertLL(4,56);
    recDisp(p);
}