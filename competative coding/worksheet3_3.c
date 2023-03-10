#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    char *ptr;
    gets(str);
    ptr = &str[0];
    for (int i = 0; i < strlen(str); i++)
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
    puts(str);
    return 0;
}