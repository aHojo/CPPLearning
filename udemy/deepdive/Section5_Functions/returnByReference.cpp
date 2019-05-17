#include <iostream>


int & fun (int &x) // function has to be a pointer here
{
  
  return x;
}

int main()
{
  int a=10;
  fun(a) = 25;
  std::cout << a << std::endl; // 25
}