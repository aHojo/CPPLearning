#include <iostream>

// int v = 0;

// void func() {
//   int a = 5;
//   v++;

//   std::cout<< a << " " << v << "\n";
// }
// int main() 
// {
//   func(); // 5 and 1
//   func(); // 5 and 2
//   func(); // 5 and 3
// }

// void func() {
//   static int v = 0; // Will always exist in memory. They are just like global but only accessable by the func function
//   int a = 5;
//   v++;

//   std::cout<< a << " " << v << "\n";
// }
// int main() 
// {
//   func(); // 5 and 1
//   func(); // 5 and 2
//   func(); // 5 and 3
// }

void func() {
  static int s=10;
  s++;
  std::cout << s << std::endl;
}

int main() 
{
  func(); //11
  func(); //12;
}

