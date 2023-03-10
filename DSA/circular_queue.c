#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int front=-1;
int rear=-1;
int size=4;
int arr[4];
void insert(int value){
    if((front==0 && rear==size-1) || (rear==front-1) ){
        printf("Queue is full\n");
        return;
    }
    else if(rear==-1){
        front=rear=0;
        arr[rear]=value;
    }
    else if(front!=0 && rear==size-1){
        rear=0;
        arr[rear]=value;
    }
    else{
        rear++;
        arr[rear]=value;
    }
}
void delete(){
    if(front==-1){
        printf("Queue is empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
}
void display(){
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(int i=front;i<=size;i++){
            printf("%d ",arr[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d ",arr[i]);
        }
    }
}
void main(){
    insert(14);
    insert(22);
    insert(13);
    insert(-6);
    display();
    delete();
    delete();
    insert(9);
    insert(20);
    insert(5);
    display();
}