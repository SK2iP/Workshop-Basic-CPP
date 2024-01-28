#include <iostream>

int main() {
    // Declare variables to store user input and result
    double celsius, fahrenheit;

    // Prompt user for input
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Perform temperature conversion
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the result
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
