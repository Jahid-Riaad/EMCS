
/*Writing a C program to get the maximum number between 3 numbers....*/

#include <stdio.h>
void getMax()
{

int a,  b,  c, max;
printf("\n Enter 3 number to get Maximum number from them.");

//Getting input of numbers
printf("\n Enter the 1st number: ");
scanf("%d",&a);
printf("\n Enter the 2nd number: ");
scanf("%d",&b);
printf("\n Enter the 3rd number: ");
scanf("%d",&c);



    //Comparing inputs between them.
    if (a>b && a>c)

        max = a;

    else if (b>a && b>c)

        max = b;
    else
        max = c;

    printf("\n The Maximum number is %d", max);
        printf("\n ------------------------------------");

    return 0;



}
