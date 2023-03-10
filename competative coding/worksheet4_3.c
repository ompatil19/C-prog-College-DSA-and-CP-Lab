#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node 
{
    int info;
    struct node* link;
};typedef struct node*N;

N pos_neg(N first){
    N pos,neg,c;
    pos=NULL,neg=NULL;
    while(first!=NULL){
        c=first;
        first=first->link;
        if(c->info>0){
            c->link=pos;
            pos=c;
        }
        else{
            c->link=neg;
            neg=c;
        }
    }
}