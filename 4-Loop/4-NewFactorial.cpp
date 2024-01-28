#include <iostream>

int main() {
    // Declare variables to store user input and result
    int num, result = 1;

    // Prompt user for input
    std::cout << "Enter the base: ";
    std::cin >> num;


    // Calculate power using a while loop
    int temp = num;
    while (temp > 3) {
        result *= temp;
        temp-=1;
    }

    // Display the result
    std::cout << num << " new factoral is :" << result<<std::endl;

    return 0;
}
