#include <iostream>
using namespace std;

// CALL BY VALUE
/*
 * Call by Value is when different memory locations are allocated for the arguments
 * in the calling program or function and their corresponding parameters in the called function.
 */

 // CALL BY REFERENCE
 /*
  * Call by Reference is when the calling program sends the memory address of a value
  * as an argument instead of the value itself.
  */

void changeValue(int& value) {
	value = value * 2;
	cout << "Value: " << value << endl;
}

int main() {
	int number = 5;
	changeValue(number);
	cout << "Number: " << number << endl;
	return 0;
}