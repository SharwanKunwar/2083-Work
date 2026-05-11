// Infix to Prefix

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int priority(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

// String Reverse Function
void reverse(char s[])
{
    int i, j;
    char t;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main()
{
    char infix[20] = "(A-B/C)*(A/K-L)";
    char temp[20];
    int i, j = 0;

    reverse(infix);

    for (i = 0; infix[i]; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i]; i++)
    {

        if (isalnum(infix[i]))
            temp[j++] = infix[i];

        else if (infix[i] == '(')
            push(infix[i]);

        else if (infix[i] == ')')
        {
            while (stack[top] != '(')
                temp[j++] = pop();
            pop();
        }

        else
        {
            while (top != -1 &&
                   priority(stack[top]) >= priority(infix[i]))
                temp[j++] = pop();

            push(infix[i]);
        }
    }

    while (top != -1)
        temp[j++] = pop();

    temp[j] = '\0';

    reverse(temp);

    printf("Prefix = %s", temp);

    return 0;
}