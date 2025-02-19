/* Write a C++ program that takes a student’s marks as input and calculates the
 * grade based on if-else conditions. */

#include <iostream>

int main() {
  int marks;

  std::cout << "enter the student's marks: ";
  std::cin >> marks;

  if (marks < 0 || marks > 100) {
    std::cout << "invalid input. marks should be between 0 and 100."
              << std::endl;
    return 1;
  }

  char grade;
  if (marks >= 90) {
    grade = 'A';
  } else if (marks >= 80) {
    grade = 'B';
  } else if (marks >= 70) {
    grade = 'C';
  } else if (marks >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  std::cout << "the student's grade is: " << grade << std::endl;

  return 0;
}
