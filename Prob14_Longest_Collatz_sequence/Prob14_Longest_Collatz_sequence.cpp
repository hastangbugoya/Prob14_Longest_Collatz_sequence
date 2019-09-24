// Prob14_Longest_Collatz_sequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	unsigned long int n, value, longestn = 1;
	int longestseries = 1, current;
	for (n = 1; n < 1000000; n++)
	{
		value = n;
		current = 1;
		do {
			if (value % 2 == 0)
				value = value / 2;
			else
				value = 3 * value + 1;
			current++;
		} while (value != 1);
		if (current > longestseries)
		{
			longestn = n;
			longestseries = current;
		}
	}
	printf("\n%d", longestn);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
