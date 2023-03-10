#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void reverse_s(char str[],int n);
int main(){
    char a[100];
    gets(a);
    int n=strlen(a);
    reverse_s(a,n);
    return 0;
}
void reverse_s(char str[],int n){
    if(n==-1){
        return;
    }
    printf("%c",str[n-1]);
    reverse_s(str,n-1);
}