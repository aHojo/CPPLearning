#include <iostream>

int main() {
  
  int *p = new int[5];

  p[0] = 12;
  p[1] = 13;
  
  std::cout << p[1] << "\n";

  delete []p;

  p=nullptr;
  return 0;

  int size;
  std::cout<<" Enter the number of elements: ";
  std::cin >> size;

  // Once this is created, you can no longer increase the size of an array,
  int A[size];
  std::cout << sizeof A << std::endl; // gives number in bytes. Sinze int is 4 bytes, sizeof 5 elements gives 20

  // to be able to modify the size of an array use pointer to an array
  int size;
  std::cout<<" Enter the number of elements: ";
  std::cin >> size;

  // Once this is created, you can no longer increase the size of an array,
  int *p = new int [size];
  std::cout << sizeof p << std::endl; // gives number in bytes. Sinze int is 4 bytes, sizeof 5 elements gives 20

  std::cout << "Enter the new size: ";
  std::cin >> size;
  p = new int[size];

  // Simpler way
  int *p = new int[20];
  
  //Delete to avoid memory leaks. 
  delete []p;

  p=new int[40];
}