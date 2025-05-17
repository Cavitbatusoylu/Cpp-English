#include <iostream> 
using namespace std;

int main()
{
    string isim; // text variable
    int en, boy, alan; // integer variables

    cout << "Lutfen adinizi giriniz = "; // prompt for user name
    cin >> isim; // read user input

    cout << "Merhaba" << isim << "Geometrik Hesaplama Programina Hosgeldin" << endl;

    cout << "Lutfen dikdortgenin enini giriniz"; // prompt for width
    cin >> en;

    cout << "Lutfen dikdortgenin boyunu giriniz"; // prompt for height
    cin >> boy;

    alan = en * boy; // calculate area

    cout << "Sayin" << isim << "isleminizin sonucu = " << alan << endl;

    return 0;
}
