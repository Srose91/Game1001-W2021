#include <iostream>
using namespace std;


//Outputs a list of several variables from smallest to largest, as well as demonstrates some arithmetic operators, to the console
int main()
{
	/* Testing to determine sizes
	cout << "Ints are: " << sizeof(int) << " bytes big\n";
	cout << "Floats are: " << sizeof(float) << " bytes big\n";
	cout << "Booleans are: " << sizeof(bool) << " bytes big\n";
	cout << "Doubles are: " << sizeof(double) << " bytes big\n";
	cout << "Chars are: " << sizeof(char) << " bytes big\n";
	cout << "Strings are: " << sizeof(string) << " bytes big\n";
	cout << "Short ints are: " << sizeof(short) << " bytes big\n";
	cout << "Long ints are: " << sizeof(long) << " bytes big\n";
	cout << "Long long ints are: " << sizeof(long long) << " bytes big\n";
	*/

	//Data output ordered from largest to smallest
	/*String: 40 bytes
	Doubles 8 bytes
	Long long ints 8 bytes
	Long ints 4 bytes
	Floats 4 bytes
	Ints 4 bytes
	Short ints 2 bytes
	Chars 1 byte
	Booleans 1 byte
	*/

	//Variable size list
	cout << "Various variables in order from smallest to largest:\n"
		"Booleans (" << sizeof(bool) << " byte)\n"
		"Chars (" << sizeof(char) << ") byte \n"
		"Short ints (" << sizeof(short) << ") bytes \n"
		"Ints (" << sizeof(int) << ") bytes \n"
		"Floats (" << sizeof(float) << ") bytes \n"
		"Long ints (" << sizeof(long) << ") bytes \n"
		"Long long ints (" << sizeof(long long) << ") bytes \n"
		"Doubles (" << sizeof(double) << ") bytes \n"
		"Strings (" << sizeof(string) << ") bytes \n \n";

	//Arithmetic operators demo
	int num1 = 10, num2 = 5;

	cout << "Addition: " << num1 << " + " << num2 << "= " << num1 + num2 << endl
		<< "Subtraction: " << num1 << " - " << num2 << "= " << num1 - num2 << endl
		<< "Multiplication: " << num1 << " x " << num2 << "= " << num1 * num2 << endl
		<< "Division: " << num1 << " / " << num2 << "= " << num1 / num2 << endl
		<< "Modulus: " << num1 << " % " << num2 << "= " << num1 % num2 << endl;

}