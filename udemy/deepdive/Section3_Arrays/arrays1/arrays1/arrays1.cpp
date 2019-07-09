// arrays1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//int A[5] = { 3, 4, 10, 12, 5 };
	//int A[5] = { 3, 4 }; // The rest are initiallized with 0

	int A[] = { 3, 4, 10, 12, 5 };

	//for (int i = 0; i < 5; i++) {
		
	//	std::cout << A[i] << "\n";
	//}

	//Iterates through the array for each element in the array. 
	// this is a foreach loop
	for (int x : A)
		std::cout << x << std::endl;

	float B[] = { 2.5f, 2.9f, 5.6f, 9, 8, 7 };

	for (float x : B)
		std::cout << x << std::endl;

	//OR 
	for (auto x : B)
		std::cout << x << std::endl;

	// 66 is B and 68 is D
	char C[] = { 'A', 66, 'C', 68 };

	for (auto c : C)
		std::cout << c << std::endl;
	return 0;
}


