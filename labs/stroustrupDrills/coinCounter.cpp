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
	cout << "How many nickels do you have?\n";
	int nickels = 0;
	cin >> nickels;
	cout << "How many dimes do you have?\n";
	int dimes = 0;
	cin >> dimes;
	cout << "How many quarters do you have?\n";
	int quarters = 0;
	cin >> quarters;
	cout << "How many half-dollars do you have?\n";
	int half_dollars = 0;
	cin >> half_dollars;
	cout << "How many dollar-coins do you have?\n";
	int dollar_coins = 0;
	cin >> dollar_coins;

	// Calculate the total value in cents
	// Note that this is an integer multiplied by a double
	double cents = pennies*.01+nickels*.05+dimes*.1+quarters*.25+half_dollars*.5+dollar_coins*1;

    // Read back the denominations of each type of coin
    cout << "You have:\n"
         << pennies << " pennies\n"
         << nickels << " nickels\n"
         << dimes << " dimes\n"
         << quarters << " quarters\n"
         << half_dollars<< " half-dollars\n"
         << dollar_coins << " dollar-coins\n"
         << '\n';

    // Avoid creating a new variable to store dollar amount by 
    // directly manipulating the cents variable
    cout << "The total value of your coins:\n"
         << "$" << cents << '\n'
         << "Or, " << cents*100 << " cents\n";

}