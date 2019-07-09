#include <iostream>

// This works because each curly brace pair is a block, and it's able to reach into the scrop outside of itself.

int main()
{
  {
    {
      {
        {
          {
            std::cout << "Hello, World!" << std::endl;
          }
        }
      }
    }
  }
}