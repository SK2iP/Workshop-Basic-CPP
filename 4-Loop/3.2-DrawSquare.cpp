#include <iostream>

int main() {
    // Declare variable to store the number
    int length;
    //Input length
    std::cout<<"What is the Square length:";
    std::cin>>length;
    //Draw it with two for
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
