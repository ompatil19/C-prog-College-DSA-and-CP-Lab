#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct stack{
    int top;
    unsigned capacity;
    int* array;
};typedef struct stack* s;
s createstack(int capacity){
    s s1=(s)malloc(sizeof(struct stack));
    if(!s1) return NULL;
    s1->capacity=capacity;
    s1->top=-1;
    s1->array=(int*)malloc(capacity*sizeof(int));
    if(!s1->array) return NULL;
    return s1;
}
int isempty(s s1){
    return s1->top==-1;
}
char peek(s s1){
    return s1->array[s1->top];
}
char pop(s s1){
    return s1->array[s1->top--];
}
void push(s s1,char op){
    s1->array[++s1->top]=op;
}
int isoperand(char ch){
    return (ch>='0' && ch<='9');
}
int prec(char ch){
    switch(ch){
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        case '^':return 3;
    }
    return -1;
}
int infix_to_postfix(char* exp){
    s s1;
    char postfix[25];
    s1=createstack(strlen(exp));
    int i,k;
    for(i=0;k=-1;exp[i],++i){
        if(isoperand(exp[i])){
            postfix[++k]=exp[i];
        }
        else if(exp[i]=='('){
            push(s1,exp[i]);
        }
        else if(exp[i]==')'){
            while(!isempty(s1) && peek(s1)!='('){
                postfix[++k]=pop(s1);
            }
            if(peek(s1)=='('){
                pop(s1);
            }
        }
        else{
            while(!isempty(s1) && prec(exp[i])<=prec(s1))
            postfix[++k]=pop(s1);
        push(s1,exp[i]);
        }
    }
    postfix[++k]=pop(s1);
    postfix[++k]='\0';
    
}