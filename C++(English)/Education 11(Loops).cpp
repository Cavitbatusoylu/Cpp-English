#include <iostream>
using namespace std;

int main()
{
	// WHILE
	/*
		WHILE LOOP:

		Continues as long as a predefined condition holds.
		After each condition check, the block runs once.
		The loop terminates when the condition fails.

		while(condition)
		{
			// process 1
			// process 2
			// ...
		}


	int index = 0;

	while (index <= 3)
	{
		cout << "index value is less than 3! ";
		index = index + 1; // index++;
	}

	cout << "index = " << index;

	cout << endl << "End of program...\n";



	// TASK:
	// Get 2 numbers from the user, name them as start and end.
	// Print all numbers between start and end that are divisible by 7.
	// Example:
	// Start = 12
	// End = 23
	// Output: 14 21

	int start, end, index;
	cout << "Enter the starting value = ";
	cin >> start;
	cout << "Enter the ending value = ";
	cin >> end;

	// start = 12, end = 23
	index = start;
	while(index <= end)
	{
		// check if index is divisible by 7
		// % is the modulus operator => 14 % 7 = 0
		if(index % 7 == 0)
		{
			cout << index << " ";
		}
		index++;
	}
	*/

	// DO WHILE
	/*
	int password = 1234;
	int input;

	do
	{
		cout << "Please enter the password = ";
		cin >> input;
	} while (input != password);
	cout << "Welcome to SkyNet!\n";
	*/

	// FOR
	/*
		The for loop is used to repeat a block of code a certain number of times.

	// Print even numbers from 1 to 10 using a for loop
	// for (initialization; condition; increment/decrement) {
	// ...
	// }

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;
	*/

	// PROGRAMMING EXAM QUESTION
	/*
	// Write a C++ program to calculate the factorial of a number entered by the user

	// 3! = 3*2*1 = 6
	// 4! = 4*3*2*1 = 24

	int number, result;
	cout << "Please enter a number = ";
	cin >> number;
	result = 1;

	for (int i = 1; i <= number; i++)
	{
		result = i * result;
	}

	cout << number << " factorial = " << result << endl;
	*/

	// C++ Exam Question
	/*
	// Write a program that prints the following pattern based on a number entered by the user:

	// Please enter a number = 4
	// 1
	// 2 2
	// 3 3 3
	// 4 4 4 4

	int number;
	cout << "Please enter a number = ";
	cin >> number;

	for (int j = 1; j <= number; j++)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	*/
}
