#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Haiku taken from https://www.teechu.com/video-game-haiku-poems

	ofstream haikOut;

	haikOut.open("haiku.txt");

	if (haikOut) //Maybe not necessaary here? Oh well
	{
		//Informing the user that we're writing to haiku.txt
		cout << "Writing the following haiku to haiku.txt\n\n";

		//The haiku itself
		cout << "Objections to lies\n";
		cout << "Conjectures to find the truth\n";
		cout << "Find the right verdict!\n";

		//Writing the haiku to the file
		haikOut << "Objections to lies\n";
		haikOut << "Conjectures to find the truth\n";
		haikOut << "Find the right verdict!\n";

		//End of writing confirmation
		cout << "\nFinished writing to haiku.txt\n";
	}
	else //Error flag just in case
	{
		cout << "Error occured, most likely file not found.\n";
	}

	//Closes the filestream so we can't accidentally mess it up
	haikOut.close();

	return 0;
}