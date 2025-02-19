/* Write a C++ program that demonstrates the use of variables and constants.
 * Create variables of different data types and perform operations on them. */

#include <iostream>

int main() {
  int age = 30;
  double price = 99.99;
  float discount = 0.15f;
  char initial = 'J';
  bool isStudent = true;
  std::string name = "John Doe";

  const double PI = 3.14159;

  std::cout << "Name: " << name << std::endl;
  std::cout << "Initial: " << initial << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Age next year: " << age + 1 << std::endl;
  std::cout << "Price: $" << price << std::endl;
  std::cout << "Discount: " << discount * 100 << "%" << std::endl;
  std::cout << "Discounted price: $" << price * (1 - discount) << std::endl;
  std::cout << "Is student: " << std::boolalpha << isStudent << std::endl;
  std::cout << "PI: " << PI << std::endl;

  return 0;
}
