/* Write a C program to print numbers from 1 to 10 using all three types of
 * loops (while, for, do-while). */

#include <stdio.h>

int main() {
  printf("Printing number from 1 to 10 using for loop:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i + 1);
  }

  unsigned int i = 0;

  printf("\nPrinting number from 1 to 10 using while loop:\n");
  while (i < 10) {
    printf("%d\n", i + 1);
    i++;
  }

  // resting the value of i so that i can use it later in the do-while loop
  i = 0;

  printf("\nPrinting number from 1 to 10 using do-while loop:\n");
  do {
    printf("%d\n", i + 1);
    i++;
  } while (i < 10);

  return 0;
}
