//============================================================================
// Name        : Exercise1.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;

	int sum = a + b + c;
	int average = (a + b + c) / 3;
	int product = (a * b * c);

	int smallest, largest;

	cout << " Sum = " << sum  << endl;

	cout << " Average = " << average  << endl;

	cout << " Product = " << product  << endl;


	smallest = a;

	largest = a;

	if(b > largest){
		largest = b;
	}
	if(c > largest){
			largest = c;
		}
	if(b < smallest){
		smallest = b;
		}
	if(c < smallest){
		smallest = c;
		}

	cout << " Smallest = " << smallest << endl;

	cout << " Largest = " << largest  << endl;

	return 0;
}
