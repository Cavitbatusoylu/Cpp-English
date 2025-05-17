#include <iostream>
using namespace std;

int main()
{
	int dividend, divisor;
	cout << "Please enter the dividend: ";
	cin >> dividend;
	cout << "Please enter the divisor: ";
	cin >> divisor;

	int result;
	// Try Catch
	/*
	try {
		if (divisor == 0)
			throw 99;
		result = dividend / divisor;
		cout << "Result: " << result << endl;
	}
	catch (int errorCode) {
		cout << "The divisor cannot be 0!" << endl;
	}
	*/

	cout << endl;
	return 0;
}