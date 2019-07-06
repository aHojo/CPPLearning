#include <iostream>
#include <string>

int main()
{

  // Ask for a person's name and greet them

  std::cout << "Please enter your first name: ";

  std::string name; // define a name
  std::cin >> name; // Get the name from the interface

  // Write a Greeting
  std::cout << "Hello, " << name << "!" << std::endl;
  return 0;
}