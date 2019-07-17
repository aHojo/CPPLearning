//
//  main.cpp
//  perfectNumber
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//
// Perfect number is:
// sum of facters of n is equal to 2 * n

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, total = 0;
    
    std::cout << "Enter a number to see if Perfect Number: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        
        if(n % i == 0) {
            total += i;
        }
    }
    
    if (2 * n == total) {
        std::cout << n << " is a perfect number.\n";
    } else {
        std::cout << n << " is not a perfect number.\n";
    }
    
    return 0;
}
