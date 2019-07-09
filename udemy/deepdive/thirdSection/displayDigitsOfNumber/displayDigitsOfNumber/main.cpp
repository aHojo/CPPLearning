//
//  main.cpp
//  displayDigitsOfNumber
//
//  Created by Andrew Hojnowski on 4/19/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

// n     |    n % 10     |    n=n/10
// 1724  |      4        |    172
// 172   |      2        |    17
// 17    |      7        |    1
// 1     |      1        |    0

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, tempNum;
    
    
    std::cout << "Enter a number to get the digits of: ";
    std::cin  >> n;
    tempNum = n;
    while (tempNum != 0) {
        // Modulo's remainder will be the last digit.
        std::cout << tempNum % 10 << std::endl;
        
        // Since it's an INT, division gets truncated to a whole number
        // i.e 1724/10 = 172.4 truncated 172
        tempNum /= 10;
    }
    return 0;
}
