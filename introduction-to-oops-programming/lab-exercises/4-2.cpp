/* Write a C++ program that calculates the factorial of a number using
 * recursion. */

#include <iostream>

unsigned long long factorial(int n) {
  if (n == 0) {
    return 1;
  } else if (n > 0) {
    return n * factorial(n - 1);
  } else {
    std::cout << "error: factorial is not defined for negative numbers."
              << std::endl;
    return 0;
  }
}

int main() {
  int num;

  std::cout << "enter a non-negative integer: ";
  std::cin >> num;

  unsigned long long result = factorial(num);

  if (result == 0) {
    return 1;
  } else {
    std::cout << "Factorial of " << num << " = " << result << std::endl;
  }

  return 0;
}
