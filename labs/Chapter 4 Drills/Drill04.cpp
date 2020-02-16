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
	for (int i = 1; i < n; i++)
		sq = sq + n;

	return sq;
}

int main()
{
    cout << squareRunner(4) << " " << squareRunner(-4);
    return 0;
}