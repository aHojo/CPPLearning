// area = (b* h) / 2

#include <iostream>

int main() 
{
    int base, height;
    float area;

    std::cout << "Please input the base of the triangle: " ;
    std::cin >> base;

    std::cout << "Please input the height of the triangle: ";
    std::cin >> height;

    area = (float) (base * height) / 2; 

    std::cout << "The area of the triangle is: " << area << std::endl;
    
    return 0;
}