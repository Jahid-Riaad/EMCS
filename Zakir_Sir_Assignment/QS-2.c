/*Writing a C program to get the Square Root of number....*/

#include <math.h>
#include <stdio.h>

int getSquareRoot() {
   double number, squareRoot;

   printf("\n Enter a number to find the square root of it: ");
   scanf("%lf", &number);

   // Computing the square root
   squareRoot = sqrt(number);

   printf("\n Square root of %.2lf =  %.2lf", number, squareRoot);
    printf("\n ------------------------------------");
   return 0;
}
