/* Stroustrup's C++ Programming Chapter 3 Exercise 11

Write a program that prompts the user to enter some number of 
pennies, nickels, dimes, quarters, half-dollars and one-dollars.

Read back the number of all coins and the total value of all 
coins in both dollars and cents
*/

#include "../../headers/headerTemplate.h"

/* Approach:

Prompt and query user for the number of each coin denomination
Store each of the values in their own variables or simply add
to an overall counter on user input

Display total count of all variables or value of final counter
and divide by 100 for dollar amount
*/

int main() 
{
	// Prompt for the amount of each sized coin
	cout << "How many pennies do you have?\n";
	int pennies = 0;
	cin >> pennies;
	// Program will add to cents every time the user tells us about a coin they have
	// We could do this in one statement at the end, but it may help to debug to start this way
	double cents = 0;
	cents = pennies*.01;
	cout << "How many nickels do you have?\n";
	int nickels = 0;
	cin >> nickels;

    // Read back the denominations of each type of coin
    cout << "You have:\n"
         << pennies << " pennies\n"
         << '\n';

    // Avoid creating a new variable to store dollar amount by 
    // directly manipulating the cents variable
    cout << "The total value of your coins:\n"
         << "$" << cents << '\n'
         << "Or, " << cents*100 << " cents";

}