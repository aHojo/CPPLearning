//
//  main.cpp
//  sumOfNNumbers
//
//  Created by Andrew Hojnowski on 4/17/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n, total = 0;
    
    std::cout << "Please enter a number to get the sum of: ";
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    
    std::cout << "Sum is: " << total << "\n";
    return 0;
}
