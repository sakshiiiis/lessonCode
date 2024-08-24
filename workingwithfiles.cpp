// Header Files 

#include <iostream>
#include <fstream>
#include <string>

// Function
int main() {
    
    std::ofstream outFile("practice.txt");

    if (outFile.is_open()) {
        outFile << "First line of text." << std::endl;
        outFile << "Second line of text." << std::endl;
        outFile.close();
    } else {
        // cerr -> Error Msg -> Part of #include <iostream>
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    std::ifstream inFile("practice.txt");
    std::string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    outFile.open("practice.txt", std::ios::app);
    if (outFile.is_open()) {
        outFile << "Appended line of text." << std::endl;
        outFile.close();
    } else {
        std::cerr << "Error opening file for appending." << std::endl;
        return 1;
    }

    return 0;
}
