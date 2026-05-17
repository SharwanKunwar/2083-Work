#include <stdio.h>

int q[5], f = -1, r = -1;

void enqueue(int x)
{
    if (r == 4)
        printf("Overflow");
    else
    {
        if (f == -1)
            f = 0;
        q[++r] = x;
    }
}

void dequeue()
{
    if (f == -1 || f > r)
        printf("Underflow");
    else
        printf("Deleted = %d", q[f++]);
}

int main()
{
    enqueue(10);
    enqueue(20);
    dequeue();
}