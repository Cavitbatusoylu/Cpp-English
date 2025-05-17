#include <iostream>
using namespace std;

int main()
{
	int x = 5;

	for (int i = 0; i <= 10; i++)
	{
		cout << i << "    ";
		if (i == x)
		{
			break; // simulate a breakpoint condition
		}
	}
}
