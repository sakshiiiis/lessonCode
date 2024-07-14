#include <iostream>
#include <string>

// Function declarations
void startGame();
void firstRoom();
void secondRoom();

int main() {
    startGame();
    return 0;
}

void startGame() {
    std::string playerName;
    std::cout << "Welcome to the Adventure Game!" << std::endl;
    std::cout << "What is your name, adventurer? ";
    std::cin >> playerName;

    std::cout << "Hello, " << playerName << "! Your adventure begins now." << std::endl;
    firstRoom();
}

void firstRoom() {
    int choice;
    std::cout << "You find yourself in a dark room with two doors." << std::endl;
    std::cout << "1. Enter the left door" << std::endl;
    std::cout << "2. Enter the right door" << std::endl;
    std::cout << "What do you choose? (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You enter the left door and find a treasure chest!" << std::endl;
        secondRoom();
    } else if (choice == 2) {
        std::cout << "You enter the right door and fall into a pit. Game over." << std::endl;
    } else {
        std::cout << "Invalid choice. Try again." << std::endl;
        firstRoom();
    }
}

void secondRoom() {
    std::cout << "Congratulations! You have completed the adventure." << std::endl;
}
