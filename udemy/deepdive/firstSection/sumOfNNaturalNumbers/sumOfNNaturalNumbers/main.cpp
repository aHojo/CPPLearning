//
//  main.cpp
//  sumOfNNaturalNumbers
//
//  Created by Andrew Hojnowski on 4/9/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//
// Formula = sum = n * (n + 1) / 2

#include <iostream>

int main(int argc, const char * argv[]) {
    int sum, n;
    
    std::cout << "Please input the number of natural numbers to sum up: ";
    std::cin >> n;
    
    sum = n * (n + 1) / 2;
    
    std::cout << "The sum is: " << sum << "\n";
    return 0;
}
