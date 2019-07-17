//
//  main.cpp
//  armstrongNumber
//
//  Created by Andrew Hojnowski on 4/19/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
// 153 get digits
// 3
// 5
// 1
// Take the cubes of the digits and add them
// 1 ^ 3 + 5 ^ 3  + 3 ^ 3
//    1 + 125 + 27 = 153
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int sum = 0, n, tempNum;
    
    std::cout << "Enter a number to find out if Armstrong Number: ";
    std::cin >> n;
    tempNum = n;
    // Get the digits
    while ( tempNum != 0) {
        // Since this is declared in the block, it is thrown away each time by the garbage collector.
        int temp;
        
        // Temporarily store the digit so we can cube it.
        temp = tempNum % 10;
        
        // Add the cube of our digit to the summation.
        sum += (temp * temp * temp);
        
        // Truncate the number down to the next digit.
        tempNum /= 10;
    }
    
    if (n == sum)
        std::cout << "Armstrong Number: " << n << " = " << sum << std::endl;
    else
        std::cout << "NOT Armstrong Number: " << n << " = " << sum << std::endl;
    
    return 0;
}
