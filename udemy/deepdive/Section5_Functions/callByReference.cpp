#include <iostream>

// These are references
void swap(int &a, int &b)  {
  int temp;
	temp = a;
	a = b;
	b = temp;
}

int main () {
  int x = 10, y = 20;
  swap(x,y);
  std::cout << x << " " << y;  // 20 and 10
}