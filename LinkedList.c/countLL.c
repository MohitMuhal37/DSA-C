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

void count(struct node *p)
{
    
}