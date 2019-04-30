#include <iostream>

int main() {

  int A[] = {4,8,6,9,5,2,7};
  int n = 7, max;
  max = A[0];
  
  //Old Way
  for (int i = 1; i < n; i++) {
    
    if (max < A[i]) {
      max = A[i];
    }
  }

/*   New Way
  for (int x : A) {
    
    if (max < x) {
      max = x;
    }
  } */

  
  std::cout << "Max number: " << max << std::endl;
}