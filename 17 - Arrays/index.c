#include <stdio.h>

/*
 * @description : This is a simple program to learn about Array in C
 * @return : 0
 */

/*
  * @conclusion: 
  * 1. An array is a collection of similar data items stored at contiguous memory locations.
  * 2. An array is a data structure that stores a collection of data elements.
  * 3. An array is a data structure that stores a collection of data elements of the same type.
  * 4. An array is a data structure that stores a collection of data elements of the same type with a contiguous memory allocation with a single name and can be accessed using an index.
  * 
  * How to declare an array?
  * 1. dataType arrayName[arraySize];
  * 2. dataType arrayName[arraySize] = {value1, value2, value3, ...};
  * 
  * How to access an array?
  * 1. arrayName[index];
*/

int main () {
  int listOfNumbers[5] = {1, 2, 3, 4, 5};
  printf("The value of listOfNumbers[0] is %d \n", listOfNumbers[0]); // --> This is how to access an array.

  for (int index = 0; index < 5; index++) {
    printf("The value of listOfNumbers[%d] is %d \n", index, listOfNumbers[index]); // --> This is how to access an array.
  }

  // Get length of an array
  int lengthOfArray = sizeof(listOfNumbers) / sizeof(listOfNumbers[0]);
  printf("The length of listOfNumbers is %d \n", lengthOfArray);

  return 0;
}