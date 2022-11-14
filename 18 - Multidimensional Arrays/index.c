#include <stdio.h>

/*
 * @description : This is a simple program to learn about Multidimensional Array in C
 * @return : 0
 */

/*
  * @conclusion:
  * 1. A multidimensional array is an array of arrays of the same type with a contiguous memory allocation with a single name and can be accessed using an index.
  * 
  * How to declare a multidimensional array?
  * 1. dataType arrayName[arraySize][arraySize];
  * 2. dataType arrayName[arraySize][arraySize] = {{value1, value2, value3, ...}, {value1, value2, value3, ...}, {value1, value2, value3, ...}, ...};
  * 
  * How to access a multidimensional array?
  * 1. arrayName[index][index];
*/

int main () {
  int listOfTemperatureCities[2][7];
  
  // Get length of an array
  int lengthOfArray1D = sizeof(listOfTemperatureCities) / sizeof(listOfTemperatureCities[0]);
  int lengthOfArray2D = sizeof(listOfTemperatureCities[0]) / sizeof(listOfTemperatureCities[0][0]);

  for (int firstIndex = 0; firstIndex < lengthOfArray1D; firstIndex++) {
    for (int secondIndex = 0; secondIndex < lengthOfArray2D; secondIndex++) {
      printf("City %d, Day %d: ", firstIndex + 1, secondIndex + 1);
      scanf("%d", &listOfTemperatureCities[firstIndex][secondIndex]);
    }
  }
  
  printf("\nDisplaying Values:\n\n");

  for (int firstIndex = 0; firstIndex < lengthOfArray1D; firstIndex++) {
    for (int secondIndex = 0; secondIndex < lengthOfArray2D; secondIndex++) {
      printf("City %d, Day %d = %d\n", firstIndex + 1, secondIndex + 1, listOfTemperatureCities[firstIndex][secondIndex]);
    }
  }

  return 0;
}