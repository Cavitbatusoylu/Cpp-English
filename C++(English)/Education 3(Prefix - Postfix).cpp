#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//POSTFIX
	/*
	int x = 7;
	// x = x + 1;
	x++; // Artýrma Operatörü (Postfix)

	int y = 10;
	// y = y - 1;
	y--; // Azaltma Operatörü (Postfix)
	*/

	//PREFIX
	/*
	int x = 7;
	++x;

	int y = 10;
	--y;
	*/

	// Prefix (++x ve --x) ile Postfix (x++ ve x--) Arasýndaki Fark
	//POSTFIX
	/*
	// 1.Postfix (x++) => ++ veya -- deððiþkeninin saðýndaysa buna postfix denir
	//
	// Deðiþkenin önceki deðeri kullanýlýr, ardýndan deðeri 1 artýrýlýr
	// Ör.
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
	// 2.Prefix (++x) => ++ veya -- deðiþkenin solundaysa buna prefix denir
	//
	// Deðiþkenin deðeri önce artýrýlýr, ardýndan kullanýlýr
	// Ör.
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
	(Sonuç = 22)
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
	(Sonuç x = 10, y = 10, z = 15)
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
	(Sonuç x = 4, y = 9)
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
	(Sonuç x = 9, y = 81)
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
	(Sonuç x = 9, y = 99)
	*/
	return 0;
}