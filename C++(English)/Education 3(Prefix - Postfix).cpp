#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//POSTFIX
	/*
	int x = 7;
	// x = x + 1;
	x++; // Art�rma Operat�r� (Postfix)

	int y = 10;
	// y = y - 1;
	y--; // Azaltma Operat�r� (Postfix)
	*/

	//PREFIX
	/*
	int x = 7;
	++x;

	int y = 10;
	--y;
	*/

	// Prefix (++x ve --x) ile Postfix (x++ ve x--) Aras�ndaki Fark
	//POSTFIX
	/*
	// 1.Postfix (x++) => ++ veya -- de��i�keninin sa��ndaysa buna postfix denir
	//
	// De�i�kenin �nceki de�eri kullan�l�r, ard�ndan de�eri 1 art�r�l�r
	// �r.
	int x = 7;
	int y = x++;
	cout << "x: " <<  x << endl;(7)
	cout << "y: " <<  y << endl;(8)

	int x = 7;
	int y = x--;
	cout << "x: " <<  x << endl;(7)
	cout << "y: " <<  y << endl;(6)
	*/

	//PREFIX
	/*
	// 2.Prefix (++x) => ++ veya -- de�i�kenin solundaysa buna prefix denir
	//
	// De�i�kenin de�eri �nce art�r�l�r, ard�ndan kullan�l�r
	// �r.
	int x = 7;
	int y = ++x;
	cout << "x: " <<  x << endl;(8)
	cout << "y: " <<  y << endl;(8)

	int x = 7;
	int y = --x;
	cout << "x: " <<  x << endl;(6)
	cout << "y: " <<  y << endl;(6)
	*/

	//PROGRAMLAMA SINAV SORUSU 1
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main(){

		int x = 11;
		int y = x--;
		int z = 2 * y--;
		cout << "z: " << z << endl;
		return 0;
	}
	(Sonu� = 22)
	*/

	//PROGRAMLAMA SINAV SORUSU 2
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main(){

		int x = 11;
		int y = x--;
		int z = 5 + --y;
		cout <<"x: " << x << "y: " << y << "z: " << z << endl;
		return 0;
	}
	(Sonu� x = 10, y = 10, z = 15)
	*/

	//PROGRAMLAMA SINAV SORUSU 3
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main(){

		int x = 2;
		int y = ++x * x++;
		cout << x << " , " << y;
		return 0;
	}
	(Sonu� x = 4, y = 9)
	*/

	//PROGRAMLAMA SINAV SORUSU 4
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main(){

		int x = 7;
		int y = ++x * ++x;
		cout << x << " , " << y;
		return 0;
	}
	(Sonu� x = 9, y = 81)
	*/

	//PROGRAMLAMA SINAV SORUSU 5
	/*
	#include <iostream>
	#include <iomanip>
	using namespace std;

	int main(){

		int x = 7;
		int y = x * 2 + ++x * ++x;
		cout << x << " , " << y;
		return 0;
	}
	(Sonu� x = 9, y = 99)
	*/
	return 0;
}