#include <stdio.h>

/*
 * @description : This is a simple program to learn about Goto in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Goto is used to transfer the control of the program to a label.
 * 2. The goto statement allow us to transfer the control of the program to a label.
 * 3. The label is an identifier. When the goto statement is encountered, the control of the programs jumps to label: and starts executing the code from there.
 */

int main()
{

  const int maxInput = 100;
  int index;
  double number, average, sum = 0.0;

  for (index = 1; index <= maxInput; ++index)
  {
    printf("%d. Enter a number: ", index);
    scanf("%lf", &number);

    // go to jump if the user enters a negative number
    if (number < 0.0)
    {
      goto jump;
    }
    sum += number;
  }

jump:
  average = sum / (index - 1);
  printf("Sum = %.2f\n", sum);
  printf("Average = %.2f", average);

  return 0;
}