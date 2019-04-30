#include<iostream>
using namespace std;

int main()
{
    
    //Draw Pattern given in description for n x n dimensions
    for (int i = 0; i < 6; i++) {

    for(int j = 0; j <= i; j++ ) {
        
        std::cout << "* ";
    }
    std::cout << "\n";
    
  }
}
