// Bjarne Stroustrup's Programming with C++ book
// Chapter 3 Exercise 7

// This exercise asks us to order three strings on human input and order them

#include "../../headers/headerTemplate.h"
// This header file features an special include line to address keep_window_open
// to handle system dialogs closing prematurely on some Windows setups

/* Approach Plan

    Figure out which entered string is the smallest out of the three and store
    that in some variable.

    Then, figure out which of the two other strings is the smallest and store
    that in some other variable.

    The remaining string must be the largest string
*/

int main()
{
	string value01 = "???";
	string value02 = "???";
	string value03 = "???";
	cout << "Please enter three strings with spaces in between them:";
	cin >> value01 >> value02 >> value03;

	cout << "We read these values that you entered: "
	     << value01 << "," << value02 << ", " << value03 << '\n';

	// Declare variables, perform comparison and sore the results
	//
	string smallest = "???"; // iniatializing with some known value so that debugging is easier
	string second_smallest = "???"; // Maybe a future exercise will ask us to do 4 integers?
	string largest = "???";     

	// Recall that the exercise has a case for the integers being equal to one another
	
	// If value01 is smaller than or equal to both value02 and value 03
	if (value01<=value02 && value01<=value03) { // could stop here if all values are equal
		smallest = value01;
	    if (value02<=value03) { // If value01 is smallest and value02 is next-smallest
	    	second_smallest = value02;
	    	largest = value03;
	    } //--> /if
	    else {
	    	second_smallest = value03; //If value01 is smallest and value02 is bigger than value03
	    	largest = value02;
	    } //--> else
	} //--> /if
	// Now duplicate the same logic above for value02
	else if (value02<=value01 && value02<=value03) {
		smallest = value02;
		if (value01<=value03) {
			second_smallest = value01;
			largest = value03;
		} //--> /if
		else {
			second_smallest = value03;
			largest = value01;
		} //--> /else
	} //--> /else-if
	// If neither of the cases above happened, then neither value01 nor value02
	// were the smallest integers. So, value03 must then be the smallest integer
	else {
		smallest = value03;
		if (value01<=value02) {
			second_smallest = value01;
			largest = value02;
		} //--> /if
		else {
			second_smallest = value02;
			largest = value01;
		}//--> /else
	} //--> /else

cout << "We sorted the integers you entered from smallest to largest. Here we go!\n"
     << smallest << ", " << second_smallest << ", " << largest
     << '\n';
} //--> /main