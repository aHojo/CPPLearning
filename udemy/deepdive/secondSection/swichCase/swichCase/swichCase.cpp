// swichCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	
	int x = 4;

		std::cout << "Menu\n";
		std::cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n";

		int option;
		std::cout << "Please pick an option 1-4: ";

		std::cin >> option;

		switch (option) {
			case 1:
				std::cout << "Addition\n";
				break;
			case 2:
				std::cout << "Subtraction\n";
				break;
			case 3:
				std::cout << "Multiplication\n";
				break;
			case 4:
				std::cout << "Division\n";
				break;
			default:
				std::cout << "Invalid option\n";
		}
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
