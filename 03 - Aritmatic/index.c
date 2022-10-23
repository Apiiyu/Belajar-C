#include <stdio.h>

/*
 * @description : This is a simple program to learn about Aritmatic Operator in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Aritmatic Operator are used to perform aritmatic operation.
 * 2. The + operator is used to add two numbers.
 * 3. The - operator is used to subtract two numbers.
 * 4. The * operator is used to multiply two numbers.
 * 5. The / operator is used to divide two numbers.
 * 6. The % operator is used to get the remainder of two numbers.
 * 7. The ++ operator is used to increment a number.
 * 8. The -- operator is used to decrement a number.
 */

int main()
{
  int firstValue = 10, secondValue = 5;

  // --> Addition
  printf("The sum of %d and %d is %d \n", firstValue, secondValue, firstValue + secondValue);

  // --> Subtraction
  printf("The difference of %d and %d is %d \n", firstValue, secondValue, firstValue - secondValue);

  // --> Multiplication
  printf("The product of %d and %d is %d \n", firstValue, secondValue, firstValue * secondValue);

  // --> Division
  printf("The quotient of %d and %d is %d \n", firstValue, secondValue, firstValue / secondValue);

  // --> Modulus
  printf("The remainder of %d and %d is %d \n", firstValue, secondValue, firstValue % secondValue);

  // --> Increment
  printf("The increment value of firstValue is %d \n", firstValue++);

  // --> Decrement
  printf("The decrement value of secondValue is %d \n", secondValue--);
}