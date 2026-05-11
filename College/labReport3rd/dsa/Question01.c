// ============================================
// Stack Implementation Using Array in C
// ============================================

#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push Operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop Operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Display Stack
void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack Elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main Function
int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}