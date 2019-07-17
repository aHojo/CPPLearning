#include <iostream>

int main() 
{
    int x;


    std::cout << "Please enter a number to check for positive or negative: ";
    std::cin >> x;
    
    if (x < 0) {
        std::cout << x << " is negative!" << "\n";
    } else {
        std::cout << x << " is positive!" << "\n";
    }

    return 0;
}