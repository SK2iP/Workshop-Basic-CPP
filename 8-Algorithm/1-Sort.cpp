#include <iostream>
#include <vector>

using namespace std;

// Function to display vector elements
void displayVector(const vector<int>& numbers) {
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

// Bubble Sort Function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Selection Sort Function
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    // Initialize a vector with unsorted elements
    vector<int> numbers = {64, 25, 12, 22, 11};

    // Display original vector
    cout << "Original Vector: ";
    displayVector(numbers);

    // Bubble Sort
    bubbleSort(numbers);
    cout << "\nAfter Bubble Sort: ";
    displayVector(numbers);


    // Reset vector for the next sorting algorithm
    numbers = {64, 25, 12, 22, 11};

    // Selection Sort
    selectionSort(numbers);
    cout << "\nAfter Selection Sort: ";
    displayVector(numbers);

    return 0;
}
