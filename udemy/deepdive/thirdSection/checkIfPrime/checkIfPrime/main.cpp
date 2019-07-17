//
//  main.cpp
//  checkIfPrime
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

// If number is divisible by 1 and itself, not any other number.
#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    
    std::cout << "Enter number to check if Prime: ";
    std::cin >> n;
    
    for (int i = 2; i < n; i ++) {
        if (n % 2 == 0) {
            std::cout << n << " is not a prime number!\n";
            return 1;
        }
    }
    
    std::cout << n << " is a prime number.\n";
    return 0;
}
