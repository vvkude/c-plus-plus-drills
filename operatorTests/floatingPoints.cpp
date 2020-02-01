#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

// simple program to exercise operators and precedence of operators
int main ()
{
	cout << "Please enter a floating point value: ";
	double n;
	cin >> n;
	cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\nn squared == " << pow (n,2)
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << '\n'; // end of line in output
    cout << "Enter the value of a: ";
    int a;
    cin >> a;
    cout << "Enter the value of b: ";
    int b;
    cin >> b;
    int c = a/b * b + a%b; //test the definition of cmath int
    cout << "\nc is a/b * b + a%b, which is a: " << a/b * b + a%b
         << "\na == " << a
         << "\nb == " << b
         << "\nc == " << c
         << '\n'; // end of line in output
}