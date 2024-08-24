#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Student {
public:
    std::string name;
    int age;
    std::string grade;

    Student() {}
    Student(std::string n, int a, std::string g) : name(n), age(a), grade(g) {}

    void display() const; // Marked as const

    void saveToFile(std::ofstream &outFile) const; // Marked as const

    void loadFromFile(std::ifstream &inFile);
};

void Student::display() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "-----------------------\n";
}

void Student::saveToFile(std::ofstream &outFile) const {
    outFile << name << "\n" << age << "\n" << grade << "\n";
}

void Student::loadFromFile(std::ifstream &inFile) {
    std::getline(inFile, name);
    inFile >> age;
    inFile.ignore(); // To ignore the newline character after age
    std::getline(inFile, grade);
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
    std::ofstream outFile(filename); // File 
    if (outFile.is_open()) { // If file is open
        for (const auto &student : students) { // Check the big box Students - pick a student if there exists one 
            student.saveToFile(outFile); // send it to SavetoFile 
        }
        outFile.close(); // closes file 
        std::cout << "Students saved to file successfully.\n"; // Tells user if save has happened
    } else {
        std::cerr << "Error opening file for writing.\n"; // If there is an error tells user there has been an error
    }
}

void loadStudentsFromFile(std::vector<Student> &students, const std::string &filename) {
    std::ifstream inFile(filename);
    if (inFile.is_open()) {
        while (!inFile.eof()) { // eof = End of File. While we are not at the end of the file 
            Student student; // pick a grey box
            student.loadFromFile(inFile); // send grey box to loadfromfile
        
            if (!inFile.eof()) { // if not at end of file 
                students.push_back(student); // Send students back to student 
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
