Here are some stack examples in C using arrays and structures:


---

✅ 1. Stack using Array

#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

// Push function
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Popped: %d\n", pop());
    display();

    return 0;
}


---

✅ 2. Stack using Structure

#include <stdio.h>
#define MAX 50

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

void push(Stack *s, int value) {
    if (s->top == MAX - 1)
        printf("Stack Overflow\n");
    else
        s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return s->data[(s->top)--];
    }
}

void display(Stack s) {
    printf("Stack: ");
    for (int i = s.top; i >= 0; i--)
        printf("%d ", s.data[i]);
    printf("\n");
}

int main() {
    Stack s;
    init(&s);

    push(&s, 5);
    push(&s, 15);
    push(&s, 25);
    display(s);

    printf("Popped: %d\n", pop(&s));
    display(s);

    return 0;
}


---

Would you like an example of stack using linked list too?

