/* Write a C++ program that accepts an array of integers, calculates the sum and
 * average, and displays the results. */

#include <iostream>

int main() {
  int size;

  std::cout << "enter the size of the array: ";
  std::cin >> size;

  // dynamically allocate the array
  int *arr = new int[size];

  std::cout << "enter the elements of the array:" << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << "arr[" << i << "]: ";
    std::cin >> arr[i];
  }

  unsigned int sum = 0;

  for (unsigned int i = 0; i < size; i++) {
    sum += arr[i];
  }

  std::cout << "sum of the array elements: " << sum << std::endl;
  std::cout << "average of the array elements: " << sum / size << std::endl;

  return 0;
}
