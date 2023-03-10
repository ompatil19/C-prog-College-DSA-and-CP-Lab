#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
    int top;
    unsigned capacity;
    int* arr;
}; typedef struct stack* S;

S create_stack(int capacity){
    S s1;
    s1=(S)malloc(sizeof(struct stack));
    if(!s1) return NULL;
    s1->top=-1;
    s1->capacity=capacity;
    s1->arr=(int*)malloc(s1->capacity*sizeof(int));
    if(!s1->arr) return NULL;
    return s1;
}
int isEmpty(S s1){
    return s1->top==-1;
}
int isoperand(char ch){
    return (ch>='0' && ch<='9');
}
void push(S s1,char op){
    return s1->arr[++s1->top]=op;
}
char pop(S s1){
    if(!isEmpty)
    return s1->arr[s1->top--];
}
char peek(S s1){
    return s1->arr[s1->top];
}
int prec(char ch){
    switch (ch)
    {
    case'+': case'-':return 1;
    case'*': case'/':return 2;
    case'^': return 3;
    
}
return -1;
}
int InToPo(char *exp){
    int i=0,k=-1;
    char postfix[25];
    S s1=create_stack(strlen(exp));
    printf("Infix Expression is %s \n",exp);
    for(i=0;exp[i];++i){
        if(isoperand(exp[i])){
            postfix[++k]=exp[i];
        }
        else if(exp[i]=='(')
        push(s1,exp[i]);
        else if(exp[i]==')'){
            while(!isEmpty(s1) && peek(s1)!='('){
            postfix[++k]=pop(s1);
            if(peek(s1)=='(')
            pop(s1);
            }
        }
        else{
            while(!isEmpty(s1) && prec(exp[i]<=prec(peek(s1))))
            postfix[++k]=pop(s1);
            push(s1,exp[i]);
        }
    }
    postfix[++k]=pop(s1);
    postfix[++k]='\0';
    printf("Postfix Expression is %s\n",postfix);
    //evaluation of postfix
    
}