#include <iostream>

// Global variable g
int g=0; 
// 15 when assigned in main
// When inside fun() is now 20
//g++ makes it 21

void fun() {
  int a=5;
  g=g+a; // 20

  std::cout << g << "\n";
}

void main() {
  
  // this is a local variable
  int x = 10;
  g=15; // 15
  fun();
  g++;
  std::cout << g << "\n";
}