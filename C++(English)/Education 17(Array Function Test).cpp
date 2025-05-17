#include <iostream>
using namespace std;

// USING ARRAYS AS FUNCTION PARAMETERS
/*
void diziDegistir(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] + 1;
	}
}

void sayiyiDegistir(int sayi)
{
	sayi = sayi + 1;
}

int main()
{
	/*
		int dizi[] = { 3, 6, 9, 12, 5, 10, 1, 3 };

		diziDegistir(dizi, 7);

		for (int i = 0; i < 7; i++)
		{
			cout << dizi[i] << "  ";
		}


	int sayi = 10;
	sayiyiDegistir(sayi);
	cout << sayi;
}
*/

// EXAMPLE CODING QUESTION
/*
// Get 4 integers from the user and print them in reverse order.
// For example:
// Input: 7 1 2 9
// Output: 9 2 1 7

int main()
{
	cout << "Enter numbers = ";
	int dizi[4];
	for (int i = 0; i < 4; i++)
	{
		cout << i << ". Enter number = ";
		cin >> dizi[i];
	}

	for (int i = 3; i >= 0; i--)
	{
		cout << dizi[i] << "  ";
	}
	return 0;
}
*/

// EXAMPLE TEST QUESTION
/*int ortalamaUzeriNotlar(int notlar[], int uzunluk)
{
	int toplam = 0;
	for (int i = 0; i < uzunluk; i++)
	{
		toplam += notlar[i];
	}
	int ortalama = toplam / uzunluk;

	int sayac = 0;
	for (int i = 0; i < uzunluk; i++)
	{
		if (notlar[i] > ortalama)
		{
			++sayac;
		}
	}
	return sayac;
}

int main()
{
	int notlar[] = { 85,78,90,66,88,72,95,80,84,77 };
	int sonuc = ortalamaUzeriNotlar(notlar, 10);
	cout << "Grades above average: " << sonuc << " items" << endl;
}*/
