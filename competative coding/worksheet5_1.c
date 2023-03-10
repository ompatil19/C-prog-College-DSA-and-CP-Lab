#include <stdio.h>
int array[20];
int top1 = -1;
int top2 = 20;

void push1(int data)
{

    if (top1 < top2 - 1)
    {
        top1++;
        array[top1] = data;
    }
    else
    {
        printf("stack is full");
    }
}

void push2(int data)
{
    if (top1 < top2 - 1)
    {
        top2--;
        array[top2] = data;
    }
    else
    {
        printf("stack is full \n");
    }
}

void pop1()
{

    if (top1 >= 0)
    {
        int popped = array[top1];
        top1--;

        printf("%d is being popped from stack 1\n", popped);
    }
    else
    {
        printf("stack is empty \n");
    }
}

void pop2()
{

    if (top2 < 20)
    {
        int popped = array[top2];
        top2--;

        printf("%d is being popped from Stack 1\n", popped);
    }
    else
    {
        printf("stack is empty!\n");
    }
}

void display_stack1()
{
    int i;
    for (i = top1; i >= 0; --i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void display_stack2()
{
    int i;
    for (i = top2; i < 20; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int ar[20];
    int i;
    int num;

    for (i = 1; i <= 10; ++i)
    {
        push1(i);
        printf("Value Pushed in Stack 1 is %d\n", i);
    }

    for (i = 11; i <= 20; ++i)
    {
        push2(i);
        printf("Value Pushed in Stack 2 is %d\n", i);
    }

    display_stack1();
    display_stack2();

    printf("Pushing Value in Stack 1 is %d\n", 11);
    push1(11);

    num = top1 + 1;
    while (num)
    {
        pop1();
        --num;
    }

    pop1();

    return 0;
}