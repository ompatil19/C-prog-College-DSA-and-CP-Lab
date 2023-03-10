#include <stdio.h>
int main(){
    float c; //declaring variables
    printf("enter the value you want to convert to farenheit"); //printing the line
    scanf("%f" , &c); // for integer we use %d and for float we use %f
    printf("the value in farenheit is %f \n" ,(((9*c)/5)+32));
    return 0;
}