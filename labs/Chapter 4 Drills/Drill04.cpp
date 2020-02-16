/*  Stroustrup's Programming with C++ Ch 4 Drill 4
    Manual squaring drill */

#include "../../headers/headerTemplate.h"

/*  Assignment:
    Write a program that squares a number without the addition operation
    
    Approach:
    Try to store the integer value to square and loop up to that
    value, adding for every time iterate 

    For example, 4^2 = (4+4+4+4), so we will iterate 4 times */

int squareRunner (int n)
{
	// catch negative numbers and convert them to positive ones
	n = abs(n);

	// initialize a variable to store the square of the number
	int sq = n;

	// iterate, adding n to the result repeatedly
	for (int i = 1; i < n; i++) // increment after the expression
		sq = sq + n;

	return sq;
}

/*  Using the fact that (𝑛+1)2=𝑛2+2𝑛+1, adding together serialized odd numbers
    will get you the value of the square we seek for any number, n
    Axiom of Induction extends this to all cases */

int squareAdder(int n)
{
	int odd_number = 1;
	int sq = 0;

	n = abs(n);

	// The sum of odd numbers in series, starting from 1, can be added n times
	// to create the square for the number n
	while (n--) // decrement n after using it in an expression
	{
		sq = sq + odd_number;
		odd_number = odd_number +2;
	}

	return sq;
}

int main()
{
    cout << squareRunner(4) << '\t' << squareRunner(-4)
         << '\n'
         << squareAdder(4) << '\t' << squareAdder(-4);
    return 0;
}