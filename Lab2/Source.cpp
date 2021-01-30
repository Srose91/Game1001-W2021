#include <iostream>
using namespace std;

//This is a program that will ask the user to input 3 numbers, and then display the sum, product and average of those numbers
int main()
{
	//Initilization of variables
	double number1, number2, number3,
		   sum, product, average;

	//Asking for input from the user
	cout << "This program calculates the sum, product and average of 3 numbers \n"
		 << "Please enter 3 numbers (they can have decimals) \n";

	//Taking the user's input 
	cin >> number1 >> number2 >> number3;

	//Calculating and outputting the results to the user
	sum = number1 + number2 + number3;
	product = number1 * number2 * number3;
	average = sum / 3;
	cout << "The sum of your numbers is: " << sum << endl
		 << "The product of your numbers is: " << product << endl
		 << "And the average of your numbers is: " << average;


	return 0;
}