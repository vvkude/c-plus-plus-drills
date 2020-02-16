/*  Stroustrup's Programming with C++
    Vectors and vector operations */

#include "../../headers/std_lib_facilities.h"

/*  Assignment:
    Write a program that accepts words on user input and displays them
    to the user, except for certain words you decide to "BLEEP"

    Approach:
    - Read words as strings into a vector
    - Use member function size() to display the number of words
    - Use a for-loop to test if it's a "BLEEPED" word, or not
 */

int main()
{
	cout << "Enter some words separated by a space and I'll censor ones I don't like."
	     << "\nUse ctrl+D to display the info when you are done entering your words:\n";
	vector<string> words;
	for (string temp; cin>>temp;)
		words.push_back(temp);

	
	cout << "\nTotal number of words: " << words.size() 
	     << '\n';

    cout << "\nHere are your censored words:\n";
	for (int i = 0; i<words.size(); ++i)
		// Test if this is a new word, or not (unless it's the very first word)
		if (words[i]== "banana") {
			cout << "BLEEP"
		         << '\n';
		     }
		         else cout << words[i] << '\n';
}