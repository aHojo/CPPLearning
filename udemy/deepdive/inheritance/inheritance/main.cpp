//
//  main.cpp
//  inheritance
//
//  Created by Andrew Hojnowski on 7/2/19.
//  Copyright © 2019 Andrew Hojnowski. All rights reserved.
//

#include <iostream>

class Rectangle
{
    private:
        int length;
        int width;
    public:
    Rectangle(int r=0, int b=0);
    int getLength();
    int getWidth();
    int setLength(int l);
    int setWidth(int w);
    int area();
    int perimeter();
};

class Cuboid:public Rectangle
{
    private:
        int height;
    public:
        // gets Length and height from Recatngle
        Cuboid(int l = 0, int w = 0, int h = 0)
        {
            height = h;
            
            // From Rectangle, Can't access length and width since they are private
            setLength(l);
            setWidth(w);
        }
    
        int getHeight();
        void setHeight(int h);
        int volume(){
            return getLength() * getHeight() * getWidth();
        }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Cuboid c(10,5,3);
    
    std::cout << c.getLength() << std::endl;
    std::cout << c.volume() << std::endl;
    std::cout << c.area() << std::endl;
    
    return 0;
}
