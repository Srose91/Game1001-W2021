#include <iostream>
using namespace std;

//This program will ask the user how many hours they worked and their hourly rate, and display the appropriate 
int main()
{
	//Variable declarations
	double hoursWorked, hourlyRate, totalPay,
		   normalPay, overtimePay = 0, overtimeHours;

	//Getting input from the user
	cout << "How many hours did you work this week? \n";
	cin >> hoursWorked;
	cout << "What is your hourly rate? \n";
	cin >> hourlyRate;

	//Checking to see if we should calculate overtime or not, and a catch in case the user enters "bad data" (like a string)
	if (hoursWorked > 40)
	{
		//Calculating normal pay (with overtime)
		normalPay = 40 * hourlyRate;

		//Calculating overtime pay
		overtimeHours = hoursWorked - 40;
		overtimePay = overtimeHours * (hourlyRate * 1.5);

		//Calculating total pay
		totalPay = normalPay + overtimePay;

	}
	else if (hoursWorked <= 40) 
	{
		//Calculating normal pay (without overtime)
		normalPay = hoursWorked * hourlyRate;

	}
	else 
	{
		cout << "You entered invalid data.";
	}

	//Checking if the user had overtime or not, and displaying the appropriate output to the user
	if (overtimePay > 0) 	//If the user had overtime, display the normal, overtime and total pays
	{
		cout << "Your normal pay is $" << normalPay << endl
			 << "Your overtime pay is $" << overtimePay << endl
			 << "So your total pay is $" << totalPay << endl;
	}
	else 	//If the user had no overtime, just display the normal pay
	{
		cout << "You had no overtime hours this week, so your total pay is $" << normalPay << endl;
	}

	return 0;
}