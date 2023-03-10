#include <stdio.h>
int main(){
    int a[50], i,j,n,t,l=-1;
   printf("enter the No: of elements in the list:");
   scanf("%d", &n);
   printf("enter the elements:");
   for(i=0; i<n; i++){
      scanf ("%d", &a[i]);
   }
   for (i=0; i<n-1; i++){
      for (j=i+1; j<n; j++){
         if (a[i] > a[j]){
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
   for(int i=0;i<n;i++){
    if(a[i]!=(i+1)){
        l=i+1;
        break;
    }
   }
   printf("the missing element is:%d",l);
}