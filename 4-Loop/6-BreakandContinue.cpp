#include <iostream>

int main() {
    // Loop with Break
    std::cout << "Loop with Break:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
        if (i == 5) {
            std::cout << "(Breaking out)";
            break;
        }
    }
    std::cout << std::endl << std::endl;

    // Loop with Continue
    std::cout << "Loop with Continue:" << std::endl;
    int j = 1;
    while (j <= 10) {
        if (j % 2 != 0) {
            std::cout << "(Skipped odd iteration) ";
            ++j;
            continue;
        }
        std::cout << j << " ";
        ++j;
    }
    std::cout << std::endl;

    return 0;
}
