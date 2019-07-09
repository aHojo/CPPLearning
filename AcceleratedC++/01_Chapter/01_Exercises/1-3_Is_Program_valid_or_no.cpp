#include <iostream>
#include <string>

int main()
{
  {
    const std::string s = "a string";
    std::cout << s << std::endl;
  }
  {
    const std::string s = "another string";
    std::cout << s << std::endl;
  }
  return 0;
}
// Yes it compiles, each s is in it's own scope, so it's destryed when outside of the scope.