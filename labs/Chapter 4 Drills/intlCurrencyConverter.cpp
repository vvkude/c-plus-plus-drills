/* Stroustrup's C++ Programming Chapter 4 Drill 1
Write a program that prompts a person for an amount of money in yen, kroner 
or pounds, convert it in to the dollar amount for them and display it
*/

#include "../../headers/headerTemplate.h"

int main()
{
	/* We will declare constexrp doubles to ensure conversion amounts are not 
	   inadvertently updated. In the future, these should be consts that are 
	   updated through some API with up-to-date values according to market data */
	constexpr double yen_per_dollar = 109.66;
	constexpr double kroner_per_dollar = 9.30;
	constexpr double pounds_per_dollar = 0.78;

	double monies = 1;
	char unit = ' '; // a space is not a unit
	cout << "Please enter the amount of money you have followed by a currency symbol:\n"
	     << "Available currencies are 'yen(y)', 'kroner(k)', and 'pounds(p)'";
	cin >> monies >> unit;

	// Now use if clauses to select the currect operation depending on the person's input
	double dollars;
	if (unit == 'y') dollars = monies/yen_per_dollar;
	else if (unit == 'k') dollars = monies/kroner_per_dollar;
	else if (unit == 'p') dollars = monies/pounds_per_dollar;
	else { // Crude error handling
		cout << "Sorry, I do not know about that type of currency.\n"
	         << "Will you try y, k or p?:\n";
	    cin >> monies >> unit;
	}

	// Read back what the person entered and display their converted value
    cout << "You had entered that you had " << monies << unit
         <<  ", which is $" << dollars 
         << '\n';
}