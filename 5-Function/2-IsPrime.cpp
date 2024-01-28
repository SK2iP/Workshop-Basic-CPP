#include <iostream>

// Function declaration
bool isPrime(int num);

int main() {
    // Declare variable to store user input
    int number;

    // Prompt user for input
    std::cout << "Enter a positive integer to check if it is prime: ";
    std::cin >> number;

    // Check if the number is prime
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}

// Function definition
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
