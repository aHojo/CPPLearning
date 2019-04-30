#include <iostream>

int main () {
  int a=10;
  int *p=&a;
                                              //Guess | Actual
  std::cout << a << std::endl; //10  | 10
  std::cout << &a << std::endl; //Memory location | 0x61ff0c
  std::cout << p << std::endl; //Memory location of a | 0x61ff0c
  std::cout << &p << std::endl; //Memory location of p | 0x61ff08
  std::cout << *p << std::endl; // 10 - value of a | 10

  return 0;
}