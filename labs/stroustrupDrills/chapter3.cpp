#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// This is the drill from the end of chapter 3 in Stroustrup's Programming with C++
int main()
{
	cout << "Enter the name of the person who want to write to...\n";
	string first_name = "???"; // initialize to some known string in case of errors
	cin >> first_name;
	cout << "Enter the name of a friend you want to check on...\n";
	string friend_name = "???";
	cin >> friend_name;
	cout << "If your friend is gender binary, what gender do they identify with?"
	     <<"Enter (m) for male and (f) for female..."
	     <<'\n';
	char friend_sex;
	cin >> friend_sex;
	cout << "Enter your friend's age...\n";
	string pronoun = "???";
	    if (friend_sex == 'm') { pronoun = "he"; }
	    else { pronoun = "she"; }
	double age; // Don't need to restrict age to whole numbers
	cout << "Dear, " 
	     << first_name
	     << "\n    How are you? I am fine. I miss you."
	     << "\n    I am making a sound somewhere between seal the animal and Seal the amazing singer."
         << "\n    Have you seen " << friend_name << " around? I think "
         << pronoun << " wears a wig now?"
         << '\n';
}

