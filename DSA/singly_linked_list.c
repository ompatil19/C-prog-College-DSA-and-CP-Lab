#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node 
{
    int info;
    struct node* link;
};typedef struct node*N;
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
            case 5:
            display(first);
            break;
        }
    }
    return 0;
}