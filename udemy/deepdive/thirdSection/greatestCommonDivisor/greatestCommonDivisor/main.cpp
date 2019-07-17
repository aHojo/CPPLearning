//
//  main.cpp
//  greatestCommonDivisor
//
//  Created by Andrew Hojnowski on 4/19/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//
/*
 Have 2 numbers
 30 AND 21
 Subtract the greater from the smaller
 30-21 =9
 21 -9 = 12
 12 -9 = 3
 9 - 3 = 6
 6 -3 = 3
 3 -3 = 0
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    int m, n, tmp;
    
    std::cout << "Enter two numbers to find the GDC: ";
    std::cin >> m >> n;
    
    while ( m != n) {
        if (m > n) {
            m = m -n;
        } else {
            n = n - m;
        }
    }
    
    std::cout << m << "\n";
    return 0;
}
