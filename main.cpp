#include <iostream> // Include necessary header

//int addition(); // Function declaration

int main() {
    int secretNumber = 7; // Secret number to guess
    int guess; // Variable to store the player's guess

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "Guess the secret number between 1 and 10: ";
    std::cin >> guess; // Get the player's guess

    // Check if the guess is correct, too high, or too low using relational operators
    if (guess == secretNumber) {
        std::cout << "Congratulations! You guessed the correct number!" << std::endl;
    } else if (guess > secretNumber) {
        std::cout << "Your guess is too high. Try again!" << std::endl;
    } else {
        std::cout << "Your guess is too low. Try again!" << std::endl;
    }

    // Bonus: Use logic operators to provide additional feedback
    if (guess >= 1 && guess <= 10) {
        if (guess == secretNumber) {
            std::cout << "You guessed it right!" << std::endl;
        } else {
            std::cout << "Good guess, but not quite right." << std::endl;
        }
    } else {
        std::cout << "Please guess a number between 1 and 10." << std::endl;
    }

    return 0;
}

/*

int main(){

std::cout << "Hello World" << std::endl;

// print : Hi, how are you?

//print : Sorry what's that

//print : I said : "Hi, how are you?"

#include <iostream>

int main() {
    std::cout << "Hi, how are you?" << std::endl;
    std::cout << "Sorry what's that" << std::endl;
    std::cout << I said "\"Hi, how are you?\"" << std::endl;
    return 0;
}

#include <iostream>

// Function declaration
void num_pick();

int main() {
    num_pick(); // Call the num_pick function
    return 0;
}

// Function definition
void num_pick() {
    int a, b;

    // Ask the user to pick a number and get input
    std::cout << "Pick a number (a): ";
    std::cin >> a;

    // Ask the user to pick another number and get input
    std::cout << "Pick another number (b): ";
    std::cin >> b;

    // Print the two numbers
    std::cout << "Number 1 is: " << a << std::endl;
    std::cout << "Number 2 is: " << b << std::endl;
}

return 0;
}

*/

    // bool a = '5';
    //bool b = '6';
    //bool sum = a + b;
    //std::cout << "The sum of a + b is: " << sum << std::endl; // Print the result
    //return 0;
//}

//int addition() {
   // int a = 5;
    //int b = 6;
    //int sum = a + b;
    //return sum;
//}

/*
EQUAL TO (==)
5 == 5 // true
3 == 4 // false

NOT EQUAL TO (!=)
5 != 2 // true
1 != 1 // false

GREATER THAN (>)
5 > 3 // true
2 > 3 // false

LESS THAN (<)
3 < 5 // true
6 < 5 // false

GREATER THAN OR EQUAL TO (>=)
5 >= 5 // true
6 >= 2 // true
3 >= 4 // false

LESS THAN OR EQUAL TO (<=)
4 <= 4 // true
2 <= 3 // true
5 <= 4 // false
*/
/*
AND (&&) --> * 
true && true // true
true && false // false

true = 1
false = 0

1 && 1 --> 1 * 1 = 1 
1 && 0 --> 1 * 0 = 0


OR (||) --> + 
true || false // true
false || false // false

true = 1
false = 0

1 || 1 --> 1 + 1 = 1 
0 || 0 --> 0 + 0 = 0

This looks familiar ... light switch logic! 

NOT (!)
!true // false
!false // true

true = 1
false = 0

!1 --> if it is not 1 than it has to be 0 
!0 --> if it is not 0 than it has to be 1

*/