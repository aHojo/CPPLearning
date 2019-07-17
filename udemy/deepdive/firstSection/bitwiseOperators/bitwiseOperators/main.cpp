//
//  main.cpp
//  bitwiseOperators
//
//  Created by Andrew Hojnowski on 4/10/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=11,y=5;
    int z;
    
    z = x&y;
    
    std::cout << "Bitwise AND: " << z << "\n";
    
    z = x|y;
    
    std::cout << "Bitwise OR: " << z << "\n";
    
    z = x^y;
    
    std::cout << "Bitwise XOR: " << z << "\n";
    
    char v = 5, n;
    
    n=v<<1;
    
    std::cout << "LEFT SHIFT:  " << (int)n << "\n"; // remember it is mulitplied by 2 to the power of i (number after << or >> )
    
    n=~v;
    
    std::cout <<  "BITWISE NOT: " << (int)n << "\n";
    return 0;
}
