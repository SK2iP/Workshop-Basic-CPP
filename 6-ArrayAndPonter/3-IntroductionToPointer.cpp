#include <iostream>

int main() {
    // Declare a variable
    int number = 17;

    // Declare a pointer and assign the address of the variable
    int *ptr = &number;

    // Display the values and addresses
    std::cout << "Variable Value: " << number << std::endl;
    std::cout << "Variable Address: " << &number << std::endl;
    std::cout << "Pointer Value (Dereferenced): " << *ptr << std::endl;
    std::cout << "Pointer Address: " << ptr << std::endl;

    return 0;
}
