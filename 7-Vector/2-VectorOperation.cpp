#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare an empty vector of integers
    vector<int> data;

    // Append elements to the vector
    data.push_back(10);
    data.push_back(20);
    data.push_back(30);

    // Display vector elements and size
    cout << "Vector Elements: ";
    for (int element : data) {
        cout << element << " ";
    }
    cout << "\nVector Size: " << data.size() << endl;

    // Remove the last element
    data.pop_back();

    // Display updated vector elements and size
    cout << "Updated Vector Elements: ";
    for (int element : data) {
        cout << element << " ";
    }
    cout << "\nUpdated Vector Size: " << data.size() << endl;

    return 0;
}
