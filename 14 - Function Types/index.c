#include <stdio.h>

/*
 * @description : This is a simple program to learn about Function Types in C
 * @return : 0
 */

/*
  * @conclusion :
  * 1. There are four types of function in C:
  *   a. No Argument Passed and No Value Returned
  *   b. No Argument Passed and Value Returned
  *   c. Argument Passed and No Value Returned
  *   d. Argument Passed and Value Returned
  * 2. No Argument Passed and No Value Returned
  *   a. This function does not have any parameters.
  *   b. This function does not return any value.
  *   c. This function is called as a void function.
  * 3. No Argument Passed and Value Returned
  *   a. This function does not have any parameters.
  *   b. This function returns an integer, char, float, etc value.
  *   c. This function is called as a int, char, float, etc function.
  * 4. Argument Passed and No Value Returned
  *   a. This function has one or more parameters.
  *   b. This function does not return any value.
  *   c. This function is called as a void function.
  * 5. Argument Passed and Value Returned
  *   a. This function has one or more parameters.
  *   b. This function returns an integer, char, float, etc value.
  *   c. This function is called as a int, char, float, etc function.
  */

void sayHello() // --> This function does not have any parameters. it is a void function.
{
  printf("Hello World \n");
}

void sayHelloTo(char userName[20]) // --> This function has one parameter. it is a character of userName. it is a void function.
{
  printf("Hello %s \n", userName);
}

int countAreaTriangle() // --> This function does not have any parameters. it is a int function.
{
  int base, height, area;
  printf("Enter the base of the triangle: ");
  scanf("%d", &base);
  printf("Enter the height of the triangle: ");
  scanf("%d", &height);
  area = (base * height) / 2;
  return area;
}

int countAreaSquare(int side) // --> This function has one parameter. it is an integer of side. it is a int function.
{
  int area = side * side;
  return area;
}

int main()
{
  char userName[20] = "John Doe";
  
  sayHello(); // --> This is a function call. and it does not have any arguments.
  sayHelloTo(userName); // --> This is a function call. and it has one argument. it is a character of "John".
  
  int area = countAreaTriangle(); // --> This is a function call. and it does not have any arguments.
  printf("The area of the triangle is: %d \n", area);
  
  int areaSquare = countAreaSquare(5); // --> This is a function call. and it has one argument. it is an integer of 5.
  printf("The area of the square is: %d \n", areaSquare);

  return 0;
}