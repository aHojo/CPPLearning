#include <iostream>

class Rectangle
{
  private:
    int length;
    int width;

  public:
  void setLength(int l)
  {
    length = l;
  }

  void setWidth(int w)
  {
    width = w;
  }
  int getLength()
  {
    return length;
  }

  int getWidth()
  {
    return width;
  }
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
  Rectangle r1;
  r1.setLength(10);
  r1.setWidth(5);

  std::cout << r1.getWidth() << " " << r1.getLength() << std::endl;
  std::cout << r1.area() << " " << r1.perimeter() << std::endl;
  return 0;
}