/*String Manipulation*/
#include <stdio.h>
#include<string.h>

void compare(char[],char[]);
void concatenate(char[],char[]);

int main()
{
    int choice,digit,len;
    char s1[10],s2[10],str;
    do{
        printf("\nString Manipulation\n1-Copy\n2-Compare\n3-Concatenation\n4-Length of String\nEnter your choce: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:copy();
                    break;
                    
            case 2:printf("\nEnter 1st string: ");
                    scanf("%s",s1);
                    printf("\nEnter 2nd string: ");
                    scanf("%s",s2);
                    compare(s1,s2);
                    break;
                    
            case 3:printf("\nEnter 1st string: ");
                    scanf("%s",s1);
                     printf("\nEnter 2nd string: ");
                    scanf("%s",s2);
                    concatenate(s1,s2);
                    break;
            case 4:printf("\nEnter a string: ");
                    scanf("%s",s1);
                    printf("%s",s1);
                    len=length(&s1);
                    printf("The length of the given string %s is : %d", str, len);
                    break;
            default:printf("\nWrong choice!");
                    break;
        }
        printf("\nDo u want to continue(1/0)?");
        scanf("%d",&digit);
        
    }while(digit==1);

    return 0;
}
void copy()
{
    char s1[100], s2[100];	// two character arrays
    int i;
    printf("\nEnter the string: ");
    scanf("%s",s1);
    printf("\nString1 is %s",s1);
    for (i=0;s1[i]!='\0';i++)
    {
      s2[i] = s1[i];
    }
    s1[i] ='\0';			// Append NULL character at end to mark end of string
    printf ("\nAfter copying, string2 is %s",s1);

    return 0;
}
void compare(char Str1[],char Str2[])
{
    int i;
    for(i = 0;  Str1[i] == '\0'; i++);
	{	
	    //printf("s1: %s\ts2: %s",Str1,Str2);   
  	    if(Str1[i] < Str2[i])
   	    {
   		    printf("\n String1 is LESS THAN string2");
	    }
	    else if(Str1[i] > Str2[i])
   	    {
   		    printf("\n String1 is GREATER THAN string2");
	    }
	    else
   	    {
   		    printf("\n str1 is EQUAL to str2");
	    }
	}
}

void concatenate(char s1[],char s2[])
{
    int i, j;
    
  // This loop is to store the length of str1 in i
  for (i = 0; s1[i] != '\0'; ++i);
  
  
  // This loop would concatenate the string str2 at the end of str1
  for (j = 0; s2[j] != '\0'; ++j, ++i)
    {
      s1[i] = s2[j];
    }
  s1[i] = '\0';			// Append NULL character at end to mark end of string
  printf ("\nAfter concatination:%s", s1);
}

/* int leng(char *s[])
{
 int len=0;
   for(int i=0;i!='\0';i++)
   len=len+1;
   return len;
} */
