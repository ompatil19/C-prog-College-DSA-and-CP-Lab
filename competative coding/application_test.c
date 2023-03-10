#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct node
{
    char name[100];
    char email[100];
    char source[100];
    char dest[100];
    char ftype[100];
    char airlines[100];
    struct node *link;
};
typedef struct node *N;
N insert_front(N first)
{
    N t;
    char name[100], email[100], source[100], dest[100], ftype[100], airlines[100];
    t = (N)malloc(sizeof(struct node));
    printf("\nEnter Name: \t");
    scanf("%s", t->name);
    printf("\nEnter Email: \t");
    scanf("%s", t->email);
    printf("\nEnter Source: \t");
    scanf("%s", t->source);
    printf("\nEnter Destination: \t");
    scanf("%s", t->dest);
    printf("\nEnter Flight type: \t");
    scanf("%s", t->ftype);
    printf("\nEnter Airlines: \t");
    scanf("%s", t->airlines);
    t->link = first;
    return t;
}
void display(char check[], N first)
{
    N t;
    if (first == NULL)
    {
        printf("List is empty\n");
    }
    t = first;
    while (t != NULL)
    {
        if (strcmp(t->name, check) == 0)
        {
            printf("\nName: \t %s", t->name);
            printf("\nEmail: \t %s", t->email);
            printf("\nSource:\t%s", t->source);
            printf("\nDestination:%s", t->dest);
            printf("\nFlight type: \t%s", t->ftype);
            printf("\nAirlines: \t%s", t->airlines);
        }
        t = t->link;
    }
    printf("\n");
}

void logfile(char air[], N first)
{
    FILE *ptr = NULL;
    N t = first;
    ptr = fopen("log.txt", "w");
    fprintf(ptr, "Name\tEmail\tSource\tDestination\tFlight type\tAirlines\n");
    while (t != NULL){
        if (strcmp(t->airlines, air) == 0)
        {
            fprintf(ptr, "%s\t%s\t%s\t%s\t%s\t%s\n", t->name, t->email, t->source, t->dest, t->ftype, t->airlines);
        }
        t = t->link;
    }
    fclose(ptr);
}

int main()
{
    N first;
    int choice, n;
    char check[100], air[100];
    first = NULL;
    printf("Enter the number of passengers:");
    scanf("%d", &n);
    printf("\nEnter the Traveller Details\n");
    for (int i = 0; i < n; i++)
    {
        first = insert_front(first);
    }
    while(1)
    {
        printf("\n1:Display ticket\n 2.To genrate log file for airlines\n 3.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter the passenger name for generating ticket:");
                scanf("%s", check);
                display(check, first);
                break;
            case 2:
                printf("Enter the airline name:\t");
                scanf("%s", air);
                logfile(air, first);
                break;
            default:
                exit(0);
        }
    }

}
