#include <iostream>

int main() {
    // Declare variables to store user inputs
    int num1, num2;

    // Prompt user for input
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Perform arithmetic calculation
    int sum = num1 + num2;

    // Display the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
