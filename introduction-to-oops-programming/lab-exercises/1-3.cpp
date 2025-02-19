/* Write two small programs: one using Procedural Programming (POP) to calculate
 * the area of a rectangle, and another using Object-Oriented Programming (OOP)
 * with a class and object for the same task. */

#include <iostream>

class Rectangle {
private:
  int length;
  int width;

public:
  Rectangle(int len, int wid) {
    length = len;
    width = wid;
  }

  int area() { return length * width; }
};

double CalculateRectangleArea(int length, int width) { return length * width; }

int main() {
  int length, width;

  std::cout << "length: ";
  std::cin >> length;

  std::cout << "width: ";
  std::cin >> width;

  Rectangle rect(length, width);

  std::cout << "area (using a function; procedural programming (POP)): "
            << CalculateRectangleArea(length, width) << std::endl;

  std::cout << "area (using a method; Object-Oriented Programming (OOP)): "
            << rect.area() << std::endl;

  return 0;
}
