#include <stdio.h>

/*
 * @description : This is a simple program to learn about Storage Class in C
 * @return : 0
 */

/*
  * @conclusion :
  * 1. There are four types of storage class in C:
  *  a. automatic
  *  b. external
  *  c. static
  *  d. register
  * 2. Automatic Storage Class
  *  a. This storage class is the default storage class for all local variables.
  *  b. This storage class is the default storage class for all function parameters.
  * 3. External Storage Class
  *  a. This storage class is used to give a reference of a global variable that is visible to all the program files.
  *  b. This storage class is used to declare a global variable or function.
  *  c. This storage class is used to declare a function prototype.
  * 4. Static Storage Class
  *  a. This storage class is used to retain the value of a variable between function calls.
  *  b. This storage class is used to retain the value of a variable between program executions.
  *  c. This storage class is used to declare a global variable or function.
  *  d. This storage class is used to declare a function prototype.
  * 5. Register Storage Class
  *  a. This storage class is used to define local variables that should be stored in a register instead of RAM.
  *  b. This storage class is used to define function parameters that should be stored in a register instead of RAM.
  *  c. This storage class is used to define a pointer that should be stored in a register instead of RAM.
  * 6. The scope of a variable is the region of the program where the variable is defined.
*/

int globalVariable = 10; // --> This is a global variable. it is a variable that is visible to all the program files.

void exampleFunction () // --> This is a function prototype. it is a function that is visible to all the program files.
{
  printf("This is an example function \n");
  printf("The value of globalVariable is %d \n", globalVariable);
}

void exampleStaticFunction ()
{
  static int staticVariable = 10; // --> This is a static variable. it is a variable that retains the value between function calls.
  printf("The value of staticVariable is %d \n", staticVariable);
  staticVariable++;
}

int main()
{
  int localVariable = 20; // --> This is a local variable. it is a variable that is visible only to the function in which it is defined.
  
  printf("The value of globalVariable is %d \n", globalVariable);
  printf("The value of localVariable is %d \n", localVariable);
  exampleFunction();
  exampleStaticFunction();
  exampleStaticFunction();
  
  return 0;
}