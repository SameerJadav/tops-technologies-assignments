/* Write a C program to create a file, write a string into it, close the file,
 * then open the file again to read and display its contents. */

#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "w");
  if (fptr == NULL) {
    printf("Error opening file for writing!\n");
    return 1;
  }

  const unsigned int MAX_LENGTH = 1000;
  char buffer[MAX_LENGTH];

  printf("Enter contents to store in file: \n");
  // using fgets 'cause it's safer than scanf for taking string input
  fgets(buffer, MAX_LENGTH, stdin);

  fputs(buffer, fptr);

  fclose(fptr);

  printf("Successfully wrote to file.\n\n");

  // reusing fptr and data variables for memory efficiency

  fptr = fopen("test.txt", "r");
  if (fptr == NULL) {
    printf("Error opening file for reading!\n");
    return 1;
  }

  fgets(buffer, MAX_LENGTH, fptr);

  fclose(fptr);

  // no need to add newline in print statement 'cause we are using `fgets()`
  printf("Content read from file:\n%s", buffer);

  return 0;
}
