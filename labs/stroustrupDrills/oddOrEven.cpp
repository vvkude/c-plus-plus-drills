// Stroustrup C++ Programming exercises
// Chapter 3 Exercise 8; Determining if a number is odd or even

#include "../../headers/headerTemplate.h"

/* Exercise: Write a program to test if an integer value is odd or even


Plan of Attack

The typical way to do integer exercises like this is to utilize the modulo operator

The mathematical parity property separates numbers into odd or even categories:
Numbers categorized as "even" have no remainder when divided by two.
Odd numbers do leave a remainder when divided by two
*/

int main()
{
	int value = 0;
	cout << "Enter an integer and I'll tell you if it's an even or odd one:\n";
	cin >> value;
	string parity = "???"; // initialize the result with a known value to make debugging easier
	// conditionally set the parity variable if there is a remainder of the modulo operator
	parity = (value%2) ? "odd" : "even";
	cout << "\nYou enetered an " + parity + " number. How does it feel?\n";
}
