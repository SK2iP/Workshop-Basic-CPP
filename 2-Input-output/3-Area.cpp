#include <iostream>

int main() {
    // Declare variables to store user inputs and result
    double length, width, area;

    // Prompt user for input
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate the area of the rectangle
    area = length * width;

    // Display the result
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
