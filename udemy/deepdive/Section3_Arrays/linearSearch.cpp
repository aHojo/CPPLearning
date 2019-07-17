#include <iostream> 

int main() {
  int A[] = {6,11,25,8,15,7,11,12,20,9,14};
  int n = 10, search;

  std::cout << "Enter the number you are looking for: ";
  std::cin >> search;


  for (int i = 0; i < n; i++) {
    if (search == A[i]) {
      std::cout << search << " found at index " << i << std::endl;
      return 0;
    }
  }
  
  std::cout << search << " not found!" << std::endl;
  return 1;
}