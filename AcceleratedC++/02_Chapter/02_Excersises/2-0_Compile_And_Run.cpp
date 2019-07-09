#include <iostream>
#include <string>

int main()
{
  // Ask for the person's name
  std::cout << "Please enter your first name: "
            << "\n";

  // Read in the name
  std::string name;
  std::cin >> name;

  // Build the message that we intend to write
  const std::string greeting = "Hello, " + name + "!";

  // The number of blanks surrounding the greeting
  const int pad = 1;

  // The total number of rows to write
  // Double the number since we need the same number of rows on the top and bottom of the  greeting message
  // Add three because of gretting row + top and bottom
  const int rows = (pad * 2) + 3;
  const std::string::size_type cols = greeting.size() + pad * 2 + 2;
  // Separate the output from the input
  std::cout << std::endl;

  // invariant: we have written r rows so far
  //Write rows rows of output
  // setting r to 0 makes the invariant true
  for (int r = 0; r != rows; r++)
  {
    //We can assume the invariant is true here.

    // Writing a row of ouput makes the invairant false
    //write a row of output
    std::string::size_type c = 0;

    //invariant: we have written c characters so far in the current row
    while (c != cols)
    {
      //write one or more chars
      // adjust the value of c to maintain the invariant

      // write one or more nonborder characters
      // Adjust the value of c to maintain the invariant.
      if (r == pad + 1 && c == pad + 1)
      {
        std::cout << greeting;
        c += greeting.size();
      }
      else
      {

        //Are we on the border?
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
        {
          std::cout << "*";
        }
        else
        {
          std::cout << " ";
        }
        c++;
      }
    }
    std::cout << std::endl;
  }
  // We can conclude that the

  return 0;
}
