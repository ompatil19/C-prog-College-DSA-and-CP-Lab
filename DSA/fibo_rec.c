#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int fibo(int n){
    if(n<2){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
void main(){
    int n=6;
    printf("%d",fibo(n-1));
}