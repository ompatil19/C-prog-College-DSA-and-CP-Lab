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
}
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
void decimal_to_binary(int decimal) {
    while (decimal > 0) {
        int remainder = decimal % 2;
        push(remainder);
        decimal /= 2;
    }
    printf("Binary representation: ");
    while (top >= 0) {
        printf("%d", pop());
    }
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimal_to_binary(decimal);

    return 0;
}
