#include <iostream>

// Function declaration
int fibonacci(int n);

int main() {
    // Declare variable to store user input
    int terms;

    // Prompt user for input
    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> terms;

    // Display the Fibonacci sequence
    std::cout << "Fibonacci sequence up to " << terms << " terms: ";
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}

// Function definition
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
