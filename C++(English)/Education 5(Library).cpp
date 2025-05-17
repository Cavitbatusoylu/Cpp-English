#include <iostream> 
#include <cmath> // cmath library for math functions like pow, floor, ceil, round

using namespace std;

int main()
{
	/*
	pow(a,b) => Used to calculate a raised to the power of b
	floor(a.b) => Rounds the decimal number down (e.g., 2.7 becomes 2)
	ceil(a.b) => Rounds the decimal number up (e.g., 2.1 becomes 3)
	round(a.b) => Rounds to the nearest integer
	*/
	int sonuc, x, y;
	cout << "Lütfen x sayisini giriniz =";
	cin >> x;
	cout << "Lütfen y sayisini giriniz =";
	cin >> y;
	sonuc = pow(x, y);
	cout << "Sonuc";

	int sonuc;
	sonuc = floor(2.7);
	cout << "Sonuc = " << sonuc << endl;

	int sonuc;
	sonuc = ceil(2.7);
	cout << "Sonuc = " << sonuc << endl;

	int sonuc;
	sonuc = round(2.7);
	cout << "Sonuc = " << sonuc << endl;
	return 0;
}

//EXAMPLE PROBLEM
/*
  C++ COMPLEMENTARY CODING EXERCISES

  Take 3 exam scores from the user (scores should be integers)
  Then calculate the average and display it in two ways:

	I) As a double with decimal (2 digits precision)

	II) As an integer with rounding, e.g. 84.5 => 85, 84.49 => 84
*/

#include <iostream>
#include <cmath> 
#include <iomanip> // For controlling decimal precision
using namespace std;

int main() {
	int sinav1, sinav2, sinav3;

	cout << "Lutfen 1.sinav notunu giriniz = " << sinav1 << endl;
	cin >> sinav1;
	cout << "Lutfen 2.sinav notunu giriniz = " << sinav2 << endl;
	cin >> sinav2;
	cout << "Lutfen 3.sinav notunu giriniz = " << sinav3 << endl;
	cin >> sinav3;

	double ortalama = (double)(sinav1 + sinav2 + sinav3) / 3.0;

	// I) Print average as double with 2 digits precision
	cout << "I) Ortalama (ondalikli) =" << fixed << setprecision(2) << ortalama << endl;

	//II) Print rounded average as integer
	int sonuc = (int)round(ortalama);
	cout << "II) Ortalama(yuvarlamali, tamsayi): " << sonuc << endl;
	return 0;
}
