// A program to store and compare two interger values
#include "../../headers/headerTemplate.h"

// simple error handling function
void simpleErrorMessage(int num)
{
	if (num == 1)
	{
		cout << "ERROR: That is not an integer" << endl;
	}
}

/*  primary driver function for interger entry and comparison
    it would be best to split this into modular components in the future
    The program must determine the smaller, larger, sum, difference, product
    and ratio of the values and report them to the user 

    Modify it to ask for floating-point values and store them in doubles
    and compare the outputs of the two programs
*/
int main()
{
	cout << "Enter one integer\n";
	int first_int = 0;
	cin >> first_int;
    cout << "Enter another integer\n";
    int second_int = 0;
    cin >> second_int;
    
    int diffs = first_int - second_int;
    cout << "The larger of the two integers you entered is ";
    if (diffs > 0)
    	{ cout << first_int; }
    else 
    	{ cout << second_int; }
        cout << '\n';

    cout << "\nThe sum of the two integers you entered is: " 
         << first_int + second_int
         << "\nThe difference of the two integers you entered is: " 
         << diffs
         << "\nThe product of the two integers you entered is: "
         << first_int*second_int
         << "\nThe ratio of the two integers you entered is: "
         << first_int/second_int
         << '\n';

    cout << "Enter one floating-point value\n";
	double first_double = 0;
	cin >> first_double;
    cout << "Enter another double\n";
    double second_double = 0;
    cin >> second_double;
    
    double double_diffs = first_double - second_double;
    cout << "The larger of the two integers you entered is ";
    if (double_diffs > 0)
    	{ cout << first_double; }
    else 
    	{ cout << second_double; }
        cout << '\n';

    cout << "\nThe sum of the two integers you entered is: " 
         << first_double + second_double
         << "\nThe difference of the two integers you entered is: " 
         << double_diffs
         << "\nThe product of the two integers you entered is: "
         << first_double*second_double
         << "\nThe ratio of the two integers you entered is: "
         << first_double/second_double
         << '\n';
}