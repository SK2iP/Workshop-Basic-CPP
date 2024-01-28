#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare and initialize a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Display the elements of the vector
    cout << "Vector Elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
