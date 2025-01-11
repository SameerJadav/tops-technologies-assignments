/* Write a C program that defines a structure to store a student's details
 * (name, roll number, and marks). Use an array of structures to store details
 * of 3 students and print them. */

#include <stdio.h>

typedef struct {
  char name[50];
  unsigned int rollNumber;
  float marks;
} student_t;

int main() {
  student_t students[3] = {
      {"Sameer", 101, 85.5}, {"Zaid", 102, 92.0}, {"Yash", 103, 78.5}};

  printf("Student Details:\n");
  for (int i = 0; i < 3; i++) {
    printf("\nStudent %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].rollNumber);
    printf("Marks: %.2f\n", students[i].marks);
  }
  return 0;
}
