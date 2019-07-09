//
//  main.cpp
//  reversingANumber
//
//  Created by Andrew Hojnowski on 4/19/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, tmp, rev = 0;
    
    std::cout << "Enter a number to reverse: ";
    std::cin >> n;
    
    while (n != 0) {
         tmp = n % 10;
        n /= 10;
        
        rev = rev * 10 + tmp;
    }
    
    std::cout << rev << std::endl;
    return 0;
}
