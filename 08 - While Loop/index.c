#include <stdio.h>

/*
 * @description : This is a simple program to learn about While Loop in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. While Loop is used to execute a block of code for a given number of times.
 * 2. While Loop is used to iterate over a collection of data.
 * 3. The syntax of While Loop is: while (condition) { code to be executed }
 * 4. The condition is evaluated at the beginning of every loop iteration.
 * 5. The code inside the loop is executed if the condition is true.
 * 6. The loop is terminated if the condition is false.
 */

int main()
{
  int index = 10;
  while (index >= 1)
  {
    printf("The value of index is %d \n", index);
    index--;
  }

  return 0;
}