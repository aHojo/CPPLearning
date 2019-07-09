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
  //To declare in heap
  Rectangle *q = new Rectangle;
  // Pointer to an object
  Rectangle r;
  Rectangle *p = &r;

  p->length = 10;
  p->width = 5;

  std::cout << p->area() << " " << p->perimeter() << "\n";

  q->length = 10;
  q->width = 5;

  std::cout << q->area() << " " << q->perimeter() << "\n";
}