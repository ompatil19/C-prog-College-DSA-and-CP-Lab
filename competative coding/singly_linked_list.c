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
N Insert_rear(int item,N first){
    N t,c;
    t=(N) malloc(sizeof(struct node));
    t->info=item;
    t->link=NULL;
    if(first==NULL){
        return t;
    }
    c=first;
    while(c->link!=NULL){
        c=c->link;
    }
    c->link=t;
    return first;
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
N delete_front(N first){
    N t;
    if(first==NULL){
    return first;
    }
    first=first->link;
    return first;
}
N delete_rear(N first){
    N t;
    if(first==NULL){
        printf("List is empty");
        return first;
    }
    if(first->link==NULL){
        first=NULL;
        return first;
    }
    t=first;
    while((t->link)->link!=NULL){
        t=t->link;
    }
    t->link=NULL;
    return first;
}
N sorted_insert(int item, N first){
    N t,c,p;
    t=(N) malloc(sizeof(struct node));
    t->info=item;
    t->link=NULL;
    c=first;
    while(c!=NULL && c->info<t->info){
        p=c;
        c=c->link;
    }
    if(p==NULL){
        t->link=c;
        first=t;
    }
    p->link=t;
    t->link=c;
    return first;
}
int main(){
    N first;
    int choice,item;
    first=NULL;
    for(;;){
        printf("!.Insert Front 2.Insert Rear 3.Delete front 4.delete rear 5.display \n");
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
            first=Insert_rear(item,first);
            break;
            case 3:
            first=delete_front(first);
            break;
            case 4:
            first=delete_rear(first);
            break;
            case 5:
            display(first);
            break;
        }
    }
    return 0;
}