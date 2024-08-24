#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/*
Objective:
The project will involve creating a simple student management system where students can add student records, display them, and save them to a file. 
The project will test their understanding of loops, classes, and file handling in C++.

Project Outline:
Provided Part (Skeleton Code):

Basic structure of the class.
Functions declarations.
Main menu loop.
To be Completed by Students:

Implementation of class methods.
File handling code to save and load data.

*/

class Student {

public:
    std::string name;
    int age;
    std::string grade;

    Student() {} //Thing called student exists 
    Student(std::string n, int a, std::string g) : name(n), age(a), grade(g) {} // Inside of Student I have Name, Age, Grade

    void display () const; // Implement this function to display student details
    void saveToFile(std::ofstream &outFile) const; // Implement this function to save student details to a file
    void loadFromFile(std::ifstream &inFile); // Implement this function to load student details from a file

    
};

void Student::display() const {
}

void Student::saveToFile(std::ofstream &outFile) const {
}

void Student::loadFromFile(std::ifstream &inFile) {
}

void addStudent(std::vector<Student> &students) {
    std::string name;
    int age;
    std::string grade;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter grade: ";
    std::cin >> grade;

    students.push_back(Student(name, age, grade));
}

void displayStudents(const std::vector<Student> &students) {
    for (const auto &student : students) {
        student.display();
    }
}

void saveStudentsToFile(const std::vector<Student> &students, const std::string &filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto &student : students) {
            student.saveToFile(outFile);
        }
        outFile.close();
        std::cout << "Students saved to file successfully.\n";
    } else {
        std::cerr << "Error opening file for writing.\n";
    }
}

void loadStudentsFromFile(std::vector<Student> &students, const std::string &filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        while (!inFile.eof()) {
            Student student;
            student.loadFromFile(inFile);
            if (!inFile.eof()) {
                students.push_back(student);
            }
        }
        inFile.close();
        std::cout << "Students loaded from file successfully.\n";
    } else {
        std::cerr << "Error opening file for reading.\n";
    }
}

int main() {
    std::vector<Student> students;
    int choice;
    std::string filename = "students.txt";

    do {
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Save Students to File\n";
        std::cout << "4. Load Students from File\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                saveStudentsToFile(students, filename);
                break;
            case 4:
                loadStudentsFromFile(students, filename);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
