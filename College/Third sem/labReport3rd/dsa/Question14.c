#include <stdio.h>

#define SIZE 10

int h[SIZE];

void init()
{
    for (int i = 0; i < SIZE; i++)
        h[i] = -1;
}

void insert(int key)
{
    int i = key % SIZE;

    while (h[i] != -1)
        i = (i + 1) % SIZE;

    h[i] = key;
}

void display()
{
    for (int i = 0; i < SIZE; i++)
        printf("%d -> %d\n", i, h[i]);
}

int main()
{
    init();

    insert(23);
    insert(43);
    insert(13);
    insert(27);

    display();
}