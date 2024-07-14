#include <iostream>
#include <string>

// Function declarations
void generateStory();

int main() {
    char createAnotherStory;
    do {
        generateStory();
        std::cout << "Do you want to create another story? (y/n): ";
        std::cin >> createAnotherStory;
        std::cin.ignore(); // To clear the newline character from the buffer
    } while (createAnotherStory == 'y' || createAnotherStory == 'Y');

    std::cout << "Thanks for using the Personalized Story Generator! Goodbye!" << std::endl;
    return 0;
}

void generateStory() {
    std::string name;
    std::string place;
    std::string object;
    std::string adjective;

    // Get user inputs
    std::cout << "Enter a name: ";
    std::getline(std::cin, name);
    std::cout << "Enter a place: ";
    std::getline(std::cin, place);
    std::cout << "Enter an object: ";
    std::getline(std::cin, object);
    std::cout << "Enter an adjective: ";
    std::getline(std::cin, adjective);

    // Generate and display the story
    std::cout << "\nHere's your story:" << std::endl;
    std::cout << "Once upon a time, there was a person named " << name << " who lived in " << place << "." << std::endl;
    std::cout << name << " loved to play with a " << adjective << " " << object << "." << std::endl;
    std::cout << "One day, " << name << " found a magic " << object << " that changed their life forever." << std::endl;
    std::cout << "And they lived happily ever after." << std::endl;
}

