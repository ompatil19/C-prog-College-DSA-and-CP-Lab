#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int info;
    struct node* link;
}; typedef struct node* N;
struct queue{
    N front;
    N rear;
};
void insert(struct queue* q,int value){
    N temp=(N)malloc(sizeof(struct node));
    temp->info=value;
    if(q->front==NULL){
        q->front=temp;
    }
    else{
        q->rear->link=temp;
    }
        q->rear=temp;
        q->rear->link=q->front;
}
void delete(struct queue* q){
    if(q->front==NULL){
        printf("The queue is empty");
        return;
    }
    if(q->front==q->rear){
        q->front=NULL;
        q->rear=NULL;
    }
    else{
        q->front=q->front->link;
        q->rear->link=q->front;
    }
}
void display(struct queue* q){
    N temp=q->front;
    printf("Enter the elements of the circular queue");
    while(temp->link!=q->front){
        printf("%d",temp->info);
        temp=temp->link;
    }
}
void main(){
    struct queue* q;
    q->front==NULL;
    q->rear==NULL;
    insert(q,14);
    insert(q,22);
    insert(q,13);
    insert(q,-6);
    display(q);
    delete(q);
    delete(q);
    insert(q,9);
    insert(q,20);
    insert(q,5);
    display(q);
}