//
//  main.cpp
//  factorsOfANumber
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    
    std::cout << "Enter a number to get the factors of: ";
    std::cin >> n;
    
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << "Facter: " << i << "\n";
        }
    }
    return 0;
}
