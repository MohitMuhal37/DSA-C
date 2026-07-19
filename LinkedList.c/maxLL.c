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

    for(i = 1; i < n; i++)
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

// find maximum in list
int maxLL(struct node *p)
{
        int m = -32568;
        while(p)
        {
            if(p->data >= m )
            {
                m = p->data;
            }
            p=p->next;
        }  
        return m; 
}

int main()
{
    int a[] = {10,30,2,45,6};
    create(a,5);
    show(p);
    printf("%d \n",maxLL(p));
}