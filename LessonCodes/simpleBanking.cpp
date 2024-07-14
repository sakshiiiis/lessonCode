#include <iostream>

// Function declarations
void showMenu();
void checkBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {
    double balance = 0.0;
    int choice;
    bool keepRunning = true;

    while (keepRunning) {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                keepRunning = false;
                std::cout << "Exiting the banking system. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}

void showMenu() {
    std::cout << "Simple Banking System Menu" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Please enter your choice: ";
}

void checkBalance(double balance) {
    std::cout << "Your current balance is: $" << balance << std::endl;
}

void deposit(double &balance) {
    double amount;
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;
    if (amount > 0) {
        balance += amount;
        std::cout << "You have deposited $" << amount << ". Your new balance is $" << balance << std::endl;
    } else {
        std::cout << "Invalid amount. Please enter a positive number." << std::endl;
    }
}

void withdraw(double &balance) {
    double amount;
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "You have withdrawn $" << amount << ". Your new balance is $" << balance << std::endl;
    } else if (amount > balance) {
        std::cout << "Insufficient funds. Your balance is $" << balance << std::endl;
    } else {
        std::cout << "Invalid amount. Please enter a positive number." << std::endl;
    }
}
