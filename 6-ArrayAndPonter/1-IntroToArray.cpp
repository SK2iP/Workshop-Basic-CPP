#include <iostream>

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Display the content of the array
    std::cout << "Array Content: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
