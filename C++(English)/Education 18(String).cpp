// STRING EXPLANATION
/*
					C++ STRING USAGE (ADVANCED)

 1. C-Style String

	The classical string structure used in C before C++.
	C-style strings are represented as a char array (char[])
	and they end with a null character (\0).

 2. Modern C++: Using std::string

	The string class introduced in C++ provides easier and safer text processing.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// C-Style String
	/*
	char mesaj[] = "Merhaba";
	cout << mesaj << endl;

	// Calculate length
	int uzunluk = 0;
	while (mesaj[uzunluk] != '\0') {
		uzunluk++;
	}

	cout << "Length: " << uzunluk << endl;

	// mesaj.append(" C++");
	string yeniMesaj = string(mesaj);
	yeniMesaj.append("C++");
	cout << yeniMesaj << endl;

	string mystr = "Hello";
	mystr.append(" C++");
	cout << mystr << endl;
	*/

	// Modern C++ String
	/*
	string meyve = "elma";

	cout << "Length = " << meyve.length() << endl;
	cout << "First character = " << meyve.at(0) << endl;

	meyve.append(" suyu");
	cout << "Concatenation = " << meyve << endl;

	string yeni = meyve + " guzeldir.";
	cout << "Concatenation = " << yeni << endl;
	// elma suyu guzeldir

	cout << "Pascal (substr) = " << yeni.substr(0, 4) << endl;
	string metin = yeni.substr(5, 4);
	cout << metin << endl;

	size_t pos = yeni.find("suzel");
	if (pos != string::npos)
	{
		cout << "Text found. Position = " << pos << endl;
	}
	else
	{
		cout << "Text not found!\n";
	}

	yeni.erase(5, 5);
	cout << "After erase = " << yeni << endl;
	// elma guzeldir

	yeni.insert(4, " TAZE");
	cout << "After insert = " << yeni << endl;
	// elma TAZE guzeldir

	yeni.replace(0, 4, "portakal");
	cout << "After replace = " << yeni << endl;
	*/

	// Sample Coding Question
/*
	string s = "programlari";

	// C++ programi kodlamak cok zevkli

	s.insert(0, "C++ ");
	s.erase(11, 3);
	s.append(" yazmak cok zevkli");
	s.replace(12, 7, " kodlamak");

	cout << s << endl; // C++ programi kodlamak cok zevkli
	cout << s.substr(0, 10) << endl; // C++ progra
	cout << "Length = " << s.length() << endl; // 33
	cout << "last character = " << s.at(s.length() - 1) << endl; // last character = !
*/
}
