#include <stdio.h>

int main(){
    int arr[20],arr1[20],n,a,k=0,c=0,min=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
    for(int i=0;i<n;i++){
        min=arr[k];
        if(min==arr1[i]){
            i=0;
            k++;
    }
    }
    printf("%d",min);
    return 0;
}