#include <stdio.h>
#include <conio.h>

/*
 * @description : This is a simple program to learn about Switch Condition in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Switch Condition are used to perform conditional operation.
 * 2. The switch statement is used to perform a block of code if the condition is true.
 * 3. The break statement is used to stop the execution of the block of code.
 * 4. The default statement is used to perform a block of code if the condition is false.
 */

int main()
{
  int firstValue, secondValue;
  char operation;

  printf("Enter the operator: (+, -, *, /, %%) ");
  scanf("%c", &operation);

  printf("Enter the first value: ");
  scanf("%d", &firstValue);

  printf("Enter the second value: ");
  scanf("%d", &secondValue);

  switch (operation)
  {
  case '+':
    printf("The sum of %d and %d is %d \n", firstValue, secondValue, firstValue + secondValue);
    break;
  case '-':
    printf("The difference of %d and %d is %d \n", firstValue, secondValue, firstValue - secondValue);
    break;
  case '*':
    printf("The product of %d and %d is %d \n", firstValue, secondValue, firstValue * secondValue);
    break;
  case '/':
    printf("The quotient of %d and %d is %d \n", firstValue, secondValue, firstValue / secondValue);
    break;
  case '%':
    printf("The remainder of %d and %d is %d \n", firstValue, secondValue, firstValue % secondValue);
    break;
  default:
    printf("Invalid operator");
  }

  return 0;
}