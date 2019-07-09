#include <iostream>

int add (int x, int b, int c = 0) {

  return x + b + c;
}

int main () {

  std::cout << add(10, 15) << std::endl;
  std::cout << add(10, 15, 17) << std::endl;
  std::cout << add(10, 15, 0) << std::endl;
  return 0;
}