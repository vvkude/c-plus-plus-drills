#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
	cout << "Please enter your first name and last name, as well as your age\n";
	string first_name ="???"; // initialize with some value so that erroneous output is at least standardized
	string last_name ="???";
	double age=0; // initialize with some value so that erroneous output is at least standardized
	cin >> first_name >> last_name >> age;
	double months= age * 12; 
	cout << "Hello, " << first_name << " " << last_name << " (age " << age << " years, or " << months << " months)\n";
}