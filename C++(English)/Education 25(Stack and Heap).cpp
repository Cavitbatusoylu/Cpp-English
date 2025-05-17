#include <iostream>
using namespace std;

// WHAT ARE STACK AND HEAP MEMORY? WHAT ARE THE DIFFERENCES BETWEEN THEM?
	/*
	MEMORY MANAGEMENT
	•For Stack => automatic
	•For Heap => manual

	USAGE
	•Stack => local variables
	•Heap => variables allocated with new

	DELETION FROM MEMORY
	•Stack => automatic
	•Heap => manual with delete
	*/

	// CODE EXAMPLE
	/*
	int main() {

		int x, y;
		int z = 10;

		int* p = new int(5);
		delete p; // Release the heap memory region at address 1005

		int w = 20;
		p = &w;
		cout << *p << endl;

		return 0;
	}
	*/

	// INTERVIEW EXAM
	/*
	void exampleFunction() {
		int a = 10;
		float b = 5.5;
		int* ptr1 = new int(20);
		char c = 'X';
		double* ptr2 = new double(7.8);

		delete ptr1;
		delete ptr2;
	}

	int main() {
		exampleFunction();
		return 0;
	}
	*/