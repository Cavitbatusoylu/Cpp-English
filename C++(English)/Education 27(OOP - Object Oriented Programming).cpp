#include <iostream>
using namespace std;

// Class and Object Creation
class Car {
public:
	string color;
};


int main()
{
	Car car1;
	Car car2, car3;

	car1.color = "black";
	car2.color = "blue";
	car3.color = "yellow";

	cout << "car1 color: " << car1.color << endl;
	cout << "car2 color: " << car2.color << endl;
	cout << "car3 color: " << car3.color << endl;

	cout << endl;
	return 0;
}