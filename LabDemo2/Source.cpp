//This is for single line comments

/*This is for multiple lines of comments
Like this*/

#include <iostream>
#include <string> //Allows us to use the string datatype
using namespace std; //Using standard namespace

//Main entry point for the application
int main()
{
	//Executed code goes in here

	cout << "Hello world" << endl; //endl indicates new line
	cout << "Programming is great fun \n"; //\n can also be used for new lines
	cout << "\t also stuff"; //\t adds a tab space

	int number; //Data type and data name/identifier
	number = 5;

	cout << "\n The value of number is: " << number << endl;

	number = 7;
	cout << "The value of number is now: " << number << endl; 

	//Smaller to larger
	int checking;
	unsigned int miles; 
	long days; 
	//Can also do "int checking, miles, days" for same data types, and give them a value when you create them;

	checking = -20;
	miles = 4276;
	days = 192000;
	cout << "My account balance is " << checking << "$, I traveled " << miles << " miles, and it's been " << days << " days since the pandemic started\n";

	float distance = 1.496E8; 
	double mass = 1.989E30; 

	cout << "The sun is " << distance << " kilometers away\n";
	cout << "The sun\'s mass is " << mass << " kilograms\n";

	char letter = 'A';
	cout << letter << endl;
	letter = 65; //You can also use the ASCII value of a char
	cout << letter << endl;

	string movieTitle = "Endgame";
	cout << "A movie I didn't watch was " << movieTitle << endl;

	bool boolValue = true;
	cout << boolValue << endl;
	
	boolValue = false;
	cout << boolValue << endl;

	double apple;

	cout << "The size of a short interger: " << sizeof(short) << " bytes\n";
	cout << "The size of a long interger: " << sizeof(long) << " bytes\n";
	cout << "The size of an apple is: " << sizeof(apple) << " bytes\n";

	double first = 5.25,
		second = 51.7,
		third = 20.125,
		fourth = -10.4,
		answerAddition,
		answerSubtraction,
		answerMultiplication,
		answerDivision,
		answerModulus;

	answerAddition = first + second; 

	cout << "Addition: " << first + second << endl;
	cout << "Addition: " << answerAddition << endl;

	cout << "Subtraction: " << second - third << endl;

	cout << "Multiplication: " << third * fourth << endl;

	cout << "Division: " << fourth / first << endl;

	cout << "Modulus: " << (int)first % (int)second << endl; //Casting, forces first and second to become intergers for this line

	return 0;
}