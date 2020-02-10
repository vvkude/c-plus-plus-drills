// Stroustrup C++ Programming exercises Chapter 3 Exercise 9
// Write a program that converts spelled out numbers into digits
# include "../../headers/headerTemplate.h"

/*  Assignment: Let a human type in a number in words and then
				Read out the word as a digit to the person 
				(Do this for the integers 0,2,3 and 4)

    Approach: 	Since we are not supposed to know about for-loops or vectors. yet,
    			my thinking is to use if/ else clauses to check for the integers
*/

int main ()
{
	cout << "If you enter the name of a number and hit enter, I'll convert it to the digit for you.\n"
	     << "Type in quit and hit enter to stop this from running.\n";
	string number_name;
	while (cin>>number_name) {
		if (number_name == "zero")
			cout << number_name << " is the digit 0\n";
		else if (number_name == "one")
			cout << number_name << " is the digit 1\n";
		else if (number_name == "two")
			cout << number_name << " is the digit 2\n";
		else if (number_name == "three")
			cout << number_name << "is the digit 3\n";
		else if (number_name == "four")
			cout << number_name << " is the digit 4\n";
		else if (number_name == "quit") 
			return 0;
		else {
			cout << number_name << " doesn't have a digit I know about\n";
			cout << "Why don't you try a number between 0 and 4?\n";
		}
	}
}