#include <iostream>

class Rectangle
{
public:
  int length;
  int width;

  int area()
  {
    return length * width;
  }
  int perimeter()
  {
    return 2 * (length * width);
  }
};
int main()
{

  Rectangle r1, r2;

  r1.length = 10;
  r1.width = 5;

  std::cout << r1.area() << " " << r1.perimeter() << std::endl;

  r2.length = 100;
  r2.width = 55;

  std::cout << r2.area() << " " << r2.perimeter() << std::endl;
  return 0;
}