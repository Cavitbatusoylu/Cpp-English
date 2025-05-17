#include <iostream>
using namespace std;

int main()
{
	// WHAT WILL BE THE VALUE OF W AFTER RUNNING EACH OF THESE CODE BLOCKS?

	/*
	int x = 5, y = 9, z = 7.4, w;
	w = (z > x) - (y <= 11); // comparison and subtraction
	cout << w; // output result
	*/

	int x = 5, y = 9, z = 7.4, w;
	w = z > x - y <= 11; // compound logical comparison
	cout << w; // output result
}
