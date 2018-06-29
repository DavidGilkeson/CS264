//============================================================================
// Name        : Exercise3.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int digit;

	cout << "Enter a five-digit number:\n";

	cin >> digit;


	int digit1 = digit % 10;

	int digit2 = digit / 10 % 10;

	int digit3 = digit / 100 % 10;

	int digit4 = digit / 1000 % 10;

	int digit5 = digit / 10000 % 10;


	cout << digit5 << "   " << digit4 << "   " << digit3 << "   " << digit2 << "   " << digit1 << endl;


	return 0;
}
