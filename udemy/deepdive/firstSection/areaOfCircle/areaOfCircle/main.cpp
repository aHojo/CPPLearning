//
//  main.cpp
//  areaOfCircle
//
//  Created by Andrew Hojnowski on 4/9/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    float radius, area;
    
    std::cout << "Enter radius: ";
    std::cin >> radius;
    
    area = 3.1425f * radius * radius;
    
    std::cout << "Area is: " << area << "\n";
    
    return 0;
}
