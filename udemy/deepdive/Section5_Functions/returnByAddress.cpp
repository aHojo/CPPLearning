#include <iostream>


int *fun () // function has to be a pointer here
{
  int *p = new int[5];
  for (int i = 0; i < 5; i++) {
    p[i] = 5 + i;
  }
  std::cout << p << std::endl; // 0x7f8ae3400640
  return p;
}

int main()
{
  int *q=fun();
  std::cout << q << std::endl; // 0x7f8ae3400640
  for (int i = 0; i< 5; i++){
    std::cout<< q[i] << " "; // 5 6 7 8 9 
  }
  return 0;
}