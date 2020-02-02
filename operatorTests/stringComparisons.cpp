#include "headers/headerTemplate.h"

// Quick drill to locate repeated strings throughout a script

int main()
{
	string previous = " ";
	string current;
	while (cin>>current) {
		if (previous == current)
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}