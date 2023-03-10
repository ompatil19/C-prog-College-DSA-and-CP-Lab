#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node* llink;
    struct node* rlink;
}; typedef struct node* N;
N insert_front(N first){
    N t;
    printf("Enter the item you want to insert");
    t=(N) malloc(sizeof(struct node));
    scanf("%d",&t->info);
    if(first==NULL){
        t->llink=NULL;
        t->rlink=NULL;
        return t;
    }
    t->llink=NULL;
    t->rlink=first;
    first->llink=t;
    first=t;
    return first;
}
N insert_left(int item,N first){
    N t,c,p;
    if(first==NULL){
        printf("List does not exist");
        return first;
    }
    c=first;
    while(c!=NULL){
        if(c->info==item){
            break;
        }
        c=c->rlink;
    }
    if(c==NULL){
        printf("Item not found");
        return first;
    }
    if(c==first){
        t=(N) malloc(sizeof(struct node));
        printf("Enter the item to be added");
        scanf("%d", &t->info);
        t->rlink=c->llink;
        t->llink=NULL;
        c->llink=t;
        first=t;
        return first;
    }
    p=c->llink;
    t=(N) malloc(sizeof(struct node));
    printf("Enter the item to be added");
    scanf("%d", &t->info);
    p->rlink=t;
    t->llink=p;
    t->rlink=c;
    c->llink=t;
    return first;
}
N delete_item(int item,N first){
    N t,c,p,n;
    if(first==NULL){
        printf("List does not exist");
        return first;
    }
    c=first;
    while(c!=NULL){
        if(c->info==item)
        break;
        c=c->rlink;
    }
    if(c==NULL){
        printf("item not found");
        return first;
    }
    p=c->llink;
    if(p==NULL){
        first=c->rlink;
        return first;
    }
    n=c->rlink;
    p->rlink=n;
    n->llink=p;
    return first;
}
void display(N first){
    if(first==NULL){
        printf("List is empty");
        return;
    }
    N c;
    c=first;
    while(c!=NULL){
        printf("%d\n",c->info);
        c=c->rlink;
    }

}
N delete_front(N first){
    N c;
    if(first==NULL){
        printf("List does not exist");
    }
    first=first->rlink;
    first->llink=NULL;
    return first;
}
N delete_rear(N first){
    N n,c,p;
    if(first=NULL){
        printf("List is empty");
        return first;
    }
    if(first->rlink==NULL){
        first=NULL;
        return first;
    }
    c=first;
    if(c->rlink!=NULL){
        c=c->rlink;
    }
    p=c->llink;
    p->rlink=NULL;
    return first;
}
N insert_right(int item,N first){
    N t,n,c;
    t=(N)malloc(sizeof(struct node));
    t->rlink=NULL;
    if(first==NULL){
        printf("List is empty");
        return first;
    }
    c=first;
    while(c!=NULL){
        if(c->info==item){
            break;
        }
        c=c->rlink;
    }
    if(c==NULL){
        printf("item not found");
        return first;
    }
    n=c->rlink;
        printf("Enter the item you wan to enter");
        scanf("%d",&t->info);
    if(n==NULL){
        c->rlink=t;
        t->llink=c;
        return first;
    }
    t->rlink=n;
    n->llink=t;
    t->llink=c;
    c->rlink=t;
    return first;
}
N reverse_list(N first){
    if(first==NULL){
        printf("List is empty");
        return first;
    }
    N c,t;
    c=first;
    while(c->rlink!=NULL){
        c=c->rlink;
    }
    if(c==first){
        return first;
    }
    return c;
}
void display_reverse(N first){
        if(first==NULL){
        printf("List is empty");
        return;
    }
    N c;
    c=first;
    while(c!=NULL){
        printf("%d\n",c->info);
        c=c->llink;
    }
}
N delete_middle(N first){
    N t,c,ne,p;
    int n=0;
    if(first==NULL){
        printf("List is empty");
        return first;
    }
    c=first;
    while(c->rlink!=0){
        n++;
        c=c->rlink;
    }
    if(c==first){
        first=NULL;
        return first;
    }
    c=first;
    n=n/2;
    while(n>0){
        c=c->rlink;
        n--;
    }
    p=c->llink;
    ne=c->rlink;
    p->rlink=ne;
    ne->llink=p;
    return first;
}
void main(){
    N first=NULL;
    int choice,item;
    for(;;){
        printf("1. insert front 2.insert left 3.insert right \n 4.delete-info 5.delete-front 6.delete-rear \n 7.display 8.reverse order 9.exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the item to be inserted in front\n");
            // scanf("%d",&item);
            first=insert_front(first);
            break;
            case 2:
            printf("Enter the key\n");
            scanf("%d",&item);
            first=insert_left(item,first);
            break;
            case 7:
            display(first);
            break;
            case 6:
            first=delete_middle(first);
            break;
            case 8:
            display_reverse(reverse_list(first));
            break;
            default:
            exit(0);
        }
    }
}