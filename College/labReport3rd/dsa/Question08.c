#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50}, i;

    printf("List Elements:\n");

    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}