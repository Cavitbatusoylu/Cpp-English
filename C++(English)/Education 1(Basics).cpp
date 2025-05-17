#include <iostream> // Required library for input and output operations

using namespace std; // Allows use of standard namespace (std) without prefix

int main() // Main function: entry point of the program
{
	string isim; // 'string' is used to define a text variable
	isim = "Cavit"; // Assigns the value "Cavit" to the variable 'isim'

	int yas = 18; // 'int' is used for integer values; assigns 18 to 'yas'

	cout << "Once upon a time there was a young man named " << isim << endl
		<< isim << " was " << yas << " years old." << endl; // Outputs text to the screen

	isim = "Batu"; // Assigns a new name to the variable
	yas = 19; // Updates the age

	cout << isim << " liked his name but did not like being " << yas
		<< " years old, he wanted to be older."; // Another output

	// Variable naming rules:
	// 1-) The first character of a variable name cannot be a number
	// 2-) Do not use Turkish characters in variable names
	// 3-) No spaces allowed in variable names
	// 4-) Do not use punctuation marks like dot, etc.

	// Recommended to use camelCase style for naming
	// int birthYear = 2006;

	return 0; // Ends the program, returning 0 means success
}
