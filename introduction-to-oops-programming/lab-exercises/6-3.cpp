/* Write a program that implements inheritance using a base class Person and
 * derived classes Student and Teacher. Demonstrate reusability through
 * inheritance. */

#include <iostream>
#include <string>

class Person {
public:
  std::string name;
  unsigned int age;

  void display() {
    std::cout << "name: " << name << ", age: " << age << std::endl;
  }
};

class Student : public Person {
public:
  std::string studentId;

  void display() {
    Person::display();
    std::cout << "student ID: " << studentId << std::endl;
  }
};

class Teacher : public Person {
public:
  std::string teacherId;

  void display() {
    Person::display();
    std::cout << "teacher ID: " << teacherId << std::endl;
  }
};

int main() {
  Student s;
  s.name = "sameer";
  s.age = 21;
  s.studentId = "1912";
  s.display();

  Teacher t;
  t.name = "jane";
  t.age = 33;
  t.teacherId = "2515";
  t.display();

  return 0;
}
