/*  Stroustrup's Programming with C++
    Vectors and vector operations */

#include "../../headers/std_lib_facilities.h"

/*  Assignment:
    Write a program that accepts words on user input, displays them
    to the user without repeating them and shows the total number of words

    Approach:
    - Read words as strings into a vector
    - Use member function size() to display the number of words
    - Use a for-loop to test if that word has been read into the vector, or not
 */

int main()
{
	cout << "Enter some words separated by a space and I'll tell you some info about them."
	     << "\nUse ctrl+D to display the info when you are done entering your words:\n";
	vector<string> words;
	for (string temp; cin>>temp;)
		words.push_back(temp);
	cout << "\nTotal number of words: " << words.size() 
	     << '\n';

	sort(words); // This is an overloaded sort from Stroustrup's header file

    cout << "\nHere are the words that are unique:\n";
	for (int i = 0; i<words.size(); ++i)
		// Test if this is a new word, or not (unless it's the very first word)
		if (i == 0 || words[i-1]!=words[i])
			cout << words[i] 
		         << '\n';
}