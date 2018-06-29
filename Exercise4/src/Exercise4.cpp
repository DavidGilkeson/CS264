//============================================================================
// Name        : Exercise4.cpp
// Author      : David Gilkeson
// Version     :
// Copyright   : CS264
// Description : Hello World in C++, Ansi-style
//============================================================================

/**Exercise 4: Develop a C++ program that will determine if a department-store cus-
tomer has exceeded the credit limit on a charge account. For each customer, the following
information is available:
1. account number (an integer);
2. balance at the beginning of the month;
3. total of all items charged by the customer this month;
4. total of all credits applied to the customer’s account this month;
5. allowed credit limit
The program should input this information, calculate the new balance (= beginning
balance + charges - credits) and determine if the new balance exceeds the customer’s
credit limit. For those customers whose credit limit is exceeded, the program should
display the customer’s account number, credit limit, new balance and the message
“Credit limit exceeded.”
The program should permit multiple customer details to be inputted with the
above information being printed to the screen after each customer. The program should
terminate when an account number of -1 is inputted.
You should save the source in a file called exercise4.cpp.
**/

#include <iostream>
using namespace std;

int main() {
	cout << "Please enter customer information" << endl;

	int account;
	int balanceBegin;
	int allItems;
	int creditApplied;
	int allowedCredit;
	int newBalance;

	while(true) {
		cin >> account;
				if(account==-1){
		break;
	}



cin >> balanceBegin >> allItems >> creditApplied >> allowedCredit;
		if(account==-1){
		break;
	}
		newBalance = balanceBegin + allItems - allowedCredit;
		if(newBalance>allowedCredit){
			cout << "Credit limit exceeded\n" ;
					cout << "Account: " << account << "\nStart Balance:" << balanceBegin << "\nTotal Charge:" << allItems << "\nTotal Credits:" << allItems << "\nTotal Limit" << balanceBegin << "\nNew Balance:" << newBalance << endl;
		}
		else{
			cout << "Account: " << account << "\nStart Balance:" << balanceBegin << "\nTotal Charge:" << allItems << "\nTotal Credits:" << allItems << "\nTotal Limit" << balanceBegin << "\nNew Balance:" << newBalance << endl;
		}
	}

}
