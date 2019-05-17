#include <iostream> 

// Pointers take in the addresses
void swap(int *a, int *b)  {
  
  int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
  int x = 10, y = 20;
  // &x - &y - 0x7ffee462b37c - 0x7ffee462b378
  swap(&x,&y); // Sends the addresses of the variables
  std::cout << x << " " << y;  // 20 and 10 since we used addresses
}