//
//  main.cpp
//  checkAge
//
//  Created by Andrew Hojnowski on 4/12/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int age;
    
    std::cout << "Enter age: " << "\n";
    std::cin >> age;
    
    if (age >= 0 && age <= 50)
        std::cout << "Young" << "\n";
    else
        std::cout << "Not young" << "\n";
    return 0;
}
