//
//  main.cpp
//  dayNumber
//
//  Created by Andrew Hojnowski on 4/15/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

enum day {mon=1, tues, wed, thurs, fri, sat, sun};
int main(int argc, const char * argv[]) {
    // insert code here...
    int userDay;
    
    std::cout << "Enter day number (1-7): ";
    std::cin >> userDay;
    
    if (userDay == mon) {
        std::cout << "Monday" << "\n";
    } else if (userDay == tues) {
        std::cout << "Tuesday" << "\n";
    }
    else if (userDay == wed) {
        std::cout << "Wednesday" << "\n";
    }
    else if (userDay == thurs) {
        std::cout << "Thursday" << "\n";
    }
    else if (userDay == fri) {
        std::cout << "Friday" << "\n";
    }
    else if (userDay == sat) {
        std::cout << "Saturday" << "\n";
    }
    else if (userDay = sun){
        std::cout << "Sunday" << "\n";
    }
    else {
        std::cout << "Invalid UserDay" << "\n";
    }
    
    return 0;
}
