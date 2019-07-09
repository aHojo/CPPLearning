#include <iostream>
#include <string>

// No can not concat two string literals.
int main()
{
  const std::string exclam = "!";
  const std::string message = "Hello" + ", world" + exclam;

  std::cout << message << std::endl;
}