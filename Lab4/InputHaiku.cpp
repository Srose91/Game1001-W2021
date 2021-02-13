#include <iostream>
#include <fstream>
#include <string> //For getline

using namespace std;

int main()
{
	//Haiku taken from https://www.teechu.com/video-game-haiku-poems

	string line, haiku;
	ifstream haikIn;
	haikIn.open("haiku.txt");

	//Check to make sure the file actually exists
	if (haikIn)
	{
		cout << "Reading from file haiku.txt\n";

		//Reads and displays each line in the file, until there are no more lines left to read
		//Runs at least once
		do
		{
			cout << line << endl;

		} while (getline(haikIn, line));

		cout << "\nFinished reading from haiku.txt.\n";
	}
	else //If the file isn't there, this error message will be displayed
	{
		cout << "Error occured, most likely file not found.\n";
	}

	//Closes filestream so we can't accidentally mess up the file
	haikIn.close();

	return 0;
}