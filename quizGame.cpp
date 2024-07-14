#include <iostream>
#include <string>
#include <vector>

// Function declarations
void startQuiz();
void displayQuestion(const std::string& question, const std::string& answer, int& score);

int main() {
    char playAgain;
    do {
        startQuiz();
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing the quiz game! Goodbye!" << std::endl;
    return 0;
}

void startQuiz() {
    // Define the questions and answers
    std::vector<std::string> questions = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "What is the color of the sky on a clear day?"
    };

    std::vector<std::string> answers = {
        "Paris",
        "4",
        "Blue"
    };

    int score = 0;

    // Loop through the questions
    for (size_t i = 0; i < questions.size(); ++i) {
        displayQuestion(questions[i], answers[i], score);
    }

    // Display the final score
    std::cout << "You finished the quiz! Your score is: " << score << " out of " << questions.size() << std::endl;
}

void displayQuestion(const std::string& question, const std::string& answer, int& score) {
    std::string userAnswer;
    std::cout << question << std::endl;
    std::cout << "Your answer: ";
    std::cin >> userAnswer;

    if (userAnswer == answer) {
        std::cout << "Correct!" << std::endl;
        ++score;
    } else {
        std::cout << "Incorrect. The correct answer is: " << answer << std::endl;
    }
    std::cout << std::endl;
}
