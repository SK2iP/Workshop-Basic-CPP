#include <iostream>

// Global variable
int globalVar = 30;

// Function with a local variable
void exampleFunction() {
    // Local variable
    int localVar = 40;

    // Display values
    std::cout << "Local Variable: " << localVar << std::endl;
    std::cout << "Global Variable: " << globalVar << std::endl;
}

int main() {
    // Call the function to demonstrate local and global variables
    exampleFunction();

    // Display the global variable within the main function
    std::cout << "Global Variable in main: " << globalVar << std::endl;

    return 0;
}
