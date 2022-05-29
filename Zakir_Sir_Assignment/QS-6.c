/* This C program is to find first and last digit of a number using loop.*/

#include <stdio.h>
int firstLastDigit()
{
    int number, sum=0, firstDigit, lastDigit;
    printf("Please enter a positive number: ");
    if  (scanf("%d", &number))
    {

        if (number > 0)
        {
            // Finding the last digit of the number
            lastDigit = number % 10;


            //Finding the first digit by dividing number by 10 until number is greater then or equal 10

            while(number >= 10)
            {
                number = number / 10;
            }

            firstDigit = number;
            printf("\nThe first digit is %d and the last digit is %d\n\n", firstDigit,lastDigit);

        }
        else
            firstLastDigit();
    }
    else
        printf("\nSorry ! Your input is invalid, please try again.");
    return 0;


}
