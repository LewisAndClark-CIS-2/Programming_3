// program3_1.cpp : Defines the entry point for the console application.
/***************************************************************
 * Author: Brandon McCurry
 *		some collaboration with Matt Gilmore and Jason Nyguen
 *
 * Reverse a float number without converting to a string
 * try to leave the decimal inbetween the same numbers
 * Ex: 123.45 to 54.321
 ***************************************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float num = 0.0;
	float newNum = 0.0;
	cout << "Please enter a number to reverse: ";
	cin >> num;
	int temp = num;
	int dec = 1;
	float whole = 1;

	// get multiplier (123.45, 1), (12.345, 10),
	// (1.2345, 100), (.12345, 1000), (.012345, 10000)
	while ((num / whole) >= 0.1)
	{
		whole *= 10;
	}
	// keep whole value but move decimal one left
	// 123.45 / 1000 = .12345, but 54321 / 1000 = 5.4321
	// we want .54321 later
	float hold = whole * 10;

	// compare the float to the int version
	// float(123.45) == int(123)
	while (num != temp)
	{
		num *= 10;
		temp = num;
		dec *= 10;
	}
	while (temp > 0)
	{
		newNum += (temp % 10) * whole;
		temp /= 10;
		whole /= 10;
	}
	// add decimal back from the beginning
	// 54321 changes to .54321, then to 54.321
	newNum = newNum / hold * dec;
	cout << "Reversed: " << newNum << endl;
	cout << "Press enter to exit...";
	getchar();
	getchar();
}

