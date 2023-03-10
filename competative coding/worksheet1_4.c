#include <stdio.h>
int sequence(int k,int a[]);
int main(){
    int k,ar[20],d=0;
    scanf("%d", &k);
    for(int i=0;i<20;i++){
        scanf("%d",&ar[i]);
        if(ar[i]==-1)
        break;
    }
    d=sequence(k,ar);
    if(d==0)
    d=-1;
    printf("%d",d);
    return 0;
}
int sequence(int k,int a[]){
    for(int i=0;i<20;i++){
        if(k==a[i]){
            return i;
            break;
        }
    }

}