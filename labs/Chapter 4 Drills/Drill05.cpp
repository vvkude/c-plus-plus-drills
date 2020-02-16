/*  Stroustrup's Programming with C++ Chapter 4 Drill 05
    Vectors and vector operations */

#include "../../headers/headerTemplate.h"

/*  Assignment:
    Write a program that accepts temperature values and 
    calculates their mean and median value

    Apporoach:
    - Read temperature values as doubles into a vector
    - Use a for-loop to find the sum of the values
    - Divide by the length of the vector for the sum
    - Use sort() to organize values in ascending order
    - Use size() member function to locate median value
      ^ May not actually locate the median value, will have to check on it
*/

int main()
{
	cout << "Enter some temperatures and I will calculate the mean and median:\n"
	     << "Enter \"c\" to calculate\n";
	vector<double> temperatures;
	for (double temp; cin>>temp;)		// read into the double temp
		temperatures.push_back(temp); 	// pull temp into the end of our temperature vector

	// compute the value of the mean
	double sum = 0;
	for (double x : temperatures)
		sum += x;
	cout << "\nThe mean value of these temperatures is: " << sum/temperatures.size()
	     << '\n';

	// locate the median value
	// I think this median value is only accurate for vectors with an odd size
    std::sort(temperatures.begin(), temperatures.end());
    cout << "The median value of these temperatures is: " << temperatures[temperatures.size()/2] 
         << '\n';
}