// Evaluate Prefix Expression

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int stack[20], top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[] = "-+7*45+20";
    int i, a, b;

    for (i = strlen(exp) - 1; i >= 0; i--)
    {
        if (isdigit(exp[i]))
            push(exp[i] - '0');
        else
        {
            a = pop();
            b = pop();

            switch (exp[i])
            {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                push(a / b);
                break;
            }
        }
    }

    printf("Result = %d", pop());

    return 0;
}