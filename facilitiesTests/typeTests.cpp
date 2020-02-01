#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name ="???"; // initialize with some value so that erroneous output is at least standardized
	int age=0; // initialize with some value so that erroneous output is at least standardized
	cin >> first_name >> age;
	cout << "Hello, " << first_name << " (age " << age << ")\n";
}