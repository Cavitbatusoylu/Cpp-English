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
	
	
	// ALGORTÝMA GELÝÞTÝRME
	// 
	// Kullanýcýdan bir tamsayý deðeri alýnýz.
	// 1'den Kullanýcýnýn girdiði sayýya kadar tüm Asal Sayýlarý bulunuz.
	//
	// Örn. Kullanýcý 100 girdiyse:
	// Asal sayýlar: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
	//               43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89 ve 97

	int sayi;
	cout << "Lütfen sayý giriniz: ";
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
			  << "[µs]" << std::endl;


	// Bir sayý sadece kendisine ve 1'e bölünebiliyorsa baþka sayýya bölünemiyorsa asaldýr!
	// Bir sayýnýn kalansýz bölünebildiði sadece 2 sayý varsa asaldýr, aksi takdirde deðildir!
	// 1, 2, 3, 4, 5, 6, 7, 8, ...
	

	cout << endl;
	return 0;
}

