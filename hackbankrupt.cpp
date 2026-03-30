#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// predeclare functions 

int normBalance(int transaction);// this will be normalize bank transaction
string hackTransaction(int &accountFunds); // this will be to hack transaction


int main() {
	// greet the user (for good user experience)
	cout << "Welcome to Comerca Bank!" << endl;
	//ask user for a transaction
	cout << "\nPlease enter your bank transaction: " << endl;
	int transaction;
	cin >> transaction;

	//calling function normBalance
	normBalance(transaction);

	return 0;
}
//declare functions 
//function one (THE MAIN ONE) 

int normBalance(int transaction) {
	//this is my code block for the first function

	//integer parameters for both accounts 
	int accountFunds = transaction;
	int accountBalance = 5000;

	//print orignal funds and balance for both accounts
	cout << "\nOriginal Funds: " << accountFunds << endl;
	cout << "\nOriginal Balance: " << accountBalance << endl;


	//pass account balance by reference to the hack transaction function
	int& ref = transaction; // ref is referncing to variable num
	hackTransaction(ref);
	return 0;

}

//function two (returns to main) 

string hackTransaction(int &accountFunds)
//this is my code block for the second function
{
	//swap the bank balances 
	int hackedFunds = 5000; // this is the new hacked funds in the account

	// swap the variable transaction for varaible num 
	int temper = accountFunds;
	accountFunds = hackedFunds;
	hackedFunds = temper;
	
	// print out the new balances
	cout << "\nHacking Funds: " << accountFunds << endl;
	cout << "\nHacking Balance: " << hackedFunds << endl;
	string hackedTransaction = "Hacking your Transaction: ";



	return hackedTransaction;

}



