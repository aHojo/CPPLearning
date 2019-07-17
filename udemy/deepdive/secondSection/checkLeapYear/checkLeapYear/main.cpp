//
//  main.cpp
//  checkLeapYear
//
//  Created by Andrew Hojnowski on 4/16/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int year;
    
    std::cout << "Enter year to check if leap year: ";
    std::cin >> year;
    
    if (year % 4 == 0 && year % 400 == 0) {
        std::cout << "The year " << year << " is a leap year!\n";
    } else if (year % 4 == 0 && year % 400 == 0) {
        std::cout << "The year " << year << " is a leap year!!!!!\n";
    } else {
        std::cout << "The year is not a leap year! \n";
    }
    return 0;
}
