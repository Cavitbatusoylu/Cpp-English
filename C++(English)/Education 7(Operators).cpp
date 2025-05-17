#include <iostream>
using namespace std;

// OPERATOR APPLICATIONS
/*
int main()
{
	/*int x = 1234;
	int y = 222;

	if (x == y)
	{
		cout << "Correct Password";
	}
	else
	{
		cout << "Wrong Password";
	}

	/*int x = 1234;
	int y = 222;

	if (x != y)
	{
		cout << "Wrong Password";
	}
	else
	{
		cout << "Correct Password";
	}


	/*int num1, num2;
	cout << "Enter 1st number = ";
	cin >> num1;
	cout << "Enter 2nd number = ";
	cin >> num2;

	if (num1 > 0 && num2 > 0)
	{
		cout << "Both numbers are positive\n";
	}
	else if (num1 < 0 && num2 < 0)
	{
		cout << "Both numbers are negative\n";
	}
	else if (num1 < 0 || num2 < 0)
	{
		cout << "One of the numbers is negative\n";
	}

	/*
	int x = 5;
	if (!(x != 5))
	{
		cout << "Any message\n";
	}
	return 0;

}
*/

// PROGRAMMING EXAM QUESTION
/*
int main()
{
	// Write a program to find the smallest of three integers entered by the user

	int num1, num2, num3;
	cout << "Enter 1st number = ";
	cin >> num1;
	cout << "Enter 2nd number = ";
	cin >> num2;
	cout << "Enter 3rd number = ";
	cin >> num3;

	// Find the smallest number
	int smallest;
	if (num1 <= num2 && num1 <= num3)
	{
		smallest = num1;
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		smallest = num2;
	}
	else
	{
		smallest = num3;
	}

	cout << "Smallest number = " << smallest << endl;
	return 0;
}
*/

// OPERATOR OVERLOADING (CHAPTER 27)
/*
class Complex {
private:
	double real, imag;

public:
	Complex(double r = 0, double i = 0) {
		real = r;
		imag = i;
	}

	// OPERATOR OVERLOADING USING MEMBER FUNCTION
	// Overload + operator
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}

	// Overload - operator
	Complex operator-(const Complex& other) {
		return Complex(real - other.real, imag - other.imag);
	}

	// Overload * operator
	Complex operator*(const Complex& other) {
		return Complex(
			real * other.real - imag * other.imag,  // Real part
			real * other.imag + imag * other.real   // Imaginary part
		);
	}

	// OPERATOR OVERLOADING USING GLOBAL FUNCTION
	// Overload << operator
	friend ostream& operator<<(ostream& os, const Complex& c) {
		os << c.real << " + " << c.imag << "i";
		return os;
	}

	void display() {
		cout << real << " + " << imag << "i" << endl;
	}
};

int main() {
	Complex c1(1.5, 2.5);
	Complex c2(3.5, 4.5);
	Complex c3 = c1 * c2;

	//c3.display();
	cout << c3;

	return 0;
}
*/

// OPERATOR OVERLOADING
/*
Write a C++ program to satisfy the following requirements:

1. Create a class named Square. This class should store the side length (side) of the square.

2. Overload the + operator to add the side lengths of two square objects and return a new square object.

3. Overload the << operator to print the side length and area of a square object.

4. In main(), create at least two square objects, add them, and print all objects using cout.
The program output should include each square's side length and area.

#include <iostream>
using namespace std;

class Square {
private:
	double side;

public:
	// Constructor
	Square(double s = 0) {
		side = s;
	}

	// Overload + operator: adds side lengths of two squares
	Square operator+(const Square& other) {
		return Square(side + other.side);
	}

	// Overload << operator as friend => usage example: cout << square;
	friend ostream& operator<<(ostream& os, const Square& s) {
		os << "Side Length = " << s.side << ", Area = " << (s.side * s.side);
		return os;
	}
};

int main() {
	Square s1(5);
	Square s2(3);

	Square s3 = s1 + s2;

	cout << s3 << endl;

	return 0;
}
*/
