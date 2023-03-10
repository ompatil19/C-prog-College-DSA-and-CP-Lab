#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
    int info;
    struct node* link;
};typedef struct node*N;

N Insert_front(int item,N first){
    N t;
    t=(N) malloc(sizeof(struct node));
    t->info=item;
    t->link=first;
    return t;
}
N Insert_front_merge(N co,N first){
    co->link=first;
    return co;
}
void display(N first){
    if(first==NULL){
        printf("List is empty");
        return;
    }
    N c=first;
    while(c!=NULL){
        printf("%d\n", c->info);
        c=c->link;
    }
    printf("\n");
}
N merge(N head1,N head2){
    while(head2){
        N temp=head1;
        while(temp){
            if(temp==head2)
            return head2;
            temp=temp->link;
        }
        head2=head2->link;
    }
    return NULL;
}
int main(){
    N first,first1,m,co;
    int choice,item;
    first=NULL;
    m=NULL;
    first1=NULL;
    co=(N) malloc(sizeof(struct node));
    co->info=290;
    for(;;){
        printf("1.Insert Front 2.insert front second list 3.merge finder 5.display \n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the item to be inserted");
            scanf("%d",&item);
            first=Insert_front(item,first);
            break;
            case 2:
            printf("Enter the item to be inserted");
            scanf("%d",&item);
            first=Insert_front(item,first);
            break;
            case 3:
            m=merge(first,first1);
            printf("%u",m);
            break;
            case 5:
            display(m);
            break;
        }
    }
    return 0;
}