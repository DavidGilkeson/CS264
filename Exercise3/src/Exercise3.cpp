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

	cout << "Enter a five-digit number: ";

	cin >> digit;

	cout << digit << "   ";

	digit = digit % 10000;

	cout << digit << "   ";

	digit = digit % 1000;

	cout << digit << "   ";

	digit = digit % 100;

	cout << digit << "   ";

	digit = digit % 10;

	cout << digit << endl;


	return 0;
}
