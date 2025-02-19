/* Write a C++ program that accepts user input for their name and age and then
 * displays a personalized greeting. */

#include <iostream>

int main() {
  std::string name;
  int age;

  std::cout << "Enter your name: ";
  std::cin >> name;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Hello, " << name << "! You are " << age << " years old.\n";

  return 0;
}
