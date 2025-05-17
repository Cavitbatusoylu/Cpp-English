#include <iostream>

using namespace std;

int main()
{
	// int => Takes up 4 bytes of memory. Can store values from -2147483648 to 2147483647
	// char => Takes 1 byte, stores characters based on ASCII values
	// bool => Stores true or false values. 1 Byte
	// float => Used for decimal numbers. Takes 4 bytes
	// double => More precise decimal values. Takes 8 bytes
	// string => Used to store text. Not a primitive type, but used like one
	// void => Means "no value". Used for functions that return nothing

	/*
	string name = "Cavit Batu Soylu";
	int birthYear = 2006;
	float gradeAverage = 3.47;
	double pi = 3.141592267879912;
	bool passedClass = true;
	char letterGrade = 'A';
	int quiz1 = 72, quiz2 = 81;
	//float quizAverage = (float) (quiz1 + quiz2) / 2;
	float quizAverage = (quiz1 + quiz2) / 2;

	cout << "Hello Mr. = " << name << endl;
	cout << "Birth Year = " << birthYear << endl;
	cout << "Numeric Grade Average = " << gradeAverage << endl;
	cout << "Did you pass the class? = " << passedClass << endl;
	cout << "Letter Grade = " << letterGrade << endl;
	cout << "Quiz average = " << quizAverage << endl;

	int x = 10;
	int y = 12;
	int z = 12 % 10; // Modulus operator (remainder of division)
	cout << z << endl;

	return 0;
	*/

	// TO DISPLAY DECIMALS WITH FIXED DIGITS AFTER THE POINT
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main() {

		double value = 123.456789;
		cout << value << endl;

		// setprecision(N) sets the number of significant digits
		cout << setprecision(4) << value << endl;

		// To fix digits after decimal, use 'fixed' with 'setprecision'
		cout << fixed << setprecision(3) << value << endl;
	}
	*/

}
