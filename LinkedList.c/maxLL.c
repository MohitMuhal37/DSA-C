#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;  /* data */
}*p = NULL;

void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = a[0];
    p->next = NULL;
    last  = p;

    for(i = 0; i < n; i++)
    {
         t = (struct node *) malloc(sizeof(struct node));
         t->data = a[i];
         t->next = NULL;
         last -> next = t;
         last = t;
    }
}

void show(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    int a[] = {10,30,2,45,6};
    create(a,5);
    show(p);
}