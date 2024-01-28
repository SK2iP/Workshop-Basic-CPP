#include <iostream>

int main() {
    // Declare variable to store user input
    int number;

    // Prompt user for input
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;
}
