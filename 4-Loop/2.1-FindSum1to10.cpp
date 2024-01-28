#include <iostream>

int main() {
    // Declare variable to store the sum
    int sum = 0;

    // Calculate the sum of integers using a for loop
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }

    // Display the result
    std::cout << "Sum of integers from 1 to 10: " << sum << std::endl;

    return 0;
}
