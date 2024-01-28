#include <iostream>

// Function declaration
int factorial(int n);

int main() {
    // Declare variables to store user input and result
    int num;

    // Prompt user for input
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Call the factorial function and display the result
    std::cout << "Factorial: " << factorial(num) << std::endl;

    return 0;
}

// Function definition
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
