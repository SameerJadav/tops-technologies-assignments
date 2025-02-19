/* Create a class BankAccount with data members like balance and member
 * functions like deposit and withdraw. Implement encapsulation by keeping the
 * data members private. */

#include <iostream>

class BankAccount {
private:
  double balance;

public:
  BankAccount(double bal) { balance = bal; }

  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      std::cout << "deposit of $" << amount << " successful.\n";
    } else {
      std::cout << "invalid deposit amount.\n";
    }
  }

  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      std::cout << "withdrawal of $" << amount << " successful.\n";
    } else {
      std::cout << "insufficient funds or invalid withdrawal amount.\n";
    }
  }

  double getBalance() { return balance; }
};

int main() {
  BankAccount myAccount(1000.0);

  std::cout << "initial balance: $" << myAccount.getBalance() << std::endl;

  myAccount.deposit(500.0);
  std::cout << "current balance: $" << myAccount.getBalance() << std::endl;

  myAccount.withdraw(200.0);
  std::cout << "current balance: $" << myAccount.getBalance() << std::endl;

  myAccount.withdraw(1500.0);

  return 0;
}
