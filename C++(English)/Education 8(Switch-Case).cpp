#include <iostream>
using namespace std;

int main()
{
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*      C++ Lessons      *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl;

	int day;
	cout << "Please enter the day of the week as a number = ";  // prompt user input
	cin >> day;  // read user input

	switch (day)
	{
	case 1:
		cout << "Monday";  // Monday
		break;
	case 2:
		cout << "Tuesday";  // Tuesday
		break;
	case 3:
		cout << "Wednesday";  // Wednesday
		break;
	case 4:
		cout << "Thursday";  // Thursday
		break;
	case 5:
		cout << "Friday";  // Friday
		break;
	case 6:
		cout << "Saturday";  // Saturday
		break;
	case 7:
		cout << "Sunday";  // Sunday
		break;
	default:
		cout << "Invalid input, please enter a number between 1 and 7.\n";  // error message
		break;
	}

	return 0;  // end of program
}
