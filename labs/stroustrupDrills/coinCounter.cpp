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
	int userCount = 0;
	cin >> userCount;
	// Update the value of cents based on user input
	double cents = 0;
	cents = userCount*.01;

    // Read back the denominations of each type of coin
    cout << "You have:\n"
         << userCount << " pennies\n"
         << '\n';

    // Avoid creating a new variable to store dollar amount by 
    // directly manipulating the cents variable
    cout << "The total value of your coins:\n"
         << cents << " cents" << '\n'
         << "userCount is " << userCount << '\n'
         << "$" << cents*100;

}