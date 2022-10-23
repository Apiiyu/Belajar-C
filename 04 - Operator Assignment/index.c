#include <stdio.h>

/*
 * @description : This is a simple program to learn about Operator Assignment in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Operator Assignment are used to assign value to a variable.
 * 2. The = operator is used to assign value to a variable.
 * 3. The += operator is used to add value to a variable.
 * 4. The -= operator is used to subtract value to a variable.
 * 5. The *= operator is used to multiply value to a variable.
 * 6. The /= operator is used to divide value to a variable.
 * 7. The %= operator is used to get the remainder of value to a variable.
 */

int main()
{
  int firstValue = 10, secondValue = 5;

  // --> Addition
  printf("The sum of %d and %d is %d \n", firstValue, secondValue, firstValue += secondValue);

  // --> Subtraction
  printf("The difference of %d and %d is %d \n", firstValue, secondValue, firstValue -= secondValue);

  // --> Multiplication
  printf("The product of %d and %d is %d \n", firstValue, secondValue, firstValue *= secondValue);

  // --> Division
  printf("The quotient of %d and %d is %d \n", firstValue, secondValue, firstValue /= secondValue);

  // --> Modulus
  printf("The remainder of %d and %d is %d \n", firstValue, secondValue, firstValue %= secondValue);

  return 0;
}