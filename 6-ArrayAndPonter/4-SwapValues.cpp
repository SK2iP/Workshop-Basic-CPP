#include <iostream>

// Function declaration
void swapValues(int* a, int* b);

int main() {
    // Declare and initialize two integer variables
    int num1 = 5, num2 = 10;

    // Display values before swap
    std::cout << "Before Swap - num1: " << num1 << ", num2: " << num2 << std::endl;

    // Call the swapValues function to swap values using pointers
    swapValues(&num1, &num2);

    // Display values after swap
    std::cout << "After Swap - num1: " << num1 << ", num2: " << num2 << std::endl;

    return 0;
}

// Function definition to swap values using pointers
void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
