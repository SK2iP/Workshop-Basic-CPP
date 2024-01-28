#include <iostream>

int main() {
    // Declare variable to store user input
    int age;

    // Prompt user for input
    std::cout << "Enter the age: ";
    std::cin >> age;

    // Calculate and display ticket price based on age
    if (age >= 0 && age <= 5) {
        std::cout << "Ticket Price: Free" << std::endl;
    } else if (age >= 6 && age <= 12) {
        std::cout << "Ticket Price: Child (50% discount)" << std::endl;
    } else if (age >= 13 && age <= 60) {
        std::cout << "Ticket Price: Adult" << std::endl;
    } else {
        std::cout << "Ticket Price: Senior (25% discount)" << std::endl;
    }

    return 0;
}
