#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to display vector elements
void displayVector(const vector<int>& numbers) {
    cout << "Vector Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to calculate and return the sum of vector elements
int calculateSum(const vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

// Function to sort the vector in ascending order
void sortVector(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

// Function to search for a number in the vector
bool searchNumber(const vector<int>& numbers, int target) {
    return find(numbers.begin(), numbers.end(), target) != numbers.end();
}

int main() {
    // Initialization: Initialize a vector with values provided by the user
    vector<int> numbers;
    int size, value;

    cout << "Enter the size of the vector: ";
    cin >> size;

    cout << "Enter " << size << " integer values separated by spaces: ";
    for (int i = 0; i < size; ++i) {
        cin >> value;
        numbers.push_back(value);
    }

    // Display the vector
    displayVector(numbers);

    // Sum Calculation: Calculate and display the sum of vector elements
    int sum = calculateSum(numbers);
    cout << "Sum of Vector Elements: " << sum << endl;

    // Sorting: Sort the vector in ascending order and display the sorted vector
    sortVector(numbers);
    cout << "Sorted Vector: ";
    displayVector(numbers);

    // Search: Prompt the user for a number to search in the vector
    int targetNumber;
    cout << "Enter a number to search in the vector: ";
    cin >> targetNumber;

    // Display whether the number is found or not
    if (searchNumber(numbers, targetNumber)) {
        cout << "Number " << targetNumber << " is found in the vector." << endl;
    } else {
        cout << "Number " << targetNumber << " is not found in the vector." << endl;
    }

    return 0;
}
