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

void reverse_first_k_elements(int k) {
    int temp_stack[k], i;
    for (i = 0; i < k; i++) {
        temp_stack[i] = pop();
    }
    for (i = k - 1; i >= 0; i--) {
        push(temp_stack[i]);
    }
}

int main() {
    int k;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    reverse_first_k_elements(k);
    printf("First %d elements of stack reversed\n", k);
    return 0;
}
