#include <iostream>

int main() {
    // Declare variables to store user input
    int actualDay, actualMonth, actualYear;
    int expectedDay, expectedMonth, expectedYear;

    // Prompt user for input
    std::cout << "Enter the actual return date (day month year): ";
    std::cin >> actualDay >> actualMonth >> actualYear;

    std::cout << "Enter the expected return date (day month year): ";
    std::cin >> expectedDay >> expectedMonth >> expectedYear;

    // Calculate fine using nested conditions
    int fine = 0;

    if (actualYear > expectedYear) {
        fine = 10000;  // Fixed amount for returning after the expected return year
    } else if (actualYear == expectedYear && actualMonth > expectedMonth) {
        fine = 500 * (actualMonth - expectedMonth);  // Fine based on months late within the same year
    } else if (actualYear == expectedYear && actualMonth == expectedMonth && actualDay > expectedDay) {
        fine = 15 * (actualDay - expectedDay);  // Fine based on days late within the same month
    }

    // Display the fine amount
    std::cout << "Fine Amount: " << fine << std::endl;

    return 0;
}
