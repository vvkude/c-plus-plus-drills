#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// This is the drill from the end of chapter 3 in Stroustrup's Programming with C++
void printErrorMessage(int num) {
	if (num == 3) 
	{cout << "AGE ERROR: That's impossibly young!" << endl; }
    else if (num == 4)
    {cout << "AGE ERROR: That's improbably old!" << endl; }
}

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
	string pronoun = "???";
	    if (friend_sex == 'm') { pronoun = "he"; }
	    else { pronoun = "she"; }
    cout << "Enter your friend's age...\n";
	double age = 0; // Let proud 12.5 year olds tell us about their exact age
	cin >> age;
	if (age <= 0) {printErrorMessage(3);}
	if (age >= 100) {printErrorMessage(4);}
	cout << "Dear, " 
	     << first_name
	     << "\n    How are you? I am fine. I miss you."
	     << "\n    I am making a sound somewhere between seal the animal and Seal the amazing singer."
         << "\n    Have you seen " << friend_name << " around? I think "
         << pronoun << " wears a wig now?"
         << '\n';
     if (age < 12)
     	cout << "\n         Next year, you'll be " << age+1
             << '\n';
     else if (age == 17)
     	cout << "\n         Next year, you'll be able to vote!"
             << "\n";
     else if (age > 70)
     	cout << "\n         I hope you are enjoying retirement"
             << '\n';
}

