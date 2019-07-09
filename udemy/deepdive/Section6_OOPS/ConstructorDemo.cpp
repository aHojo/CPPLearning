#include <iostream>


class Rectangle
{
  private:
    int length;
    int width;

  public:


    // Rectangle()
    // {
    //   length=1;
    //   width=1;
    // }
    // Default params overtake the non argument constructor
    Rectangle(int l=1, int b=1)
    {
      setLength(l);
      setWidth(b);
    }
    Rectangle(Rectangle &r)
    {
      length = r.length;
      width = r.width;
    }

    void setLength( int l)
    {
      if (l > 0)
        length = l;
      else
        length=1;
    }
    
    void setWidth(int w)
    {
      if (w > 0)
        width = w;
      else
        width=1;
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
      return 2 * (length + width);
    }
};


int main()
{
  Rectangle r1(10,5);
  Rectangle r2(r1);
  Rectangle r3;

  std::cout << r1.area() << " Rectangle 1 \n";
  std::cout << r2.area() << " Rectangle 2 \n";
  std::cout << r3.area() << " Rectangle 3 \n";

  return 0;
}