/*This C program is written to check whether the input number is prime or not */

#include<stdio.h>
int checkPrime()
{
    int number, median=0,flag=0;
    printf("Enter the positive number greater than 1 to check Prime: ");
    scanf("%d",&number);

    //We know prime numbers can't be divided by other numbers than itself or 1 and any negative number, 1 is not a prime number..
    if (number > 1)
    {
        median=number/2;

        for(int i=2; i<=median; i++)
        {

            //Checking prime number or not
            if(number%i==0)
            {
                printf("This is not a Prime Number.");
                printf("\n--------------------------");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {

            printf("This is a Prime Number.");
            printf("\n---------------------");

        }
    }
    else
        checkPrime();

    return 0;
}
