#include <iostream>

int main () {

  int A[5] = {2,4,6,8,10};

  int *p = A;

  std::cout << *p << std::endl; // 2

  p++;
  std::cout<< *p << std::endl; //4

  p--;
  std::cout << *p << std::endl; // 2

  std::cout << p << std::endl; // Address of A[0] 0x61fef8
  std::cout << p + 2  << std::endl; // Address of A[2] 0x61ff00
  std::cout << *p << std::endl; // 2
  std::cout << *(p + 2)  << std::endl; // 6


  for (int i = 0; i < 5; i++) {
    std::cout << A[i] << std::endl; // 2,4,6,8,10
    std::cout << *(A+i) << std::endl; // gives the numbers
    std::cout << A+i << std::endl; // gives the addresses
    std::cout << p+i << std::endl; // gives the addresses
    std::cout << *p+i << std::endl; // gives the numbers.
    std::cout << p[i] << std::endl; // gives the numbers.
  }


  int B[5] = {2,4,6,8,10};

  int *z = B, *q = &B[4];

  std::cout << q - z << std::endl; // 4 means q is further away cause positive. 
  std::cout << z - q << std::endl; // -4 means z is closer cause negative

  return 0;
}