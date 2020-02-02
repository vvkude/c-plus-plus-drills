#include "headers/headerTemplate.h"

// Quick drill to locate repeated strings throughout a script

int main()

{
	int word_enumeration = 0;
	string previous = " "; // ensures that initial comparison fails
	string current;
	while (cin>>current) {
		++word_enumeration; 
		if (previous == current)
			cout << "Word number " << word_enumeration
			     << "\nrepeated word: " << current 
			     << '\n';
		previous = current;
	}
}