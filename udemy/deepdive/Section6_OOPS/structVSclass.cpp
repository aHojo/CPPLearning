#include <iostream>

struct Demo
{
  int x;
  int y;

  void Display()
  {
    std::cout << x << " " << y << std::endl;
  }
};

int main()
{
  Demo d;

  d.x = 10;
  d.y = 20;
  d.Display();
}