#include <iostream>

int main() {
    // Declare variables to store user input
    int choice;
    double num1, num2;

    // Display menu
    std::cout << "Calculator Menu:" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    // Prompt user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the selected operation using switch
    switch (choice) {
        case 1:
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is undefined." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
    }

    return 0;
}
