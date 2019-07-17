//
//  main.cpp
//  InsertionOperatorOverload
//
//  Created by Andrew Hojnowski on 7/1/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//
#include <iostream>

class Complex
{
  private:
    int real;
    int img;
  public:
    Complex(int r=0, int i=0)
    {
        real = r;
        img = i;
        
    }
    
    void display()
    {
        std::cout << real << "+i" << img << std::endl;
    }
    
    friend std::ostream &operator<<(std::ostream &out, Complex &c);
    
};

std::ostream &operator<<(std::ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << "\n";
    
    return out;
}


int main(int argc, const char * argv[]) {
    Complex c(10,5);
    c.display(); // 10+i5
    std::cout << c; // Similar to operator<<(cout, c); // 10+i5
}
