/*
Tasks:

Print your first hello world

Print : Hi, how are you?
Print : Sorry what's that
Print : I said : "Hi, how are you?" * with the quotations *

Make a Pick a Number Function
Declare a new function called num_pick
Ask a User to Pick a 
Get Input
Ask a User to Pick b
Get Input 
Print those two numbers 
  number 1 is :
  number 2 is : 

Comment out your code - Let's work with main for a bit

set a variable to an int number
Another one
Now Add those two int
What if we changed the ints to floats
What if we changed them to doubles
What if we changed them to chars
What if we changed them to bools

Fix anything that needs to be fixed :) -> this is called dubugging

*/

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

    return;
}

// What is std::endl;
