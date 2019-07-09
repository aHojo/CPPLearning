#include <iostream>

class Base
{

public:
  Base()
  {
    std::cout << "Non-param of Base" << std::endl;
  }
  Base(int x)
  {
    std::cout << "Param of Base " << x << std::endl;
  }
};

class Derived
{

public:
  Derived() { std::cout << "Non-param of Derived" << std::endl; }
  Derived(int y) { std::cout << "param of Derived " << y << std::endl; }
  Derived(int x, int y) : Base(x)
  {
    std::cout << "param of Derived " << y << std::endl;
  }
};

int main()
{

  Derived d;
  // Non-param Base
  // Non-param Derived
  Derived d(10);
  // Non-param Base
  // Param of Derived 10
  Derived d(5, 10);
  //Param of Base 5
  //Param of Derived 10
  return 0;
}