//This C program is written to draw a pattern (Pyramid of Numbers).

#include <stdio.h>
int pyramidOfNumbers() {
   int indx, gap, rows, k = 0, count = 0, count1 = 0;

   //Getting input for the number of row to be printed in pyramid

   printf("Enter the number of rows for the \"Pyramid of Numbers\" : ");
   scanf("%d", &rows);

   //iterating through the number of rows until index is less than or equal of it.
   for (indx = 1; indx <= rows; ++indx) {

//Making gaps to be printed though iteration, in first loop it will print 4 gaps fro the left side.
      for (gap = 1; gap <= rows - indx; ++gap) {

        //Printing Gaps
         printf("  ");
         ++count;
      }
   //measuring the middle point and iterating till k != 2 * indx - 1

      while (k != 2 * indx - 1) {
         if (count <= rows - 1) {
            //printing numbers if
            printf("%d ", indx + k);
            ++count;
         } else {
             //printing less numbers...
            ++count1;
            printf("%d ", (indx + k - 2 * count1));
         }
         //reserving flag to be continued...
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}
