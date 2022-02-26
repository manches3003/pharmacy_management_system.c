#include <stdio.h>
#include <string.h>
void disease();
void display();
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

    strcat(first_name, second_name);

    printf("Your full name is %s \n", first_name);

    disease();
}

void display()
{
    printf("\t [1]: Headache \n");
    printf("\t [2]: fever \n");
    printf("\t [3]: Allergies \n");
    printf("\t [4]: Cold and Flu \n");
    printf("\t [5]: Conjuctivites \n");
    printf("\t [6]: Diarrhea \n");
    printf("\t [7]: stomach aches \n");
}

void disease()
{
    int disease;

    display();

    printf("which disease you have:");
    scanf("%d", &disease);

    switch (disease)
    {
    case 1:
        printf("Headache");
        break;

    case 2:
        printf("fever");
        break;

    case 3:
        printf("Allergies");
        break;

    case 4:
        printf("Cold and Flu");
        break;

    case 5:
        printf("Conjuctivites");
        break;

    case 6:
        printf("Diarrhea");
        break;

    case 7:
        printf("stomach aches");
        break;
    }
}
