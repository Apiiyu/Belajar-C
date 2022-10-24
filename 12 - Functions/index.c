#include <stdio.h>

/*
 * @description : This is a simple program to learn about Functions in C
 * @return : 0
 */

/*
 * @conclusion :
 * 1. Functions are used to perform a specific task.
 * 2. Functions are used to break a large program into small and manageable pieces.
 * 3. Functions are used to avoid code repetition.
 * 4. Functions are used to make the code more readable.
 * 5. Functions are used to make the code more reusable.
 * 6. Functions are used to make the code more maintainable.
 * 7. There are two types of function in C:
 *   a. Standard Library Functions (also called as Built-in Functions)
 *   b. User Defined Functions (also called as Custom Functions)
 * 8. These functions are defined in the header files. For example,
 *   a. printf() is defined in stdio.h
 *   b. scanf() is defined in stdio.h
 *   c. strlen() is defined in string.h
 *   d. strcpy() is defined in string.h
 *   e. strcat() is defined in string.h, etc.
 * 9. Functions can have zero or more parameters.
 * 10. Parameters is the data that is passed to the function.
 * 11. Functions can return zero or more values.
 */

void sayHello(char userName[]) // --> This function has one parameter. it is a character of userName.
{
  printf("Hello %s \n", userName);
}

int main()
{
  char userName[20];
  printf("Enter your name: ");
  fgets(userName, 20, stdin);
  sayHello(userName); // --> This is a function call. and it has one argument. it is a character of userName.

  return 0;
}