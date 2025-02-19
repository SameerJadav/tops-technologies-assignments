/* Write a C++ program to perform matrix addition on two 2x2 matrices. */

#include <iostream>

int main() {
  const int ROWS = 2;
  const int COLS = 2;

  int matrix1[ROWS][COLS];
  int matrix2[ROWS][COLS];
  int res[ROWS][COLS];

  std::cout << "enter the elements of the first 2x2 matrix:" << std::endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      std::cout << "matrix1[" << i << "][" << j << "]: ";
      std::cin >> matrix1[i][j];
    }
  }

  std::cout << "enter the elements of the second 2x2 matrix:" << std::endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      std::cout << "matrix2[" << i << "][" << j << "]: ";
      std::cin >> matrix2[i][j];
    }
  }

  std::cout << "sum of the matrices:" << std::endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      res[i][j] = matrix1[i][j] + matrix2[i][j];
      std::cout << res[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
