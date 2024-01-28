#include <iostream>

// Function declaration
int calculateSum(const int arr[], int size);

int main() {
    // Declare and initialize an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate and display the sum of the array elements
    std::cout << "Sum of Array Elements: " << calculateSum(numbers, 5) << std::endl;

    return 0;
}

// Function definition
int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
