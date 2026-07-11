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
    struct node *t, *l;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = a[0];
    p->next = NULL;
    l=p;

    for(i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        l->next = t;
        l = t;
    }
}

void disp(struct node *p)
{
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p -> next;
    }
}
int main()
{
    int a[] ={10,20,30,40,50};
    create(a,6);
    disp(p);
}