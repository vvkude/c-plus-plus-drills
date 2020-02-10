#include "../../headers/headerTemplate.h"

int main()
{
	cout << "I'll convert miles to kilometers for you."
	     << "\nEnter the number of miles:"
	     << '\n';
	double Miles = 0;
	cin >> Miles;
	cout << Miles << " miles is " << Miles*1.609 << " kilometers"
	     << '\n';
	return 0;
}