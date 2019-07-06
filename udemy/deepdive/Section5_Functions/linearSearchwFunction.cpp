#include <iostream>

int linearSearch (int A[], int n, int search )
{
  for(int i = 0; i < n; i++) {
    if(A[i] == search) {
      return i;
    }
  }

  return -1;
}

int main()
{
  int A[] = {1,3,435,76,8,4,60,232,76,23,12}, n=11, search=5, found;

  search = 800;

  found = linearSearch(A, n, search);
  
  if(found != -1) {
    std::cout << "Found: " << search << " at index: " << found << "\n";
  } else {
    std::cout << "Not found: " << search << "\n";
  }
  return 0;
}