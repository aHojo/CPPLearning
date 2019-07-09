//
//  main.cpp
//  checkGreatestOf3NestedIf
//
//  Created by Andrew Hojnowski on 4/12/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int x, y, z;
    
    std::cout << "Enter 3 whole numbers, space delimited: " << "\n";
    std::cin >> x >> y >> z;
    
    if (x > y && x > z)
        std::cout << x << " is greatest" << "\n";
    else {
        if (y > z) {
            std::cout << y << " is greatest" << "\n";
            return 0;
        }
        if ( z > y ) {
            std::cout << z << " is greatest" << "\n";
            return 0;
        }
        
    }
    return 0;
}
