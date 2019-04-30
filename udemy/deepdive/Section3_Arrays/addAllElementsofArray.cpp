#include <iostream>

int main () {
  int A[] = {4,8,6,9,5,2,7};
  int sum = 0, n =7;

  // Two ways 
  // Original
  for (int i = 0; i < n; i ++) {
    sum += A[i];
  }

  // Introduced in C++ 11
  // for (int x : A ) {
  //   sum += x;
  // }

  std::cout << sum << std::endl;
}