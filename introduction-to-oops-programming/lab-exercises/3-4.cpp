/* Write a program that prints a right-angled triangle using stars (*) with a
 * nested loop. */

#include <iostream>

int main() {
  int rows;

  std::cout << "enter the number of rows for the triangle: ";
  std::cin >> rows;

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}
