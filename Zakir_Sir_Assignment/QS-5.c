
/* This program is to print the day of week using switch case
  In the below program I have assumed "Saturday" as the first day of week.*/

#include <stdio.h>

int dayOfWeek()
{
    int day;

    /* Getting input day number from user*/

    printf("\n Assuming \"Saturday\" as the first day of week.");
    printf("\n Enter day number(1-7): ");
    scanf("%d", &day);

    switch(day)
    {
    case 1:
        printf("The day of the week is \"Saturday\"");
        break;
    case 2:
        printf("The day of the week is \"Sunday\"");
        break;
    case 3:
        printf("The day of the week is \"Monday\"");
        break;
    case 4:
        printf("The day of the week is \"Tuesday\"");
        break;
    case 5:
        printf("The day of the week is \"Wednesday\"");
        break;
    case 6:
        printf("The day of the week is \"Thursday\"");
        break;
    case 7:
        printf("The day of the week is \"Friday\"");
        break;
    default:
        printf("Invalid input! Please enter day number between 1-7.");

    }
    printf("\n -----------------------------");
    return 0;
}
