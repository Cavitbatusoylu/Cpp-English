#include <iostream>
#include <chrono>

/* Visual Studio 2022 C++ Dersleri  */
using namespace std;
int main() {
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*      C++ Dersleri     *" << endl;
	cout << "*                       *" << endl;
	cout << "* * * * * * * * * * * * *" << endl << endl << endl;
	
	
	// ALGORT�MA GEL��T�RME
	// 
	// Kullan�c�dan bir tamsay� de�eri al�n�z.
	// 1'den Kullan�c�n�n girdi�i say�ya kadar t�m Asal Say�lar� bulunuz.
	//
	// �rn. Kullan�c� 100 girdiyse:
	// Asal say�lar: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
	//               43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 ve 97

	int sayi;
	cout << "L�tfen say� giriniz: ";
	cin >> sayi;

	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	for (int i = 1;i <= sayi;i++) 
	{
		int sayac = 0;
		for (int j = 1;j <= i;j++) 
		{
			if (i % j == 0)
				sayac++;
			if (sayac > 2)
				break;
		}

		if (sayac == 2)
			cout << i << ", ";
	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	std::cout << "Time difference = " 
			  << chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
			  << "[�s]" << std::endl;


	// Bir say� sadece kendisine ve 1'e b�l�nebiliyorsa ba�ka say�ya b�l�nemiyorsa asald�r!
	// Bir say�n�n kalans�z b�l�nebildi�i sadece 2 say� varsa asald�r, aksi takdirde de�ildir!
	// 1, 2, 3, 4, 5, 6, 7, 8, ...
	

	cout << endl;
	return 0;
}

