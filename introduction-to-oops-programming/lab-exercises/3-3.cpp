/* Write a C++ program to display the multiplication table of a given number
 * using a for loop. */

#include <iostream>

int main() {
  unsigned int num;

  std::cout << "enter a number: ";
  std::cin >> num;

  std::cout << "multiplication table for " << num << ":" << std::endl;
  for (unsigned int i = 1; i <= 10; i++) {
    std::cout << num << " * " << i << " = " << num * i << std::endl;
  }

  return 0;
}
