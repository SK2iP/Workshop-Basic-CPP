#include <iostream>

int main() {
    // Declare variables to store user input and result
    int number, sum = 0;

    // Prompt user for input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Calculate sum of digits using a while loop
    int temp = number;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Display the result
    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
