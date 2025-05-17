#include <iostream>
using namespace std;

// FUNCTIONS
/*
int hesapla(int x)
{
	int sonuc;
	sonuc = 3 * x + 2;
	return sonuc;
}

int calculateArea(int x, int y)
{
	int area = x * y;
	return area;
}

void showSquareArea(int side)
{
	cout << "Square area = " << (side * side) << endl;
}

void doNothing(string name)
{
	cout << "Hello " << name << endl;
}

string mergeNameSurname()
{
	string name, surname, fullName;
	cout << "Please enter your name = ";
	cin >> name;
	cout << "Please enter your surname = ";
	cin >> surname;

	fullName = name + " " + surname;
	return fullName;
}

int main()
{
	// C++ Functions - C++ Methods
	// f(x) = 3x + 2

	// cout << "Result = " << hesapla(3) << endl;
	// cout << calculateArea(5, 10) << endl;
	// showSquareArea(5); // function call
	// doNothing("Kaan");
	// cout << mergeNameSurname() << endl;

	cout << "Goodbye...\n";
}
*/

// FUNCTION OVERLOADING
/*
#include <iostream>
using namespace std;

void printErrorMessage()
{
	cout << "Warning: An error occurred in the program!" << endl;
}

void printErrorMessage(string message)
{
	cout << message << endl;
}

void printErrorMessage(int code)
{
	cout << code << endl;
}

int main()
{
	// C++ Functions - C++ Methods
	printErrorMessage();
	printErrorMessage("Error in program");
	printErrorMessage(404);

	cout << "Goodbye...\n";
}
*/

// rand() function
/*
#include <cstdlib> // for rand()
#include <ctime>   // for time()

int main() {
	// rand()
	// srand()

	// time(0): returns seconds passed since Jan 1, 1970
	cout << "time(0) = " << time(0) << endl;

	srand(time(0)); // seed random number generator with current time

	int randomNumber = rand();
	cout << "Generated random number = " << randomNumber << endl;

	// Example 2: generate number between 1 and 100
	int randomNumber2 = (rand() % 100) + 1;
	cout << "Random number between 1 and 100 = " << randomNumber2 << endl;
}
*/

// EXAMPLE EXAM QUESTION (rand())
/*
#include <cstdlib> // for rand()
#include <ctime>   // for time()

// A function that takes min and max integers
// and returns a random number between min and max (inclusive)

int generateRandomNumber(int min, int max) {
	int randomNumber = min + (rand() % (max - min + 1));
	return randomNumber;
}

int main() {
	int min, max;
	cout << "Enter minimum value = ";
	cin >> min;
	cout << "Enter maximum value = ";
	cin >> max;

	int number = generateRandomNumber(min, max);
	cout << "Random number between " << min << " and " << max << " = " << number << endl;
}
