/* Write a C++ program to check if a given string is a palindrome. */

#include <algorithm>
#include <iostream>

int main() {
  std::string str, tmp;

  std::cout << "enter a string: ";
  std::getline(std::cin, str);

  tmp = str;

  std::reverse(str.begin(), str.end());

  if (tmp == str) {
    std::cout << tmp << " is a palindrome." << std::endl;
  } else {
    std::cout << tmp << " is not a palindrome." << std::endl;
  }

  return 0;
}
