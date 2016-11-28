using namespace std;

class InputValidator {
public:
	string getString();
	int getInt();
	double getDouble();
};

//this checks if cin failed and acts accordingly
bool checkIfCinFailed()
{
	//clears error flags and ignores the next 256 characters or until the '\n' character
	//returns a bool if cin failed
	if (cin.fail()) {
		cin.clear();
		cin.ignore(256, '\n');
		return true;
	}
	return false;
}