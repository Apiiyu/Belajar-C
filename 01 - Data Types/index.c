#include <stdio.h>

/*
 * @description : This is a simple program to learn about data types in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Data types are used to define the type of data that a variable can hold.
 * 2. There are 5 basic data types in C.
 * 3. The basic data types are int, float, char, double and void.
 * 4. The int data type is used to store integer values. (using %d for input and output)
 * 5. The float data type is used to store floating point values. (using %f for input and output)
 * 6. The char data type is used to store character values. (using %c for input and output)
 * 7. The double data type is used to store double precision floating point values. (using %lf for input and output)
 * 8. The void data type is used to define functions that do not return a value.
 */

int main()
{
  char myName[] = "Rafi";
  int myAge = 18;
  float myHeight = 5.7;
  char myBloodType = 'O';
  double myWeight = 65.5;

  printf("My name is %s \n", myName);
  printf("My age is %d \n", myAge);
  printf("My height is %f \n", myHeight);
  printf("My blood type is %c \n", myBloodType);
  printf("My weight is %lf \n", myWeight);

  return 0;
}