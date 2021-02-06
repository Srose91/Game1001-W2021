#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declaring the constant values for each item, since they don't change
	const double 
		ITEM1 = 299.99,
		ITEM2 = 89.75,
		ITEM3 = 189.95,
		ITEM4 = 150.89,
		ITEM5 = 429.45;

	//Declaration of non-static/constant variables
	double item1Sold = 0, item2Sold = 0, item3Sold = 0, item4Sold = 0, item5Sold = 0, totalPay, input;

	//User information
	cout << "Each week, you make 200$ plus a 9% comission on the total number of items you sold. \n"
		<< "The value of those items are: \n \n"
		<< "Item 1: $" << ITEM1 << endl
		<< "Item 2: $" << ITEM2 << endl
		<< "Item 3: $" << ITEM3 << endl
		<< "Item 4: $" << ITEM4 << endl
		<< "Item 5: $" << ITEM5 << endl << endl;

	cout << "Now, please enter how many of each item you sold this week \n"
		<< "(Enter a number that's equal to or greater than 0 for each line) \n \n";

	//Get inputs from user for how many of each item they sold
	cout << "How many units of Item 1 did you sell? ";
	cin >> input;
	item1Sold = input;

	cout << "How many units of Item 2 did you sell? ";
	cin >> input;
	item2Sold = input;

	cout << "How many units of Item 3 did you sell? ";
	cin >> input;
	item3Sold = input;

	cout << "How many units of Item 4 did you sell? ";
	cin >> input;
	item4Sold = input;

	cout << "How many units of Item 5 did you sell? ";
	cin >> input;
	item5Sold = input;

	//Check that the inputs were valid, display an error message if an input was invalid
	if (item1Sold >= 0 && item2Sold >= 0 && item3Sold >= 0 && item4Sold >= 0 && item5Sold >= 0)
	{
		//Calculate the total pay based off the user's input, and display a message with their total pay
		totalPay = (((ITEM1 * item1Sold) + (ITEM2 * item2Sold) + (ITEM3 * item3Sold) + (ITEM4 * item4Sold) + (ITEM5 * item5Sold)) * 0.09) + 200; //200 + 9% of the sum of the value of each item multiplied by how much each item was sold
		cout << fixed << showpoint << setprecision(2) << endl << "Your total pay for this week is $" << totalPay << endl; //Formats the result so that it displays two decimals points
	}
	else 
	{
		cout << "Invalid data was entered (most likely a negative number). \n";
	}

	return 0;
}