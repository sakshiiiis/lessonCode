#include <iostream>
#include <string> 

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

    std::cout << "Enter a name: ";
    std::getline(std::cin, name);
    std::cout << "Enter a place: ";
    std::getline(std::cin, place);
    std::cout << "Enter an object: ";
    std::getline(std::cin, object);
    std::cout<< "Enter an adjective: ";
    std::getline(std::cin, adjective);

// Generate and display the story
    std::cout << "\nHere's your story:" << std::endl;
    std::cout << "Once upon a time, there was a person named " << name << " who lived in " << place << "." << std::endl;
    std::cout << "It was a " << adjective << "place, and inside this place was a mysterious " << object << "." <<std::endl;
}
