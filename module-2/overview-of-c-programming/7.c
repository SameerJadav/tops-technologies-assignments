/* Write a C program that uses the break statement to stop printing numbers when
 * it reaches 5. Modify the program to skip printing the number 3 using the
 * continue statement. */
#include <stdio.h>

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 2) {
      continue;
    } else if (i == 4) {
      break;
    }
    printf("%d\n", i + 1);
  }
  return 0;
}
