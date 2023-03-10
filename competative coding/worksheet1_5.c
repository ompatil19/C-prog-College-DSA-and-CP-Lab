#include <stdio.h>

int main(){
    int a,b;
    while(1){
        scanf("%d",&a);
        if(a==-1){
            break;
        }
        scanf("%d",&b);
        if(a!=b){
            printf("1");
            break;
        }
    }
    if(a==-1)
    printf("0");
    return 0;
}