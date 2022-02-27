#include <stdio.h>
#include <string.h>
void priscription();
void customer();
void main()
{
    char first_name[10];
    char second_name[10];

    for (int i = 0; i < 100; i++)
    {
        printf("*");
    }

    // In our pharmacy only mild disease medicine available
    printf("\n\t\t                welcome to our pharmacy!! \t\n");

    for (int i = 0; i < 100; i++)
    {
        printf("*");
    }

    // first of the medicine you are buying for that means they have to write the patient name

    printf("\n Enter your first name: \n ");
    scanf("%s", first_name);

    printf("Enter your second name: \n");
    scanf("%s", second_name);

    // used string concatenate to combine the first name and second name
    printf("\n");

    strcat(first_name, second_name);

    printf("Your full name is %s \n", first_name);
    printf("\n");

    customer();
}

void customer()
{

    int customer;

    printf("Did the customer brought his priscription: \n");
    scanf("%d", &customer);

    if (customer == 1)
    {
        priscription();
    }
    else
    {
        printf("ohh!! So you have to first bring the priscription then..you can proceed further");
    }
}

void priscription()
{
    char medicine[40];

    int i, n;

    printf("Write the no. of medicines that customer wants to buy: \n");
    scanf("%d", &i);

    for (n = 1; i = n; i++)
    {
        printf("Medicine %d:\n ", n);
        scanf("%s", medicine);
    }

    printf("\n");
}
