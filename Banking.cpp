// Banking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;

#include "C:\Users\cori-leighdig_snhu\source\repos\InvestData\Header.h"
#include "C:\Users\cori-leighdig_snhu\source\repos\InvestDataApp\InvestDataApp.cpp"

void dataInterface() {
	InvestData userInvest; // create object if InvestData class
	UserDataCalcs dataCalcs; // create objectof UserDataCalcs class

	double initialAmount, monthlyDeposit, interest; // user inputs
	int years;

	string choice; // used in loop later
	bool contRunning = true // determine if it continues

		do {
			system("cls");
			cout << setfill('*') << setw(34) << '*' << endl;
			cout << "*\t" << "Financial Data Input" << "\t*" << endl;
			cout << setfill('*') << setw(34) << '*' << endl;

			cout << "Initial Investment Amount: $";
			cin >> initialAmount;
			cout << endl;

			cout << "Monthly Deposit: $";
			cin >> monthlyDeposit;
			cout << endl;

			cout << "Annual Interest: $";
			cin >> interest;
			cout << endl;

			cout << "Number of years: ";
			cin >> years;
			cout << endl;


			//setting data
			userInvest.setInitialInvest(initialAmount);
			userInvest.setMonthlyDeposit(monthlyDeposit);
			userInvest.setAnnualInterest(interest);
			userInvest.setNumOfYears(years);

			//display data
			cout << "Initial Investment Amount: " << setfill(' ') << right << setw(10) << "$" << userInvest.getInitialInvest() << endl;
			cout << "Monthly Deposit: " << setfill(' ') << right << setw(20) << "$" << userInvest.getMonthlyDeposit() << endl;
			cout << "Annual Interest: " << setfill(' ') << right << setw(20) << "$" << userInvest.getAnnualInterest() << endl;
			cout << "Number of years: " << setfill(' ') << right << setw(20) << "$" << userInvest.getNumOfYears() << endl;
		
			cout << endl;
			//wait for user input
			system("pause");

			try {
				dataCalcs.dataWithout(userInvest);
			} // end try
			catch (const std::exception& exc) {
				cout << exc.what() << endl;
				cout << "error occured with dataWithoutDeposit" << endl;
				contRunning = false;
			} // end catch

			try {
				dataCalcs.dataWithDeposit(userInvest);
			} // end try
			catch (const std::exception& exc) {
				cout << exc.what() << endl;
				cout << "error occured with dataWithDeposit" << endl;
				contRunning = false;
			} // end catch

			cout << endl;

			//ask user if continue
			cout << "Continue? y/n" << endl;
			cin >> choice;
			if (choice == "n" || choice == "N") {
				contRunning = false;
			}
			else {
				continue;
			} // end if else
		
		} // end do
	while (contRunning == true);
}

int main() {
	try {
		dataInterface();
	}
	catch (const std::uncaught_exceptions& exc) {
		cout << exc.what() << endl;
		cout << "error occurred with dataInterface" << endl;
		system("pause");
	}
}// end main