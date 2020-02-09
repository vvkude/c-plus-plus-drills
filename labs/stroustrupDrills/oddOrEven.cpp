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
	if (value == 0)
	{
		cout << "Zero is neither even nor odd. Stop it!\n";
	}
	else
	{
	    string parity = "even"; // initialize the result with a known value to make debugging easier
	    // check if modulo yields a result and, if it does, update parity variable
	    if (value%2) parity = "odd";
	    cout << "\nYou enetered an " + parity + " number. How does it feel?\n";
    }
}

/* Design thoughts

Notice the very clever trick from Stroustrup to initialize the parity variable
with "even" and only update it if necessary. 

Previous strategy used a conditional: 
string parity = (value%2) ? "odd" : "even";

*/