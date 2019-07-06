#include <iostream>

// Will not work because the first */ ends the comment
int main()
{
  /*This is a comment that extends over several lines
  because it uses /* */
          as its starting and ending delimiters * /

          std::cout
      << "Does this work?" << std::endl;

  return 0;
}