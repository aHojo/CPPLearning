#include <iostream>

int main() 
{
    int x,y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    if (x > y) {
        std::cout << "X is greater: " << x << std::endl;
    } else {

        std::cout << "Y is greater: " << y << std::endl;
    }


    return 0;
}