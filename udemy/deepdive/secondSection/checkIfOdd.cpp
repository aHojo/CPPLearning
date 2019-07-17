#include <iostream>

int main() 
{
    int x;

    std::cout << "Enter a number to check if odd or not: ";
    std::cin >> x;

    if(x % 2 == 0) {
        std::cout << x << " is even!";
    } else {
        std::cout << x << " is odd!";
    }

    return 0;
}