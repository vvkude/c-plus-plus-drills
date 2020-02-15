/*  Stroustrup's Programming with C++ Chapter 4 Drill #02
    Write a program that loops through characters from a-z and increments a number */
#include "../../headers/headerTemplate.h"

/*  Method of problem solving
    Define and initialize a loop variable that increments enough times 
    to get through the alphabet while incrementing a number 
*/

int main() 
{
    int increment = 96; // The assignment starts at 97, so we start one increment ahead of 97
    char letter = '`';
    int i = 0;
    while (i<26) {
    	cout << (++letter) << '\t' << (++increment) << '\n';
    	++i; 
    }
}