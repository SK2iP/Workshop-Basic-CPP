#include <iostream>

int main() {
    // Declare variable to store user input
    int grade;

    // Prompt user for input
    std::cout << "Enter the numerical grade: ";
    std::cin >> grade;

    // Classify and display the letter grade
    if (grade >= 90) {
        std::cout << "Letter Grade: A" << std::endl;
    } else if (grade >= 80) {
        std::cout << "Letter Grade: B" << std::endl;
    } else if (grade >= 70) {
        std::cout << "Letter Grade: C" << std::endl;
    } else if (grade >= 60) {
        std::cout << "Letter Grade: D" << std::endl;
    } else {
        std::cout << "Letter Grade: F" << std::endl;
    }

    return 0;
}
