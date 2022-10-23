#include <stdio.h>

/*
 * @description : This is a simple program to learn about Break and Continue in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Break is used to terminate the loop immediately.
 * 2. Continue is used to skip the current iteration of the loop and continue with the next iteration.
 */

int main()
{
  int index = 1;
  while (index <= 10)
  {
    if (index == 5)
    {
      index++;
      continue; // The current iteration is skipped and the next iteration is executed.
    }
    else if (index == 8)
    {
      break; // The loop is terminated immediately.
    }
    printf("The value of index is %d \n", index);
    index++;
  } // --> So the while loop will print the values from 1 to 4 and 6 to 7.
}