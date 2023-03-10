// calculating average of n numbers
#include <stdio.h>
int main(){
    int n,val,sum=0;
    printf("enter the number of values you want to enter");
    scanf("%d", &n);
    while(n!=0){
        scanf("%d", &val);
        sum=sum+val;
        n--;
    }
       printf("the sum of n numbers is %d", sum);
    return 0;
}