#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main(){
    char usn[10];
    scanf("%s",&usn);
    if(usn[0]=='1'&& usn[1]=='B' && usn[2]=='M' && isdigit(usn[3])!=0 && isdigit(usn[4])!=0 && isdigit(usn[7])!=0 && isdigit(usn[8])!=0 && isdigit(usn[9])!=0){
        if((usn[5]=='C' && usn[6]=='S') || (usn[5]=='A' && usn[6]=='I') || (usn[5]=='I' && usn[6]=='S') || (usn[5]=='E' && usn[6]=='C')){
            printf("Valid USN");
        }
        else{
        printf("Invalid usn");
        }
    }
    else{
        printf("Invalid usn");
    }
    return 0;
}