#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 5
int left=-1,right=-1;
int arr[max];
void insert_left(){
    int item;
    if((right==max-1 && left==0) || (right==left-1)){
        printf("Queue overflow");
    }
    else if(left==-1){
        left=0,right=0;
    }
    else if(left==0){
        left=max-1;
    }
    else{
        left--;
    }
    printf("Enter the item you want to insert");
    scanf("%d",&item);
    arr[left]=item;
}
void insert_right(){
    int item;
    if((right==max-1 && left==0)|| right==left-1 ){
        printf("Queue overflow");
        return;
    }
    else if(left==-1){
        left=0;right=0;
    }
    else if(right==max-1){
        right=0;
    }
    else{
        right++;
    }
    printf("Enter the item you want to insert");
    scanf("%d",&item);
    arr[left]=item;
}
void delete_left(){
    if(left==-1){
        printf("queue underflow");
        return;
    }
    else if(left==right){
        left=-1;
        right=-1;
    }
    if(left==max-1){
        left=0;
    }
    else{
        left++;
    }
}
void delete_right(){
    if(left==-1){
        printf("Queue underflow");
        return;
    }
    if(left==right){
        left=-1;
        right=-1;
    }
    if(right==0){
        right=max-1;
    }
    else{
        right--;
    }
}
void display(){
    int i=0;
    if(left==-1){
        printf("Queue is empty");
        return;
    }
    if(right>=left){
        for(i=left;i<=right;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        for(i=left;i<max;i++){
            printf("%d ",arr[i]);
        }
        for(i=0;i<=right;i++){
            printf("%d ",arr[i]);
        }
        
    }
    printf("\n");
}
void input_que(){
    int choice;
    while(1){
    printf("\n enter 1.To delete left 2.delete right 3.insert left 4.display 5.exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:delete_left(); break;
        case 2:delete_right(); break;
        case 3:insert_left(); break;
        case 4:display(); break;
        case 5:exit(0); break;
    }
}
}
void output_que(){
    int choice;
    while(1){
    printf("\nenter 1.To insert left 2.insert right 3.delete left 4.display 5.exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:insert_left(); break;
        case 2:insert_right(); break;
        case 3:delete_left(); break;
        case 4:display(); break;
        case 5:exit(0); break;
    }
}
}
int main(){
    int choice;
    printf("Choose 1 for input queue and 2 for output queue");
    scanf("%d",&choice);
    switch(choice){
        case 1:input_que();
        case 2:output_que();
    }
    return 0;
}