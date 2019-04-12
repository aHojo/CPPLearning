#include <iostream> 

int main () {
  float PI = 3.14, radius, area;

  std::cout << "Please enter a radius: ";
  std::cin >> radius;

  area = PI * ( radius * radius );

  std::cout << "Area: " << area << "\n";
  return 0;
}
