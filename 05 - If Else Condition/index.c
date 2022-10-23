#include <stdio.h>

/*
 * @description : This is a simple program to learn about If Else Condition in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. If Else Condition are used to perform conditional operation.
 * 2. The if statement is used to perform a block of code if the condition is true.
 * 3. The else statement is used to perform a block of code if the condition is false.
 * 4. The else if statement is used to perform a block of code if the condition is true.
 */

int main()
{
  int yourAge;

  printf("Enter your age: ");
  scanf("%d", &yourAge);

  if (yourAge >= 18) //--> If the condition is true, the block of code will be executed
  {
    printf("You are eligible to vote");
  }
  else if (yourAge >= 16) //--> If the condition is true, the block of code will be executed
  {
    printf("You are eligible to drive");
  }
  else //--> If the condition is false, the block of code will be executed
  {
    printf("You are not eligible to vote and drive");
  }
}