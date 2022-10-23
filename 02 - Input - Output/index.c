#include <stdio.h>

/*
 * @description : This is a simple program to learn about Input and Output in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Input and Output are used to communicate with the user.
 * 2. The printf() function is used to display output.
 * 3. The scanf() function is used to get input from the user.
 * 4. The printf() function is defined in the stdio.h header file.
 * 5. The scanf() function is defined in the stdio.h header file.
 * 6. The printf() function is used to display output on the screen.
 * 7. The scanf() function is used to get input from the user.
 */

int main()
{
  int yourAge;
  double yourWeight;
  char userName[20];
  printf("Enter your name: ");
  fgets(userName, 20, stdin); //--> fgets() is used to get all value from the user if the user enter space/blank
  printf("Welcome %s", userName);

  printf("\nEnter your age: ");
  scanf("%d", &yourAge); //--> scanf() is used to get only one value from the user
  printf("Your age is %d \n", yourAge);

  printf("\nEnter your weight: ");
  scanf("%lf", &yourWeight); //--> & is used to get the address of the variable
  printf("Your weight is %.2lf", yourWeight);

  return 0;
}