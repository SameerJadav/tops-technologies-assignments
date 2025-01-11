/* Write a C program that stores 5 integers in a one-dimensional array and
 * prints them. Extend this to handle a two-dimensional array (3x3 matrix) and
 * calculate the sum of all elements. */

#include <stdio.h>

int main() {
  int arr1D[5] = {1, 2, 3, 4, 5};
  int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  printf("One-dimensional array is:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d\n", arr1D[i]);
  }

  int sum = 0;

  for (int i = 0; i < 5; i++) {
    sum += arr1D[i];
  }

  printf("\nSum of all elements in the 1 dimensional array is: %d\n\n", sum);

  printf("Two-dimensional array (3x3 matrix) is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr2D[i][j]);
    }
    printf("\n");
  }

  return 0;
}
