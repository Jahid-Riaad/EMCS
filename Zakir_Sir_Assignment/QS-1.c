/*Writing a C program to enter five numbers and find their sum and
average*/

#include<stdio.h>
void getSumAvg()

{
    int a,b,c,d,e,sum,avg;

    printf("\n Enter the 5 numbers to find their sum and average.");

    //Accepting numbers from user....

    printf("\n Enter the 1st number: ");
    scanf("%d",&a);
    printf("\n Enter the 2nd number: ");
    scanf("%d",&b);
    printf("\n Enter the 3rd number: ");
    scanf("%d",&c);
    printf("\n Enter the 4th number: ");
    scanf("%d",&d);
    printf("\n Enter the 5th number: ");
    scanf("%d",&e);

    //Calculating SUM of the numbers.
    sum=a+b+c+d+e;

    //Calculating Average of the numbers.
    avg=(a+b+c+d+e)/5;

    //Printing results
    printf("\n The Sum is: %d",sum);

    printf("\n The Average is: %d",avg);

    printf("\n ------------------------------------");

}

