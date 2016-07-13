/*************************************************************
** Author: Kevin Turkington
** 7/12/16
** Description: Header file for Bankaccount program
**************************************************************/

//Why not use .h instead of .hpp?
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>
using namespace std;

class BankAccount{
	private:
		string Name;
		string ID;
		double Balance;
	public:
		//constructors
		BankAccount();
		BankAccount(string,string,double);

		//Destructor
		~BankAccount();

		//getter
		string getCustomerName();
		string getCustomerID();
		double getCustomerBalance();

		//setter
		void setCustomerName(double);
		void setCustomerID(double);
		void setCustomerBalance(double);

		//functions
		double withdraw(double);
		double deposit(double);
};

#endif