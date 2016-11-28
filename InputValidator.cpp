#include <iostream>
#include <string>
#include "InputValidator.h"

using namespace std;

string InputValidator::getString()
{
	string inputString;

	getline(cin, inputString);

	return inputString;
}

int InputValidator::getInt()
{
	int inputInt;
	cin >> inputInt;

	//checks if cin was a valid number
	if (checkIfCinFailed())
	{
		cerr << endl << "Error: the input must be a valid integer" << endl;
		return -1;
	}
	else
	{
		//returns the integer and cleans cin
		cin.clear();
		cin.ignore(256, '\n');
		return inputInt;
	}
}

double InputValidator::getDouble()
{
	double inputDouble;
	cin >> inputDouble;

	//checks if cin was a valid number
	if (checkIfCinFailed())
	{
		cerr << endl << "Error: the input must be a valid double" << endl;
		return -1;
	}
	else
	{
		//returns the integer and cleans cin
		cin.clear();
		cin.ignore(256, '\n');
		return inputDouble;
	}
}

int main() {
	InputValidator iv;
	int input = 0;
	while (input != 4)
	{
		input = iv.getInt();
		switch (input) {
		case 1:
			cout << iv.getDouble() << endl;
			break;
		case 2:
			cout << iv.getInt() << endl;
			break;
		case 3:
			cout << iv.getString().c_str() << endl;
			break;
		}
	}
	return 0;
}