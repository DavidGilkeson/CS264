//============================================================================
// Name        : Exercise2.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, b;

	cin >> a >> b;

	if(a % b == 0)
	{
	cout << a << " is a multiple of " <<  b << endl;
	}

	if(a % b != 0)
		{
		cout << a << " is not a multiple of " <<  b << endl;
		}
	return 0;
}
