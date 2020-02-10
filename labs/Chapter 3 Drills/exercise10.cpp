// Stroustrup's C++ Programming Chapter 3 Exercise 10
// Accept an operator and two operands and output the result
#include "../../headers/headerTemplate.h"

/* Assignment:	Write a program that an operation followed by two operands
				and output the result

	Update: 	Didn't think to include the actual operators (+, -, *, /)

	Approach:	Store the operation in a string and compare it like we did
				in exercise 9 to determine the correct operation for the operands
*/

int main()
{
	string op = "???"; // initialize with some known value to aid in debugging
	double operand01 = 0;
	double operand02 = 0;
	cout << "Enter an operation and two operands separated by spaces. I'll show you the result\n"
	     << "+, -, *, /, add, subtract, multiply and divide will work. Enter quit to stop this program\n";
    
    while(cin >> operand01 >> op >> operand02) { // easier way to perform steps if input is good
        double result = 0;
        if (op=="plus" || op=="+") result = operand01+operand02;
        else if (op=="minus" || op=="-") result = operand01-operand02;
        else if (op=="multiply" || op=="*") result = operand01*operand02;
        else if (op=="divide" || op=="/") {
        	// Coonditionally check that the denominator is not zero
        	if (operand02==0) {
        		cout << "We cannot divide by zero. Please enter another number:\n";
        		cin >> operand02;
        	}
        	result = operand01/operand02;
        } //--> /else-if
        else 
        	cout << "Sorry, I do not understand the operation you want";
    cout << operand01 << " " << op << " " << operand02 << " == " << result << '\n';
    }//--> /while
}