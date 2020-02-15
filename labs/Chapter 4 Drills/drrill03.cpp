/*  Stroustrup's Programming with C++ 
    For looping through characters and numbers */

#include "../../headers/headerTemplate.h"

int main()
{
	int increment = 96; // The assignment is to begin looping starting at 97
	char letter = '`'; // The assignment  is to begin looping starting at a
	for (int i = 0; i < 26; ++i)
		cout << ++letter << '\t' << ++increment << '\n';
}