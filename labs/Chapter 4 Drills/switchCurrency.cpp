/* Stroustrup's Programming with c++ Chapter 4 Drill
Write a program that converts three currencies into dollars */

#include "../../headers/headerTemplate.h"

/*  The assignment is to use switch cases to select which conversion to perform
    We could use map to route string values, but that hasn't come up at this point in the book
    The plan is to use a char type to store the unit type and to not accept string values */

int main()
{
	constexpr double yuan_per_dollar = 109.66; // constexpr's ensure these cannot be changed later in the program
	constexpr double kroner_per_dollar = 0.11; // I always enter floats with their sigfigs
	constexpr double pound_per_dollar = 0.78;

	double monies = 1.0;
	char unit = ' '; // A space is not a valid unit

	cout << "Please enter the amount of money you have, followed by the unit (like, y, k or p)\n";
	cin >> monies >> unit;

/*  Trying to make this DRYer by placing this cout ahead of the switches has 
    resulted in less than sensible output when input is bad */

    cout << "\nYou entered that you have " << monies << " " << unit << ", which is ";

    switch (unit) {
    	case 'y': case 'Y':
    	cout << "$" << monies * yuan_per_dollar <<'\n';
    	break;

    	case 'k': case 'K':
    	cout << "$" << monies * kroner_per_dollar <<'\n';
    	break;

        case 'p': case 'P':
        cout << "$" << monies * pound_per_dollar <<'\n';
        break;

        default:
        cout << "\nSorry, I don't understand that currency type, can you try y, k or p?\n";
        cin >> unit;
    }

}