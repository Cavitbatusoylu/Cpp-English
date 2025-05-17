#include <iostream>
using namespace std;

/************************************************************************/
/*																		*/
/* Pointers are a special variable type specific to C/C++ that holds addresses */
/*																		*/
/************************************************************************/

	// POINTERS INTRODUCTION
	/*
	int x = 7;
	int y = 8;

	int* ptr;//int *ptr;// Pointer is a structure that holds an address.
	ptr = &y; // &: address of : address of y   &x = address of x variable
	cout << *ptr << endl;
	*ptr = 9;
	cout << *ptr << endl;
	cout << "y: " << y << endl;

	ptr = &x;
	*ptr = 20;
	cout << "x: " << x << endl;
	return 0;
	*/

	// REINFORCEMENT EXERCISE 1
	/*
	int main() {
	int x = 10;

	int* ptr;
	ptr = &x; //address of x

	cout << "Address of x variable: " << &x << endl;
	cout << "Address held in ptr pointer: " << ptr << endl;
	return 0;
	}
	*/

	// REINFORCEMENT EXERCISE 2
	/*
int calculateAircraftOrientationInfo(int x_) {
	// Imagine this contains many lines of mathematical calculations...
	x_ = 34;
	return x_;
}

void calculateAircraftOrientationInfo(int* p) {
	// Imagine this contains many lines of mathematical calculations...
	*p = 34;
}

// vxworks integrity : real time OS C/C++

int main() {

	int x = 10;

	//x = calculateAircraftOrientationInfo(x);
	int* p;
	p = &x;
	for (int i = 0; i < 100000; i++)
	{
		calculateAircraftOrientationInfo(p);
	}

	cout << "New orientation info: " << x << endl;
	return 0;
}
*/

// RELATIONSHIP BETWEEN POINTERS AND ARRAYS
/*
int main() {

	double arr[] = { 8, 12, 20 };

	double* p;
	p = arr;

	cout << p << endl;
	cout << arr << endl;
	// Both hold the same address

	*(p + 2) = *(p+2) * 2;
	//cout << arr[1] << endl;
	cout << *(p+1) << endl;
	cout << "arr[2]: " << arr[2] << endl;

	cout << "Addresses - advanced extra info:\n";
	cout << p << endl;
	cout << (p + 1) << endl;

	return 0;
}
*/

// Interview Exam Question
/*
int main() {

	// What will be the output of this code?
	int x = 7;
	int* p = &x;
	int y = *p + 8;
	int* z = &y;
	int w = *z + 5;
	cout << w;
}
*/