#include <stdio.h>

void bubble(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

void selection(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;

        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}

void insertion(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void quick(int a[], int l, int h)
{
    if (l < h)
    {
        int i = l, j = h, p = a[l], t;
        while (i < j)
        {
            while (a[i] <= p)
                i++;
            while (a[j] > p)
                j--;
            if (i < j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        t = a[l];
        a[l] = a[j];
        a[j] = t;

        quick(a, l, j - 1);
        quick(a, j + 1, h);
    }
}

void merge(int a[], int l, int m, int h)
{
    int b[20], i = l, j = m + 1, k = 0;

    while (i <= m && j <= h)
        b[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

    while (i <= m)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];

    for (i = l, k = 0; i <= h; i++, k++)
        a[i] = b[k];
}

void sort(int a[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        sort(a, l, m);
        sort(a, m + 1, h);
        merge(a, l, m, h);
    }
}

void heap(int a[], int n, int i)
{
    int l = 2 * i + 1, r = 2 * i + 2, lg = i, t;
    if (l < n && a[l] > a[lg])
        lg = l;
    if (r < n && a[r] > a[lg])
        lg = r;

    if (lg != i)
    {
        t = a[i];
        a[i] = a[lg];
        a[lg] = t;
        heap(a, n, lg);
    }
}

void heapsort(int a[], int n)
{
    int t;
    for (int i = n / 2 - 1; i >= 0; i--)
        heap(a, n, i);

    for (int i = n - 1; i > 0; i--)
    {
        t = a[0];
        a[0] = a[i];
        a[i] = t;
        heap(a, i, 0);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[] = {5, 2, 4, 1}, n = 4;

    bubble(a, n);
    print(a, n);
    selection(a, n);
    print(a, n);
    insertion(a, n);
    print(a, n);

    quick(a, 0, n - 1);
    print(a, n);

    sort(a, 0, n - 1);
    print(a, n);

    heapsort(a, n);
    print(a, n);
}