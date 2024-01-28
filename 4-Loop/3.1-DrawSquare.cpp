#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare variable to store the number
    int length;

    std::cout<<"What is the Square length:";
    std::cin>>length;
    //Declare side to print
    string side = "";
    
    //Make the side
    for (int i = 0; i < length; ++i) {
        side += "*";
    }

    //Display the side 
    for (int i = 0; i < length; ++i) {
        std::cout<<side<<std::endl;
    }

    return 0;
}
