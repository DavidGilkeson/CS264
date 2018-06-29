//============================================================================
// Name        : Exercise5.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================
/**Exercise 5: An integer is said to be prime if it is divisible only by the two distinct
factors 1 and itself. Write a function that determines if a number is prime. Use this
function in a program that determines and prints all the prime numbers between 1 and
500**/

#include <iostream>
#include <cmath>
using namespace std;


int main() {


	cout << "\n2" << " 3 ";

for(int i = 2; i < 5000;i++)


	for(int j = 2; j * j <= i;j++)
	{

		if(i % j == 0)
			break;

		else if(j+1 > sqrt(i))
		{
			cout << i << "  ";
		}
	}

cout << "hello";
return 0;
}


