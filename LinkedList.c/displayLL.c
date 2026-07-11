#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*p = NULL;
//Now create a global pointer;


//creating linledlist

void create(int a[], int n)
{
    int i;
    struct node *t, *l;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = a[0];
    p->next = NULL;
    l = p;

    // create other node using for loop
    for(int i = 1; i < n; i++)
    {
            t = (struct node*)malloc(sizeof(struct node));
            t->data = a[i];
            t->next = NULL;
            l->next = t;
            l=t;

    }
}

void display(struct node *p)
{
    while(p != NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int a[] = {3,4,5,6,7,87};
    create(a,6);
    display(p);
}