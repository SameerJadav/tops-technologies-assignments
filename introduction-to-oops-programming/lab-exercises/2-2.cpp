/* Write a C++ program that performs both implicit and explicit type conversions
 * and prints the results. */

#include <iostream>

int main() {
  // Implicit Type Conversion (Coercion)
  int intValue = 10;
  double doubleValue = intValue;
  std::cout << "Implicit int to double: " << doubleValue << std::endl;

  // Explicit Type Conversion (Casting)
  double doubleToConvert = 3.14159;
  int intFromDouble = static_cast<int>(doubleToConvert);
  std::cout << "Explicit double to int: " << intFromDouble << std::endl;

  return 0;
}
