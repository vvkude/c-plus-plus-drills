// Stroustrup's C++ Programming Chapter 3 Exercise 10
// Accept an operator and two operands and output the result
#include "../../headers/headerTemplate.h"

/* Assignment:	Write a program that an operation followed by two operands
				and output the result

	Approach:	Store the operation in a string and compare it like we did
				in exercise 9 to determine the correct operation for the operands
*/

int main()
{
	cout << "Enter an operation and two operands separated by spaces. I'll show you the result\n"
	     << "Enter quit to stop this program\n";
	string op = "???"; // initialize with some known value to aid in debugging
	int operand01 = 0;
	int operand02 = 0;
    cin >> op >> operand01 >> operand02;

    while (cin>>op) {
        if (op == "add")
    	    cout << operand01+operand02 << '\n';
    	else if (op == "subtract")
    		cout << operand01-operand02 << '\n';
    	else if (op == "multiply")
    		cout << operand01*operand02 << '\n';
    	else if (op == "divide")
    		cout << operand01/operand02 << '\n';
    	else if (op == "quit") {
    		cout << "Goodbye!\n";
    	    return 0;
    	}
    	else 
    		cout << "Not sure what you want me to do here. Can you try add, subtract, multiple, divide or quit?"
    	         << "Enter an operation and two operands separated by spaces:\n";

    }
}