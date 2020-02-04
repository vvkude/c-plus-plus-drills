// Stroustrup drill to order 3 random integers
#include "../../headers/headerTemplate.h"

/*
    Assignment is to accept 3 integers and play them back in 
    numerical sequence separated by commas
*/

void sortNum(int& num1, int& num2, int& num3);

int main()
{
    int firstNum, secondNum, thirdNum;
    cout << "Enter the first integer: ";
    cin >> firstNum;
    cout << "Enter the second integer: ";
    cin >> secondNum;
    cout << "Enter the third integer: ";
    cin >> thirdNum;


    // Defining a filter type fucntion. When it returns, we 
    // should see the values reassigned in an ascending order
    sortNum(firstNum, secondNum, thirdNum);

    cout << "Here are your numbers in numerical order: " << firstNum << ", " << secondNum << ", " << thirdNum 
         << '\n';
}

void sortNum(int& num1, int& num2, int& num3)
{
	// Compare the first number to the second number and swap them if they
	// are not in numerical order
	if(num1 > num2)
	{
		int swap = num1; // Use a temporary swap variable for moving comparisons
		num1 = num2;
		num2 = swap;
	}
	if(num2 > num3)
	{
		int swap = num2;
		num2 = num1;
		num1 = swap;
	}
	if(num1 > num3)
	{
		int swap = num3;
		num3 = num1;
		num3 = swap;
	}
}