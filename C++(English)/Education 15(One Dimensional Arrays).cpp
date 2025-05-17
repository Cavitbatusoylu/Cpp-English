#include <iostream>
using namespace std;

int main()
{
	/*
	C++ Arrays
	int array[5]; // define an array named 'array'
	array[0] = 12;
	array[1] = 20;
	array[2] = 8;
	array[3] = 45;
	array[4] = 18;
	*/

	int arr[] = { 21, 25, 27 };

	string seasons[] = { "spring", "summer", "autumn", "winter" };

	/*
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << " " << endl;
	}
	*/

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " " << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << seasons[i] << " " << endl;
	}

	cout << endl;
}

// PROGRAMMING QUESTION – ARRAYS 1
/*
	Write a C++ program with the following features:

	- Ask the user to enter 4 exam grades.
	- Store these 4 grades in an array.
	- Calculate the average of the grades in the array.
	- Print the calculated average on the screen.

	int main() {
		const int Size = 3;
		double examGrades[Size]; // define the array
		double total = 0;

		// Get exam grades from the user, store them in the array, and calculate the total
		for (int i = 0; i < Size; i++)
		{
			cout << i + 1 << ". Enter exam grade: ";
			cin >> examGrades[i];
			total = total + examGrades[i];
		}

		// Calculate average
		double average = total / Size;

		// Print result
		cout << "Average of exam grades: " << average << endl;

		return 0;
	}
*/

// PROGRAMMING QUESTION – ARRAYS 2
/*
	- Ask the user to enter 4 exam grades.
	- Assume each exam contributes differently to the overall grade with given percentages.
	Example:
		Exam 1: 15%
		Exam 2: 15%
		Exam 3: 30%
		Exam 4: 40%
	- Store these percentages in an array. (e.g., double examWeights[4] = {0.15, 0.15, 0.3, 0.4};)
	- Store the grades in another array. (e.g., double examGrades[4];)
	- Multiply each grade with its corresponding weight, sum the results and print as "Weighted Average".

	int main() {
		const int Size = 4;
		double examGrades[Size];
		double examWeights[Size] = { 0.15, 0.15, 0.3, 0.4 };
		double weightedTotal = 0;

		for (int i = 0; i < Size; i++)
		{
			cout << i + 1 << ". Enter exam grade: ";
			cin >> examGrades[i];
			weightedTotal = weightedTotal + examGrades[i] * examWeights[i];
		}

		cout << "Weighted average of exam grades: " << weightedTotal << endl;

		return 0;
	}
*/
