//
//  main.cpp
//  rootOfQuadraticEquation
//
//  Created by Andrew Hojnowski on 4/9/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//
// ax^2 + bx + c = 0
// Below is the quadratic equation. It's used to find the possible values of x in the equation below.
//
// Equation r = -b +- sqrt(b^2 - 4ac) / (2a)

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    // insert code here...
    float r1, r2, a, b, c;
    
    std::cout << "Please input the coefficients (a b c): ";
    
    std::cin >> a >> b >> c;
    
    r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    
    std::cout << "The possible roots are: " << r1 << " and " << r2 << "\n";
    return 0;
}

