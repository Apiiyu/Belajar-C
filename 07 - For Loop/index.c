#include <stdio.h>

/*
 * @description : This is a simple program to learn about For Loop in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. For Loop is used to execute a block of code for a given number of times.
 * 2. For Loop is used to iterate over a collection of data.
 * 3. The syntax of For Loop is: for (initialization; condition; increment/decrement) { code to be executed }
 * 4. The initialization is executed only once at the beginning of the loop.
 * 5. The condition is evaluated at the beginning of every loop iteration.
 * 6. The code inside the loop is executed if the condition is true.
 * 7. The increment/decrement is executed at the end of every loop iteration.
 * 8. The loop is terminated if the condition is false.
 */

int main()
{
  for (int index = 1; index <= 10; index++)
  {
    printf("The value of index is %d \n", index);
  }

  return 0;
}
