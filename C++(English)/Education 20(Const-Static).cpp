#include <iostream>
using namespace std;

// CONST
/*
int main()
{
const double pi = 3.14; // declaration + initialization
const int x = 5;
}
*/

// STATIC VARIABLES
/*
*
*	When a variable is declared as static, memory is allocated for it throughout the lifetime of the program.
	Even if the function is called multiple times, memory for the static variable is allocated only once,
	and the value of the variable from the previous call is carried over to the next function call.
*/
void function1() {
	static int counter = 0;
	static double x = 0;
	counter++;
	x = x + 1.1;
	cout << "function1 counter: " << counter << "  " << x << endl;
}

void function2() {
	static int counter = 0;
	static double x = 0;
	counter++;
	x = x + 1.1;
	cout << "function2 counter: " << counter << "  " << x << endl;
}

int main()
{
	function1();
	function1();
	function1();
	function1();

	cout << endl;
	function2();
	cout << endl;
}