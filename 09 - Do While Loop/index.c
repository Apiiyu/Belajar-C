#include <stdio.h>

/*
 * @description : This is a simple program to learn about Do While Loop in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Do While Loop is used to execute a block of code for a given number of times.
 * 2. Do While Loop is used to iterate over a collection of data.
 * 3. The syntax of Do While Loop is: do { code to be executed } while (condition)
 * 4. The code inside the loop is executed at least once.
 * 5. The condition is evaluated at the end of every loop iteration.
 * 6. The loop is terminated if the condition is false.
 */

int main()
{
  int index = 5;
  do
  {
    printf("The value of index is %d \n", index);
    index++;
  } while (index < 1); // This condition is false, so the loop is terminated. but the code inside the loop is executed at least once.

  return 0;
}