#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
	/*

	//Calculate the area of a rectangle
	int length, width, area;

	cout << "The program calculates the area of a rectangle \n"; 

	
	//Initial
	//Ask input from the user
	cout << "Enter the length of the rectangle as an interger/whole number: ";
	cin >> length;
	cout << "Enter the width of the rectangle as an interger/whole number: ";
	cin >> width;
	

	//V2
	cout << "Enter the length and width of the rectangle, seperated by a space ";
	cin >> length >> width;

	//Calculates and displays area of inputted length + width
	area = length * width; 
	cout << "The area of the rectangle is: " << area << endl;
	*/


	//Casting int to double
	/*int books, months;
	double booksPerMonth;

	//Get input from user
	cout << "How many books are you going to read? ";
	cin >> books;
	cout << "How many months will it take for you to read them all? ";
	cin >> months;

	booksPerMonth = static_cast<double>(books) / months;
	cout << "That would be " << booksPerMonth << " books per month. \n";
	*/

	//Casting int to char
	/*int num = 69;

	cout << num << endl;

	//What is the letter equivalent to the number?
	cout << static_cast<char>(num) << endl;
	*/

	//Constants
	const double PI = 3.1415926;
	double area, radius; 

	cout << "This program calculates the area of a circle. \n";

	cout << "What is the radius of the circle? ";
	cin >> radius;

	//pow(x,y) = x to the power/exponent of y
	area = PI * pow(radius, 2);
	cout << "The area of the circle is: " << area << endl;

	return 0;
}