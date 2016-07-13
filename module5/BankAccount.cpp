/*************************************************************
** Author: Kevin Turkington
** 7/12/16
** Description: contains functions for header file Bankaccount.hpp
** these functions contain functionality for a bankaccount program.
**************************************************************/

#include <iostream>
#include <string>
#include "BankAccount.hpp"

using namespace std;


/***********************************************
** Name: BankAccount::BankAccount()
** Description: Default Constructor
** Inputs: N/A
** Outputs: object
************************************************/
BankAccount::BankAccount()
{
	Name = "John Smith";
	ID = "TEST";
	Balance = 404.00;
}

/***********************************************
** Name: BankAccount::BankAccount()
** Description: 3 param constructor
** Inputs: N/A
** Outputs: object with appropriate params
************************************************/
BankAccount::BankAccount(string nam,string ident,double bal)
{
	Name = nam;
	ID = ident;
	Balance = bal;
}

/***********************************************
** Name: BankAccount::~BankAccount()
** Description: Destructor
** Inputs: N/A
** Outputs: N/A
************************************************/
BankAccount::~BankAccount()
{
	//automaticalling un allocated upon unscoping
}

/***********************************************
** Name: BankAccount::getCustomarName()
** Description: returns object name variable
** Inputs: N/A
** Outputs: name
************************************************/
string BankAccount::getCustomerName()
{
	return Name;
}

/***********************************************
** Name: BankAccount::getCustomarID()
** Description: returns object ID variable
** Inputs: N/A
** Outputs: ID
************************************************/
string BankAccount::getCustomerID()
{
	return ID;
}

/***********************************************
** Name: BankAccount::getCustomarBalance()
** Description: returns object balance variable
** Inputs: N/A
** Outputs: balance
************************************************/
double BankAccount::getCustomerBalance()
{
	return Balance;
}

/***********************************************
** Name: BankAccount::setCustomarName()
** Description: sets object name variable
** Inputs: name
** Outputs: N/A
************************************************/
void BankAccount::setCustomerName(double nam)
{
	Name = nam;
}

/***********************************************
** Name: BankAccount::setCustomarID()
** Description: sets object ID variable
** Inputs: ID
** Outputs: N/A
************************************************/
void BankAccount::setCustomerID(double ident)
{
	ID = ident;
}

/***********************************************
** Name: BankAccount::setCustomarBalance()
** Description: sets object Balance variable
** Inputs: Balance
** Outputs: N/A
************************************************/
void BankAccount::setCustomerBalance(double bal)
{
	Balance = bal;
}

/***********************************************
** Name: BankAccount::withdraw()
** Description: decreases balance by an amount
** Inputs: withd
** Outputs: N/A
************************************************/
double BankAccount::withdraw(double withd)
{
	double newBalance = Balance -= withd;
	return newBalance;
}

/***********************************************
** Name: BankAccount::deposit()
** Description: increases balance by an amount
** Inputs: depo
** Outputs: N/A
************************************************/
double BankAccount::deposit(double depo)
{
	double newBalance = Balance += depo;
	return newBalance;
}


/*
int main()
{
	

	BankAccount account1("Harry Potter", "K4637", 8032.78);

	cout << account1.getCustomerName() << endl;
	cout << account1.getCustomerID() << endl;
	cout << account1.getCustomerBalance() << endl;

	account1.withdraw(32.78);
	cout << account1.getCustomerBalance() << endl;

	account1.withdraw(1000.00);
	cout << account1.getCustomerBalance() << endl;

	account1.deposit(2000.00);
	cout << account1.getCustomerBalance() << endl;

	account1.withdraw(500.00);
	cout << account1.getCustomerBalance() << endl;

	account1.deposit(500.00);
	cout << account1.getCustomerBalance() << endl;

	double finalBalance = account1.getCustomerBalance();

	cout << finalBalance << endl;


	return 0;
}
*/

