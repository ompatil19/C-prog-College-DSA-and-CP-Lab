//In a class there are 3 students who have a first name in common, write a C program to identify and display the students uniquely by combining their last name along with first name
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char first[50],last[50];
    printf("enter the first name:");
    gets(first);
    for(int i=0;i<3;i++){
        printf("Enter the last name:");
        gets(last);
        printf("%s %s \n",first,last);
    }
    return 0;
}