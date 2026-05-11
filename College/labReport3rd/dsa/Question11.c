#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL, *r = NULL;

void enqueue(int x)
{
    struct node *n = malloc(sizeof(struct node));
    n->data = x;
    n->next = NULL;

    if (r == NULL)
        f = r = n;
    else
    {
        r->next = n;
        r = n;
    }
}

void dequeue()
{
    if (f == NULL)
        printf("Underflow");
    else
    {
        printf("Deleted = %d", f->data);
        f = f->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    dequeue();
}