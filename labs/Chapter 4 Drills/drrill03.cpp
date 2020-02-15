/*  Stroustrup's Programming with C++ 
    For looping through characters and numbers */

#include "../../headers/headerTemplate.h"

int main()
{
	char l_letter = '`';  // The assignment is to begin looping starting at 97
    int letter_int = l_letter;

    // Print one table for lowercase characters
    cout << "Here are the lowercase letters:\n";
	for (int i = 0; i < 26; ++i) {
		letter_int = l_letter;
		cout << ++l_letter << '\t' << ++letter_int << '\n';
	}

	// Print another table for uppercase characters
	l_letter = '@';
	letter_int =  l_letter;
	cout << "\nHere are the uppercase letters:\n";
	for (int i = 0; i < 26; ++i) {
		letter_int = l_letter;
		cout << ++l_letter << '\t' << ++letter_int << '\n';
	}

}