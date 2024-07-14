#include <iostream>

// Function declarations
void showMenu();
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;
    bool keepRunning = true;

    while (keepRunning) {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                keepRunning = false;
                std::cout << "Exiting the calculator. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
                break;
        }
    }

    return 0;
}

void showMenu() {
    std::cout << "Simple Calculator Menu" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Please enter your choice: ";
}

void add() {
    double a, b;
    std::cout << "Enter two numbers to add: ";
    std::cin >> a >> b;
    std::cout << "Result: " << a + b << std::endl;
}

void subtract() {
    double a, b;
    std::cout << "Enter two numbers to subtract: ";
    std::cin >> a >> b;
    std::cout << "Result: " << a - b << std::endl;
}

void multiply() {
    double a, b;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> a >> b;
    std::cout << "Result: " << a * b << std::endl;
}

void divide() {
    double a, b;
    std::cout << "Enter two numbers to divide: ";
    std::cin >> a >> b;
    if (b != 0) {
        std::cout << "Result: " << a / b << std::endl;
    } else {
        std::cout << "Error: Cannot divide by zero." << std::endl;
    }
}



/* SESSION JULY 6
#include <iostream>

// Function declaration - Hey this thing exists and I am going to use it at some point
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int divideR(int a, int b);
int mod(int a, int b);

int main() {
    int a, b;
    // Ask the user to pick a number and get input
    std::cout << "Pick a number (a): ";
    std::cin >> a; // a = 5

    // Ask the user to pick another number and get input
    std::cout << "Pick another number (b): ";
    std::cin >> b;
    
    // Perform operations
    // hey this thing exists - find the answer - and then save it inside of this memory box
    
    // memory  == function
    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    double quotient = divide(a, b);
    int qR = divideR(a, b);
    int rem = mod(a, b);
    
    // Output the results
    //std::cout << "The sum is: " << sum << std::endl;
    //std::cout << "The difference is: " << difference << std::endl;
    //std::cout << "The product is: " << product << std::endl;
    //std::cout << "The quotient is: " << quotient << std::endl;
    //std::cout << "The quotient without double is:  " << qR << std::endl;
    std::cout << "The remainder is: " << rem << std::endl;

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


//int - whole numbers
//float - decimal numbers ( small decimals) 3.14
//double - decimal numbers ( big decimals) 3.142323232323
double divide(int a, int b) {
    if (b != 0)
        return static_cast<double>(a) / b;  // 5/6 = 1
    else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int divideR (int a, int b){
    return a/b;
}

int mod(int a, int b) {
   if (b != 0)
       return a % b;
    else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
    
}
*/