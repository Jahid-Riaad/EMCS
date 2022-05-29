/* This C program is written to accept a matrix of order rows x columns and find the sum  of each row and each column of a matrix */

#include <stdio.h>
void matrixSum ()
{

    static int array[10][10];
    int indx1, indx2, rows, columns, sum = 0;

    printf("Enter the order of the matrix\n");
    scanf("%d %d", &rows, &columns);

    printf("Enter the co-efficients of the matrix\n");
    for (indx1 = 0; indx1 < rows; ++indx1)
    {
        for (indx2 = 0; indx2 < columns; ++indx2)
        {
            scanf("%d", &array[indx1][indx2]);
        }
    }

    for (indx1 = 0; indx1 < rows; ++indx1)
    {
        for (indx2 = 0; indx2 < columns; ++indx2)
        {
            sum = sum + array[indx1][indx2] ;
        }

        printf("Sum of the %d row is = %d\n", indx1 + 1, sum);
        sum = 0;

    }
    sum = 0;
    for (indx2 = 0; indx2 < columns; ++indx2)
    {
        for (indx1 = 0; indx1 < rows; ++indx1)
        {
            sum = sum + array[indx1][indx2];
        }

        printf("Sum of the %d column is = %d\n", indx2 + 1, sum);
        sum = 0;

    }

}
