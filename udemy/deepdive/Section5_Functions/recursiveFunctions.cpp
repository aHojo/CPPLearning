#include <iostream>

void fun(int n) 
{
  if (n > 0) {
    std::cout << n << std::endl; // 5 4 3 2 1
    fun(n - 1);
    std::cout << n << std::endl; // 1 2 3 4 5
  }
}
int main () 
{
  int x = 5;
  fun(x);
  return 0;
}