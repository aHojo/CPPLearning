//
//  main.cpp
//  multiplicationTable
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int num, total;
    
    std::cout << "Enter number to get a multiplication table for (Whole Number): ";
    std::cin >> num;
    
    for (int i = 0; i <= 10; i++) {
        total = num * i;
        std::cout << num << " * " << i << " = " << total << std::endl;
    }
    
    
    return 0;
}
