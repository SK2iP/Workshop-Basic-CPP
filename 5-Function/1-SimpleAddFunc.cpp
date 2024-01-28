#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    // Declare variables to store user input and result
    int num1, num2;

    // Prompt user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the add function and display the result
    std::cout << "Sum: " << add(num1, num2) << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
