//
//  main.cpp
//  factorialNumber
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, factorial=1;
    
    std::cout << "Please enter a number to get a facotrial of: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    std::cout << "Factorial: " << factorial << std::endl;
    return 0;
}
