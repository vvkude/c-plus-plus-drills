#include "../../headers/headerTemplate.h"

int main ()
{
	double d = 0;
	cout<<"Enter any type of number of any length:\n";
	cout<<"initialized value of d=="
		    <<d
		    <<'\n';
	while (cin>>d) { // repeat the following statments as long as numbers are entered
		cout<<"current value of d=="
		    <<d
		    <<'\n';
		int i = d;   // try to squeeze a double into an int
		char c = i;  // try to squeeze an int into a char
		int i2 = c;  // get the integer value of the *character*
		cout<<"d=="<<d // display the value of the original double
		    <<" i=="<<i // display the value of the converted int
		    <<" i2=="<<i2 // integer value of the char
		    <<" char("<<c<<")\n"; // the value of the narrowed char
	}
}