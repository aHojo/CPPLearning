#include <iostream>
/* Elements must be in  a sorted order in order for binary search to be valid. */
int main () {
  int A[] = {6,8,13,17,20,22,25,28,30,35};
  int n = 10, mid, high, low, key;
  low = 0;
  high = 9;

  key = 13;
  for (int i = 0; i < n; i++) {

    mid = (low + high) / 2;
    std::cout << mid << "\n";
    if (A[mid] == key) {
      std::cout << key << " found at index " << mid << std::endl; 
      return 0;
    } else if (A[mid] > key) {
        // if our key is less than the middle number it has to be in the lower half
        high = mid - 1;
    } else {
        // if Key is higher than mid ,than it's in the top half. 
        low = mid + 1;
    }
  }

  std::cout << key << " not found! \n";

}