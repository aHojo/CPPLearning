#include <iostream>

int main() {
  
  std::string name;

  std::cout << "Please enter your name: ";
  getline(std::cin, name); 
  //std::cin >> name;

  std::cout << "Welcome " << name << std::endl;

}
