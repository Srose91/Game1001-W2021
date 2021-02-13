#include <iostream>
#include <fstream> //Necessary for file streaming
#include <string>
using namespace std;

int main()
{

	
	ofstream outputFile;
	ifstream inputFile;
	int numDays = 0;
	double sales, totalSales = 0.0;
	string name, name1, name2, name3, filename;

	//File output
	/*
	//Open the output file
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file. \n\n";

	//Write to the file
	outputFile << "Wallace\n";
	outputFile << "Balaniuc\n";
	outputFile << "Likes\n";
	outputFile << "Games\n";

	//Closes the file, important to do after you're done outputting to the file
	outputFile.close();

	cout << "Done.\n\n";
	*/

	//File input
	/*
	outputFile.open("Friends.txt");

	cout << "Enter the names of three friends.\n";
	cout << "Friend 1: ";
	cin >> name1;
	cout << "Friend 2: ";
	cin >> name2;
	cout << "Friend 3: ";
	cin >> name3;

	outputFile << name1 << endl;
	outputFile << name2 << endl;
	outputFile << name3 << endl;

	cout << "Done.\n";
	*/

	//Reading from file
	/*
	inputFile.open("Friends.txt");

	cout << "Reading data from the file.\n";

	inputFile >> name;
	cout << name << endl;

	inputFile >> name;
	cout << name << endl;

	inputFile >> name;
	cout << name << endl;

	inputFile.close();
	*/

	//Loop and file output
	/*
	cout << "For how many days do you have sales? ";
	cin >> numDays;
	outputFile.open("Sales.txt");

	for (int i = 1; i <= numDays; i++)
	{
		cout << "Enter the sales for day " << i << ": ";
		cin >> sales;

		outputFile << sales << endl;
	}

	outputFile.close();
	cout << "Data written to Sales.txt.\n";
	*/

	//Loop and file input
	cout << "Enter the filename: ";
	cin >> filename;

	inputFile.open(filename.c_str());

	//Check to see that the file actually exists
	if (inputFile)
	{
		//Reached end of file (EOF)
		while (inputFile >> sales)
		{
			//Process our info from the file
			totalSales += sales;
			numDays++;
		}

		inputFile.close();

		cout << "Total sales for the " << numDays << " days were $" << totalSales << endl;
	}
	else 
	{
		cout << "Error opening the file.\n\n";
	}

	//Basic while loop
	/*
	int num = 1;

	while (num <= 5)
	{	
		cout << "Hello ";
		num++;		
	}

	*/

	//Basic do-while loop
	/*
	do 
	{
		//Code goes in here
		//Will be run at least once
	} while (condition); //Checks condition after going through code in the do brackets
	*/

	//For loops
	/*
	for (Initialization, Condition, Update) 
	{
		//Code here
	}

	eg: for (int i = 1; i <= 10; i++)
	{
		cout << i;
	}
	*/

	//Postfix and prefix ++ operator
	/*
	int num = 4;

	cout << num << " ";
	cout << num++ << " "; //Postfix mode (increments variable after it's processed)
	cout << num << " ";
	cout << ++num << endl; //Prefix mode (increments variable before it's processed)
	*/

	return 0;
}