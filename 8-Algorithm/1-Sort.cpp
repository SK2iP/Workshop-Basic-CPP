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

// Merge Sort Functions
void merge(vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for (int i = 0; i < n1; ++i) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        rightArray[j] = arr[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            ++i;
        } else {
            arr[k] = rightArray[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
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

    // Merge Sort
    mergeSort(numbers, 0, numbers.size() - 1);
    cout << "\nAfter Merge Sort: ";
    displayVector(numbers);

    // Reset vector for the next sorting algorithm
    numbers = {64, 25, 12, 22, 11};

    // Selection Sort
    selectionSort(numbers);
    cout << "\nAfter Selection Sort: ";
    displayVector(numbers);

    return 0;
}
