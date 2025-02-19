/* Write a C++ program that defines a class Calculator with functions for
 * addition, subtraction, multiplication, and division. Create objects to use
 * these functions. */

#include <iostream>

class Calculator {
public:
  int add(int a, int b) { return a + b; }
  int subtract(int a, int b) { return a - b; }
  int multiply(int a, int b) { return a * b; }
  float divide(int a, int b) {
    if (b == 0) {
      std::cout << "error: division by zero is not allowed.\n";
      return 0;
    }
    return static_cast<float>(a) / static_cast<float>(b);
  }
};

int main() {
  Calculator calc;

  int a = 10;
  int b = 3;

  std::cout << a << " + " << b << " = " << calc.add(a, b) << std::endl;
  std::cout << a << " - " << b << " = " << calc.subtract(a, b) << std::endl;
  std::cout << a << " * " << b << " = " << calc.multiply(a, b) << std::endl;
  std::cout << a << " / " << b << " = " << calc.divide(a, b) << std::endl;

  return 0;
}
