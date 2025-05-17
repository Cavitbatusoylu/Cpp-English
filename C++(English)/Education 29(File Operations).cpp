#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
	ifstream:
	ifstream is input file stream which allows you to read the contents of a file.

	ofstream:
	ofstream is output file stream which allows you to write contents to a file.

	fstream:
	fstream allows both reading from and writing to files by default.
	However, you can have an fstream behave like an ifstream or ofstream
	by passing in the ios::open_mode flag.
*/

int main() {

	// WRITING
	/*
	fstream file;
	file.open("C:\\test\\filename.txt", ios::out | ios::binary | ios::app);

	if (!file.is_open())
	{
		cout << "Opening file...";
	}
	else
	{
		file << endl;
		string str = "Hello World!";
		file << str;
		file.close();
	}
	*/

	// READING
	/*
	fstream file;
	file.open("C:\\test\\filename.txt", ios::in | ios::binary );

	if (!file.is_open())
	{
		cout << "File cannot be opened...";
	}
	else
	{
		string str;
		while (getline(file, str))
		{
			cout << str << endl;
		}
		file.close();
	}
	*/

	cout << endl;
	return 0;
}