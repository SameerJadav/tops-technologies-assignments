/* Write a C program that accepts two integers from the user and performs
 * arithmetic, relational, and logical operations on them. Display the results.
 */

#include <stdio.h>

int main() {
  int num1, num2;

  printf("Enter the first integer: ");
  scanf("%d", &num1);
  printf("Enter the second integer: ");
  scanf("%d", &num2);

  printf("\nArithmetic Operations:\n");
  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d * %d = %d\n", num1, num2, num1 * num2);
  if (num2 != 0) {
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
  } else {
    printf("Division and modulus by zero are undefined.\n");
  }

  printf("\nRelational Operations:\n");
  printf("%d == %d -> %s\n", num1, num2, num1 == num2 ? "true" : "false");
  printf("%d != %d -> %s\n", num1, num2, num1 != num2 ? "true" : "false");
  printf("%d > %d -> %s\n", num1, num2, num1 > num2 ? "true" : "false");
  printf("%d < %d -> %s\n", num1, num2, num1 < num2 ? "true" : "false");
  printf("%d >= %d -> %s\n", num1, num2, num1 >= num2 ? "true" : "false");
  printf("%d <= %d -> %s\n", num1, num2, num1 <= num2 ? "true" : "false");

  printf("\nLogical Operations:\n");
  printf("%d && %d -> %s\n", num1, num2, num1 && num2 ? "true" : "false");
  printf("%d || %d -> %s\n", num1, num2, num1 || num2 ? "true" : "false");
  printf("!%d -> %s\n", num1, !num1 ? "true" : "false");
  printf("!%d -> %s\n", num2, !num2 ? "true" : "false");

  return 0;
}
