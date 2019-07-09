//
//  main.cpp
//  checkIfWorking
//
//  Created by Andrew Hojnowski on 4/12/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int hour;
    
    std::cout << "What is the hour? (0-24): ";
    std::cin >> hour;
    
    if (hour >= 9 && hour <= 18) {
        std::cout << "This is a working hour" << "\n";
    } else {
        std::cout << "Not Working." << "\n";
    }
    return 0;
}
