#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE], top = -1;
void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = element;
    printf("%d pushed to stack\n", element);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void insert_at_bottom(int element) {
    if (top == -1) {
        push(element);
        return;
    }

    int temp = pop();
    insert_at_bottom(element);
    push(temp);
}

int main() {
    push(11);
    push(22);
    push(34);
    push(46);
    push(59);
    int element;
    printf("Enter the element to insert at the bottom of the stack: ");
    scanf("%d", &element);
    insert_at_bottom(element);
    printf("%d inserted at the bottom of the stack\n", element);
    return 0;
}
