/* Write a program that demonstrates the difference between local and global
 * variables in C++. Use functions to show scope. */

#include <iostream>

int globalVariable = 100;

void myFunction() {
  // local variable with the same name as the global variable
  int globalVariable = 50;

  // accessing the local variable
  std::cout << "inside myFunction, local globalVariable = " << globalVariable
            << std::endl;

  // accessing the global variable using the scope resolution operator (::)
  std::cout << "inside myFunction, global globalVariable = " << ::globalVariable
            << std::endl;
}

void anotherFunction() {
  // accessing the global variable directly
  std::cout << "inside anotherFunction, globalVariable = " << globalVariable
            << std::endl;

  // modifying the global variable
  globalVariable = 200;
  std::cout << "inside anotherFunction, modified globalVariable = "
            << globalVariable << std::endl;
}

int main() {
  // accessing the global variable in main
  std::cout << "inside main, globalVariable = " << globalVariable << std::endl;

  myFunction();
  anotherFunction();

  // accessing the modified global variable in main
  std::cout << "inside main, modified globalVariable = " << globalVariable
            << std::endl;

  return 0;
}
