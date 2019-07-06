#include <iostream>
#include <string>

int main()
{
  {
    const std::string s = "a string";
    const std::string x = s + ", a really";
    std::cout << s << std::endl;
  }
  {
    std::cout << x << std::endl;
  }
  return 0;
}
// Won't compile because x is out of scope.