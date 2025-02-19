/* Write a C++ program that demonstrates arithmetic, relational, logical, and
 * bitwise operators. Perform operations using each type of operator and display
 * the results. */

#include <iostream>

int main() {
  int a = 10;
  int b = 5;

  std::cout << "Arithmetic Operators:" << std::endl;
  std::cout << "a + b = " << (a + b) << std::endl;
  std::cout << "a - b = " << (a - b) << std::endl;
  std::cout << "a * b = " << (a * b) << std::endl;
  std::cout << "a / b = " << (a / b) << std::endl;
  std::cout << "a % b = " << (a % b) << std::endl;
  std::cout << "a++ = " << (a++) << std::endl;
  std::cout << "++b = " << (++b) << std::endl;
  std::cout << "a-- = " << (a--) << std::endl;
  std::cout << "--b = " << (--b) << std::endl;
  std::cout << std::endl;

  std::cout << "Relational Operators:" << std::endl;
  std::cout << "a == b: " << (a == b) << std::endl;
  std::cout << "a != b: " << (a != b) << std::endl;
  std::cout << "a > b: " << (a > b) << std::endl;
  std::cout << "a < b: " << (a < b) << std::endl;
  std::cout << "a >= b: " << (a >= b) << std::endl;
  std::cout << "a <= b: " << (a <= b) << std::endl;
  std::cout << std::endl;

  bool x = true;
  bool y = false;

  std::cout << "Logical Operators:" << std::endl;
  std::cout << "x && y: " << (x && y) << std::endl;
  std::cout << "x || y: " << (x || y) << std::endl;
  std::cout << "!x: " << (!x) << std::endl;
  std::cout << std::endl;

  unsigned int c = 60;
  unsigned int d = 13;

  std::cout << "Bitwise Operators:" << std::endl;
  std::cout << "c << 2: " << (c << 2) << std::endl;
  std::cout << "c >> 2: " << (c >> 2) << std::endl;
  std::cout << std::endl;

  return 0;
}
