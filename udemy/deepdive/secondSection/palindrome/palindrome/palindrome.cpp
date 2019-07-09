// palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num, temp, rev, reversed = 0;

	std::cout << "Enter a number to find out if palindrome: ";
	std::cin >> num;

	temp = num;
	while (temp != 0) {
		rev = temp % 10;
		reversed = reversed * 10 + rev;
		temp /= 10;
	}

	if (reversed == num) {
		std::cout << "Palindrome: " << num << " - " << reversed << "\n";
	} else {
		std::cout << "Not palindrome " << num << " - " << reversed << "\n";
	}
	return 0;
}
