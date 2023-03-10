#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char USN[10];
    char name[30];
    struct node *next;
};
struct node *insert(struct node *head){
    struct node *newnode, *ptr;
    char value[10], namev[30];
    int i;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter USN to be inserted: ");
    gets(value);
    strcpy((newnode -> USN),value);
    printf("\nEnter Name to be inserted: ");
    gets(namev);
    strcpy((newnode -> name),namev);
    printf("%s\n",value);
    newnode -> next = NULL;
    if (head==NULL){
        head=newnode;
        return head;
    }
    else{
        ptr=head;
        while(ptr -> next != NULL){
            ptr=ptr ->next;
        }
        ptr->next=newnode;
        return head;
    }
}
void display(struct node *head){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%s\t%s\n",ptr->USN,ptr->name);
        ptr=ptr->next;
    }
}
void main(){
    char USN1[10];
    struct node *head=NULL;
    struct node *insert();
    void display();
    head=insert(head);
    head=insert(head);
    head=insert(head);
    display(head);
    /*
    printf("\nEnter the node to be deleted:");
    gets(USN1);
    head=delete(USN1);
    display();
    */
}