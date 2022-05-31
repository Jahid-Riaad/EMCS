/*Writing a C Program to get all the even numbers between them. */


#include <stdio.h>

int getEvenNumbers()
{
    int lowest, highest ;
    printf("\n Even numbers between 2 numbers (inclusive):");
    printf("\n Enter the lowest number of the range:");
    scanf("%d", &lowest );

    printf("\n Enter the highest number of the range:");
    scanf("%d", &highest );

        //Checking inputs correctly
    if (!(highest >  lowest)){
    printf("\n Please enter lowest number firstly and then the highest number.");
    getEvenNumbers();
    }

    printf("\n highest number: %d", highest);

    printf("\n Even numbers between %d and %d are as follows: ", lowest, highest);

    //iterating between through the range.
    for ( int i = lowest; i <= highest; i++)
    {
        //Checking Even numbers and printing.
        if(i%2 == 0)
        {
            printf("\n %d", i);
        }
    }
    printf("\n ------------------------------------");

    return 0;
}

