#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void th(int n,char from,char to,char aux);
void th(int n,char from,char to,char aux){
    if(n==1){
        printf("Move disc 1 from %c to %c \n",from,to);
        return;
    }
    th(n-1,from,aux,to);
    printf("Move disc %d from %c to %c \n",n,from,to);
    th(n-1,aux,to,from);
}
void main(){
    int n=3;
    th(n,'a','b','c');
}
