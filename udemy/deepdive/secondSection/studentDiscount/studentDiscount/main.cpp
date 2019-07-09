//
//  main.cpp
//  studentDiscount
//
//  Created by Andrew Hojnowski on 4/16/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    float bill;
    
    std::cout << "Enter total Bill: ";
    std::cin >> bill;
    
    if (bill >= 500) {
        bill -= ((bill * 20) / 100);
    } else if (bill >= 100){
        bill -= ((bill * 10) / 100);
    } else {
        std::cout << "To small of bill, no discount!\n";
    }
    
    std::cout << "Bill Total: " << bill << std::endl;
    
    return 0;
}
