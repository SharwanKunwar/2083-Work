#include <stdio.h>

int q[5], f = -1, r = -1;

void enqueue(int x)
{
    if ((r + 1) % 5 == f)
        printf("Overflow");
    else
    {
        if (f == -1)
            f = 0;
        r = (r + 1) % 5;
        q[r] = x;
    }
}

void dequeue()
{
    if (f == -1)
        printf("Underflow");
    else
    {
        printf("Deleted = %d", q[f]);

        if (f == r)
            f = r = -1;
        else
            f = (f + 1) % 5;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    dequeue();
}