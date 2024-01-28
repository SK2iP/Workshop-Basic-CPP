#include <iostream>

int main() {
    // Declare variable to store user input
    double temperature;

    // Prompt user for input
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temperature;

    // Classify and display the weather condition using nested conditions
    if (temperature < 0) {
        std::cout << "Freezing." << std::endl;
    } else {
        if (temperature <= 10) {
            std::cout << "Cold." << std::endl;
        } else {
            if (temperature <= 20) {
                std::cout << "Moderate." << std::endl;
            } else {
                std::cout << "Warm." << std::endl;
            }
        }
    }

    return 0;
}
