#include <stdio.h>

/*
 * @description : This is a simple program to learn about User Defined Functions in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. User Defined Functions are also called as Custom Functions.
 * 2. User Defined Functions are defined by the user.
 * 3. User Defined Functions are defined using the keyword 'void' or 'int'.
  * 4. User Defined Functions are defined using the keyword 'void' if the function does not return any value.
  * 5. User Defined Functions are defined using the keyword 'int' if the function returns an integer value.
  * 6. User Defined Functions are defined using the keyword 'float' if the function returns a floating point value.
  * 7. User Defined Functions are defined using the keyword 'char' if the function returns a character value. etc.
  * 8. User Defined Functions are defined using the keyword 'void' if the function does not have any parameters.
  * 9. User Defined Functions are defined using the keyword 'int' if the function has one or more integer parameters.
 */

int countAreaTriangle(int base, int height) // --> This function has two parameters. it is an integer of base and height.
{
  int area = (base * height) / 2;
  return area;
}

int main () {
  int base, height, area;
  printf("Enter the base of the triangle: ");
  scanf("%d", &base);
  printf("Enter the height of the triangle: ");
  scanf("%d", &height);
  area = countAreaTriangle(base, height); // --> This is a function call. and it has two arguments. it is an integer of base and height.
  printf("The area of the triangle is: %d \n", area);

  return 0;
}