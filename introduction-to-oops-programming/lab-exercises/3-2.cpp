/* Write a C++ program that asks the user to guess a number between 1 and 100.
 * The program should provide hints if the guess is too high or too low. Use
 * loops to allow the user multiple attempts. */

#include <iostream>

int main() {
  unsigned int num = 19;

  std::cout << "i have chosen a number between 1 and 100.\n";

  unsigned int guess, attempts = 0;
  bool guessed = false;

  while (!guessed) {
    std::cout << "enter your guess: ";
    std::cin >> guess;
    attempts++;

    if (guess < 1 || guess > 100) {
      std::cout << "please enter a number between 1 and 100.\n";
      continue;
    }

    if (guess < num) {
      std::cout << "Too low! Try again." << std::endl;
    } else if (guess > num) {
      std::cout << "Too high! Try again." << std::endl;
    } else {
      std::cout << "congratulations! you guessed the number " << num << " in "
                << attempts << " attempts.\n";
      guessed = true;
    }
  }

  return 0;
}
