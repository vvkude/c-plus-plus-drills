#include "headers/headerTemplate.h"

// Simple drill to practice string operator comparison
int main()
{
	cout << "Please enter two names\n";
	string first_name;
	string second_name;
	cin >> first_name >> second_name;
	if (first_name == second_name) cout << "That's the same name twice\n";
	if (first_name < second_name)
		cout << first_name << " is alphabetically before " << second_name << '\n';
	if (first_name > second_name)
		cout << second_name << " is alphabetically before " << first_name << '\n';
	string a = "alpha";
	string b = "beta";
	    cout << first_name + a
	         << second_name + b << '\n';
}