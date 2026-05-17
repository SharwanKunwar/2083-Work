#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x)
{
    struct node *n = malloc(sizeof(struct node));
    n->data = x;
    n->next = top;
    top = n;
}

void pop()
{
    if (top == NULL)
        printf("Underflow");
    else
    {
        printf("Deleted = %d", top->data);
        top = top->next;
    }
}

int main()
{
    push(10);
    push(20);
    pop();
}