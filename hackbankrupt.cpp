#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// predeclare functions 

int normBalance();// this will be normalize bank transaction
string hackTransaction(int accountFunds); // this will be to hack transaction


int main() {
	// greet the user (for good user experience)
	cout << "Welcome to Comerca Bank!" << endl;
	//ask user for a transaction
	cout << "\nPlease enter your bank transaction: " << endl;
	string transaction;
	cin >> transaction;

	int accountFunds = 2000; // this is the original funds in the account

	return 0;
}

//function one (THE MAIN ONE) 

int normBalance() {
	//this is my code block for the first function

	//integer parameters for both accounts 
	int accountFunds = 2000;
	int accountBalance = 5000;

	//print orignal funds and balance for both accounts
	cout << "Original Funds: " << accountFunds << endl;
	cout << "Original Balance: " << accountBalance << endl;


	//Print the funds and balance showing this normal transaction should change nothing
	cout << "Funds: " << endl;
	cout << "Balance: " << endl;
	//pass account balance by reference to the hack transaction function
	int num = 5000;
	int& ref = num; // ref is referncing to variable num
	cout << "Num: " << num << endl;
	cout << "Ref: " << ref << endl;
	ref = 10000;
	cout << "Num: " << num << endl; // num after modifiying
	cout << "Ref: " << ref << endl; // ref after modifiying
	return 0;

}

//function two (returns to main) 

string hackTransaction(int accountFunds)
//this is my code block for the second function
{
	//swap the bank balances 
	int accountFunds = 10000; // this is the new hacked funds in the account




	// print out the new balances
	cout << "Hacking Funds: " << endl;
	cout << "Hacking Balance: " << endl;
	string hackedTransaction = "Hacking your Transaction: " & int(accountFunds);



	return normBalance(0);
}
