// Factorial, Fibonacci, Palindrome, GCD, Tower of Hanoi

#include <stdio.h>

// Factorial
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

// Fibonacci
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// Palindrome
int rev(int n, int r)
{
    if (n == 0)
        return r;
    return rev(n / 10, r * 10 + n % 10);
}

// GCD
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Tower of Hanoi
void toh(int n, char s, char a, char d)
{
    if (n == 1)
    {
        printf("%c->%c\n", s, d);
        return;
    }
    toh(n - 1, s, d, a);
    printf("%c->%c\n", s, d);
    toh(n - 1, a, s, d);
}

int main()
{
    printf("Fact: %d\n", fact(5));
    printf("Fib: %d\n", fib(6));

    int n = 121;
    printf("Palindrome: %s\n",
           n == rev(n, 0) ? "Yes" : "No");

    printf("GCD: %d\n", gcd(12, 18));

    toh(3, 'A', 'B', 'C');
}