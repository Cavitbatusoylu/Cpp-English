#include <iostream>
//#include <chrono>

/* Visual Studio 2022 C++ Lessons */
using namespace std;
int main() {
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "* *" << endl;
	cout << "* C++ Lessons      *" << endl;
	cout << "* *" << endl;
	cout << "* * * * * * * * * * * * *" << endl << endl << endl;


	// ALGORITHM DEVELOPMENT EXAMPLE
	/*
		// Get an integer value from the user.
		// Find all Prime Numbers from 1 up to the number entered by the user.
		//
		// Example: If the user enters 100:
		// Prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
		//                43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, and 97
		int number;
		cout << "Please enter a number: ";
		cin >> number;

		chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
		for (int i = 1; i <= number; i++)
		{
			int counter = 0;
			for (int j = 1; j <= i; j++)
			{
				if (i % j == 0)
					counter++;
				if (counter > 2)
					break;
			}

			if (counter == 2)
				cout << i << ", ";
		}
		chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

		std::cout << "Time difference = "
			<< chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
			<< "[µs]" << std::endl;


		// A number is prime if it is only divisible by itself and 1, and not divisible by any other number!
		// A number is prime if it has exactly 2 divisors, otherwise it is not!
		// 1, 2, 3, 4, 5, 6, 7, 8, ...


		cout << endl;
		return 0;
	}
		*/

		// MIDTERM INTERVIEW EXAM QUESTION 1
		/*
			Write a C++ program that finds and prints how many 4-digit integers
			have distinct digits.
			Example: 1000 => Digits are not distinct
					 1023 => Digits are distinct



		//1000 - 9999
		int counter = 0;
		int unitsDigit, tensDigit, hundredsDigit, thousandsDigit;
		for (int i = 1000; i < 9999; i++)
		{
			//1234
			unitsDigit = i % 10; //4
			tensDigit = (i / 10) % 10; //3
			hundredsDigit = (i / 100) % 10; //2
			thousandsDigit = i / 1000; //1

			if (unitsDigit != tensDigit && unitsDigit != hundredsDigit && unitsDigit != thousandsDigit &&
				tensDigit != hundredsDigit && tensDigit != thousandsDigit && hundredsDigit != thousandsDigit)
			{
				counter = counter + 1;
			}
		}
		cout << "There are " << counter << " numbers with distinct digits between 1000-9999" << endl;
		cout << endl;
		return 0;
		*/

		// MIDTERM INTERVIEW EXAM QUESTION 2
		/*
			Write a program that finds and prints all divisors of the numbers
			between 20 and 40.

			Example: Divisors of 20: 1, 2, 4, 5, 10, 20


		for (int i = 20; i < 40; i++)
		{
			cout << "Divisors of " << i << " = " << endl;
			for (int j = 1; j < i; j++) // Fixed the loop to start from 1 to avoid division by zero
			{
				if (i % j == 0)
					cout << j << ", ";

			}
			cout << endl;
		}

		cout << endl;
		return 0;
		*/
}