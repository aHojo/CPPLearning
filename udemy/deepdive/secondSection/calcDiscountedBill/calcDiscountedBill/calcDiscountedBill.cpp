// calcDiscountedBill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// if amount >= 5000 discount 20%
// if 200<= amount < 5000 offer 10%
// if amount is less than 200 offer 5%
#include <iostream>

int main()
{
	float amount, discount;

	std::cout << "Enter the price of the item: " << "\n";
	std::cin >> amount; 

	if (amount >= 5000) {
		discount = (amount * 20) / 100;
		amount -= discount;
		std::cout << "Your discounted price is: " << amount << "\n";
	}
	else if (amount >= 2000) {
		discount = (amount * 10) / 100;
		amount -= discount;
		std::cout << "Your discounted price is: " << amount << "\n";
	}
	else { 
		discount = (amount * 5) / 100;
		amount -= discount;
		std::cout << "Your discounted price is: " << amount << "\n";
	}
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
