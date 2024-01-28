#include <iostream>
#include <string>
using namespace std;
int main() {
    // Declare variable to store the number
    int length;

    std::cout<<"What is the Square length:";
    std::cin>>length;
    //Declare side to print
    for (int i = 0 ; i < length ; i++)
    {
        if(i == 0 || i == length - 1)
        {
            for(int j = 0 ; j < length ; j++)
            {
                std::cout<<"*";
            }
            std::cout<<endl;
        }
        else 
        {
            std::cout<<"*";
            for(int j = 0 ; j < length-2 ; j++)
            {
                std::cout<<" ";
            }
            std::cout<<"*"<<endl;
        }
    }

    return 0;
}
