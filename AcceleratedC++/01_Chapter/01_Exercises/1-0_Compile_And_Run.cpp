/* Ask for a person's name, and generate a framed greeting */

#include <iostream>
#include <string>

int main()
{
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  // Build the message that we intend to write
  const std::string greeting = "Hello, " + name + "!";

  // Build the second and fourth lines of the output
  // By using the () we are telling spaces to CONSTRUCT the variable with expressions.
  // .size() is a Member function of std::size, and return an integer of the number of chars in greeting.
  // ' ' - This is a character literal.
  // When we construct a string with an integer and a char, the value is given as many chars as the integer.
  const std::string spaces(greeting.size(), ' '); // Contains as many spaces as the number of characters in greeting
  const std::string second = "* " + spaces + " *";

  //b Build the first and fifth lines of the output
  std::string first(second.size(), '*'); // Contains as many * as the characters in second.

  // Write it all
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}