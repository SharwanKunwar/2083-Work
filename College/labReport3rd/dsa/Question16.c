#include <stdio.h>

int linear(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}

int binary(int a[], int l, int h, int key)
{
    while (l <= h)
    {
        int m = (l + h) / 2;

        if (a[m] == key)
            return m;
        else if (a[m] < key)
            l = m + 1;
        else
            h = m - 1;
    }
    return -1;
}

// BST search (Tree search)
struct node
{
    int data;
    struct node *l, *r;
};

struct node *search(struct node *root, int key)
{
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->l, key);

    return search(root->r, key);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    printf("%d\n", linear(a, 5, 3));
    printf("%d\n", binary(a, 0, 4, 3));
}