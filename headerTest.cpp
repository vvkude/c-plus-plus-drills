/* includes from Stroustrup */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
	cout << "Hi there! Please enter your first name (then hit 'enter'):\n";
	string first_name; 
	cin >> first_name;
    cout << "Hello, " << first_name << "!\n"; 
    // After testing this between Windows and Mac OS I am not sure if I need
    // to add keep window open or not because it looks it's only buggy on Windows
}
