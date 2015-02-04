// program3_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float num = 0.0;
	int temp = 0;
	float newNum = 0.0;
	cout << "Please enter a number to reverse: ";
	cin >> num;
	temp = num;
	int dec = 1;
	int c = 1;
	while (num / c > 10)
	{
		c *= 10;
	}
	c *= 10;
	while (num != temp)
	{
		num *= 10;
		dec *= 10;
		temp = num;
	}
	cout << dec << endl;
	int i = 1000;
	while (temp > 0)
	{
		newNum += (temp % 10) * c;
		temp /= 10;
		c /= 10;
	}
	newNum /= dec;
	cout << newNum;
	getchar();
	getchar();
}

