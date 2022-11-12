#include <stdio.h>

/*
 * @description : This is a simple program to learn about Recursive Function in C
 * @return : 0
 */

/*
  * @conclusion :
  * 1. A recursive function is a function that calls itself.
  * 2. A recursive function must have a base case and a recursive case.
  * 3. A recursive function must have a base case.
  *  a. A base case is a condition that stops the recursive function from calling itself.
  *  b. A base case is a condition that returns a value.
  * 4. A recursive function must have a recursive case.
  *  a. A recursive case is a condition that calls the recursive function.
  *  b. A recursive case is a condition that returns a value.
  * 5. A recursive function must have a return statement.
  *  a. A return statement is a statement that returns a value.
*/

int factorial(int number)
{
  if (number == 0) // --> This is a base case. it is a condition that stops the recursive function from calling itself.
  {
    return 1;
  }
  else 
  {
    return number * factorial(number - 1); // --> This is a recursive case. it is a condition that calls the recursive function.
  }
}

int main()
{
  int number;
  
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("The factorial of %d is %d \n", number, factorial(number));
  
  return 0;
}