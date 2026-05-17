#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key, height;
    struct node *l, *r;
};

int h(struct node *n)
{
    return n ? n->height : 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

struct node *new(int k)
{
    struct node *n = malloc(sizeof(struct node));
    n->key = k;
    n->l = n->r = NULL;
    n->height = 1;
    return n;
}

struct node *right(struct node *y)
{
    struct node *x = y->l;
    struct node *t = x->r;

    x->r = y;
    y->l = t;

    y->height = max(h(y->l), h(y->r)) + 1;
    x->height = max(h(x->l), h(x->r)) + 1;

    return x;
}

struct node *left(struct node *x)
{
    struct node *y = x->r;
    struct node *t = y->l;

    y->l = x;
    x->r = t;

    x->height = max(h(x->l), h(x->r)) + 1;
    y->height = max(h(y->l), h(y->r)) + 1;

    return y;
}

int bal(struct node *n)
{
    return n ? h(n->l) - h(n->r) : 0;
}

struct node *insert(struct node *r, int k)
{
    if (!r)
        return new(k);

    if (k < r->key)
        r->l = insert(r->l, k);
    else if (k > r->key)
        r->r = insert(r->r, k);
    else
        return r;

    r->height = 1 + max(h(r->l), h(r->r));

    int b = bal(r);

    if (b > 1 && k < r->l->key)
        return right(r);
    if (b < -1 && k > r->r->key)
        return left(r);
    if (b > 1 && k > r->l->key)
    {
        r->l = left(r->l);
        return right(r);
    }
    if (b < -1 && k < r->r->key)
    {
        r->r = right(r->r);
        return left(r);
    }

    return r;
}

void inorder(struct node *r)
{
    if (r)
    {
        inorder(r->l);
        printf("%d ", r->key);
        inorder(r->r);
    }
}

int main()
{
    struct node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);

    inorder(root);
}