#include <iostream>
 
/* 
   *
  **
 ***
****
 */

// For cross diagonal need to use i + j or array size - 1
int main () {

  for (int i = 0; i < 4; i++) {

    for(int j =0; j < 4; j++ ) {
      if ((j+i) >= 4-1) {
        std::cout << "*";
      } else {

        std::cout << " ";
      }
    }
    std::cout << "\n";
    
  }
}