// Infix to Postfix

#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int pr(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[] = "A+B*C", post[20];
    int i, j = 0;

    for (i = 0; exp[i]; i++)
    {

        if (isalnum(exp[i]))
            post[j++] = exp[i];

        else
        {
            while (top != -1 && pr(stack[top]) >= pr(exp[i]))
                post[j++] = pop();

            push(exp[i]);
        }
    }

    while (top != -1)
        post[j++] = pop();

    post[j] = '\0';

    printf("Postfix = %s", post);

    return 0;
}