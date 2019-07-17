//
//  main.cpp
//  enumandTypedef
//
//  Created by Andrew Hojnowski on 4/10/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

//enum day { mon, tue, wed, thur, fri, sat, sun};

typedef int marks;
typedef std::string string;

int main(int argc, const char * argv[]) {
    marks m1, m2;
    
    m1=50;
    m2=90;
    
    string var1 = "Hello World";
    std::cout << var1 << "\n";
    
//    day d;
//
//    d=tue;
//
//    std::cout << d << "\n";
//    std::cout << mon << "\n";
//    std::cout << tue << "\n";
//    std::cout << wed << "\n";
//    std::cout << thur << "\n";
//    std::cout << fri << "\n";
//    std::cout << sat << "\n";
//    std::cout << sun << "\n";
    
    
    return 0;
}
