/* Write a C++ program that defines functions for basic arithmetic operations
 * (add, subtract, multiply, divide). The main function should call these based
 * on user input. */

#include <iostream>

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) { return a * b; }

int divide(int a, int b) {
  if (b == 0) {
    std::cout << "error: division by zero is not allowed." << std::endl;
    return 0;
  }
  return a / b;
}

int main() {
  int a, b;
  char operation;

  std::cout << "enter first number: ";
  std::cin >> a;

  std::cout << "enter second number: ";
  std::cin >> b;

  std::cout << "enter operation (+, -, *, /): ";
  std::cin >> operation;

  int result;

  switch (operation) {
  case '+':
    result = add(a, b);
    break;
  case '-':
    result = subtract(a, b);
    break;
  case '*':
    result = multiply(a, b);
    break;
  case '/':
    result = divide(a, b);
    break;
  default:
    std::cout << "invalid operation." << std::endl;
    return 1;
  }

  std::cout << "result: " << result << std::endl;

  return 0;
}
