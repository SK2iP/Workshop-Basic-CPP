#include <iostream>

int main() {
    // Declare variables to store user input and result
    int n;

    // Prompt user for input
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    // Calculate the sum of squares using a for loop
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    // Display the result
    std::cout << "Sum of squares of the first " << n << " natural numbers: " << sum << std::endl;

    return 0;
}
