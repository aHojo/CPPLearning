#include <iostream>

class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle();
  // The constructor above is redundant
  Rectangle(int l = 1, int w = 1);
  Rectangle(Rectangle &r);
  void setLength(int);
  void setWidth(int);
  // Get methods are inline functions here
  int getLength() { return length; };
  int getWidth() { return width; };
  int area();
  int perimeter();
  bool isSquare();
  ~Rectangle();
};

int main()
{
  Rectangle r1(10, 10);

  r1.setLength(15);
  r1.setWidth(17);
  std::cout << r1.area() << "\n";
  std::cout << r1.perimeter() << "\n";
  std::cout << r1.isSquare() << "\n";
  return 0;
}

// this is scope resolution. The scope of this function
// is within this class.

Rectangle::Rectangle()
{
  length = 1;
  width = 1;
}
Rectangle::Rectangle(int l, int w)
{
  length = l;
  width = w;
}
Rectangle::Rectangle(Rectangle &r)
{
  length = r.length;
  width = r.width;
}

void Rectangle::setLength(int l)
{
  if (l > 0)
    length = l;
  else
    length = 1;
}
void Rectangle::setWidth(int w)
{
  if (w > 0)
    width = w;
  else
    width = 1;
}
int Rectangle::area()
{
  return length * width;
}

int Rectangle::perimeter()
{
  return 2 * (length * width);
}

bool Rectangle::isSquare()
{
  return width == length;
}

// This gets called automatically at the end of main
Rectangle::~Rectangle()
{
  std::cout << "Rectangle is destroyed";
}