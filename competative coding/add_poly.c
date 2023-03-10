#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
    int coef;
    int expo;
    struct node* link;
};typedef struct node*N;

N insert_rear(int coef,int expo,N first){
    N t,c;
    t=(N) malloc(sizeof(struct node));
    t->coef=coef;
    t->expo=expo;
    t->link=NULL;
    if(first==NULL){
        return t;
    }
    c=first;
    while(c->link!=0){
        c=c->link;
    }
    c->link=t;
    return first;
}
N rpoly(N first){
    int coeff,expo;
    N c;
    printf("Enter -0 to end the polynomial");
    while(1){
        printf("Enter the coefficient ");
        scanf("%d",&coeff);
        if(coeff== -0){
            break;
        }
        printf("Enter the exponent");
        scanf("%d",&expo);
        first=insert_rear(coeff,expo,first);
    }
    return first;
}
N add_poly(N a,N b){
    N c=NULL;
    int coef;
    while(a!=NULL && b!=NULL){
        if(a->expo==b->expo){
            coef=a->coef+b->coef;
            c=insert_rear(coef,a->expo,c);
            a=a->link;
            b=b->link;
            continue;
        }
        if(a->expo < b->expo){
            c=insert_rear(b->coef,b->expo,c);
            b=b->link;
            continue;
        }
        if(a->expo > b->expo){
            c=insert_rear(a->coef,a->expo,c);
            a=a->link;
            continue;
        }
    }
    while(a!=NULL){
        c=insert_rear(a->coef,a->expo,c);
        a=a->link;
    }
    while(b!=NULL){
        c=insert_rear(b->coef,b->expo,c);
        b=b->link;
    }
    return c;
}
void display(N first){
    if(first==NULL){
        printf("Polynomial does not exist");
        return;
    }
    N c=first;
    while(c!=NULL){
        printf("%d....%d\n",c->coef,c->expo);
        c=c->link;
    }
}