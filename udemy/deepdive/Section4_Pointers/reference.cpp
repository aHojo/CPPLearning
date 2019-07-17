#include <iostream>

int main() {
    int x = 10;
    int &y = x;

    std::cout << x << std::endl; // 10
    y++; // 11 - increasing value x
    x++; // 12

    std::cout << y << std::endl; //12
    std::cout << x << std::endl; //12
    
    std::cout << &x << std::endl; // Same Address as y 0x7ffee030a3e8
    std::cout << &y << std::endl; //Same Address as x 0x7ffee030a3e8

    return 0;
}