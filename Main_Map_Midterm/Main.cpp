#include <iostream>
#include <map>
#include <string>
using namespace std;


class Kitap {
public:
    string kitapAdi;
    string yazarAdi;
    int rafNo;

    Kitap() {
        kitapAdi = "";
        yazarAdi = "";
        rafNo = 0;
    }


    Kitap(string kitapAdi, string yazarAdi, int rafNo) {
        this->kitapAdi = kitapAdi;
        this->yazarAdi = yazarAdi;
        this->rafNo = rafNo;
    }

};


void kitapListele(const map<int, Kitap>& kutuphane) {
    if (kutuphane.empty()) {
        cout << "\nKutuphanede kayitli kitap bulunmuyor!\n";
        return;
    }

    cout << "\n* * * * Kutuphanedeki Kitaplar: * * * *\n";
    /*
    for (auto it = kutuphane.begin(); it != kutuphane.end(); it++) {
        int id = it->first;   // Key
        const Kitap& kitap = it->second;
        cout << "Kitap ID: " << id << " Ad: " << kitap.kitapAdi
            << " Yazar: " << kitap.yazarAdi << " Raf No: " << kitap.rafNo << endl;
    }
    */
    for (const auto& kitapPair : kutuphane) {
        cout << "Kitap ID: " << kitapPair.first
            << ", Kitap Adi: " << kitapPair.second.kitapAdi
            << ", Yazar: " << kitapPair.second.yazarAdi
            << ", Raf No: " << kitapPair.second.rafNo << endl;
    }
}



int main() {
    map<int, Kitap> kutuphane;
    int secim;

    do {
        // Menü
        cout << "\n==== Kutuphane Yonetim Sistemi ====\n";
        cout << "1. Kitap Ekle\n";
        cout << "2. Kitap Bilgilerini Goruntule\n";
        cout << "3. Kitap Sil\n";
        cout << "4. Tum Kitaplari Listele\n";
        cout << "5. Cikis\n";
        cout << "Lutfen seciminizi yapin: ";
        cin >> secim;

        switch (secim) {
        case 1: {
            // Kitap Ekleme
            int kitapID;
            string kitapAdi, yazarAdi;
            int rafNo;
            cout << "\nKitap ID: ";
            cin >> kitapID; 
            cin.ignore();   // en yaygin kullanimi: cin ve getline kombinasyonunda satir sonu karakterini temizler
            cout << "Kitap Adi: ";
            getline(cin, kitapAdi);
            cout << "Yazar Adi: ";
            getline(cin, yazarAdi);
            cout << "Raf No: ";
            cin >> rafNo;
            kutuphane[kitapID] = Kitap(kitapAdi, yazarAdi, rafNo);
            cout << "Kitap basariyla eklendi..\n";
            break;
        }
        case 2: {
            // Kitap Bilgileirni Goruntuleme
            int kitapID;
            cout << "\nBilgilerini goruntulemek istediginiz Kitap ID: ";
            cin >> kitapID;
            auto it = kutuphane.find(kitapID);
            if (it != kutuphane.end()) {
                // Kitap bulundu
                const Kitap& kitap = it->second;
                cout << "Kitap Adi: " << kitap.kitapAdi << ", Yazari: " << kitap.yazarAdi << ", Raf No: "
                     << kitap.rafNo << endl;
            }
            else {
                // kitap bulunamadi ise..
                cout << "Kitap bulunamadi!\n";
            }
            break;
        }
        case 3: {
            // Kitap Silme
            int kitapID;
            cout << "\nSilmek istediginiz Kitap ID: ";
            cin >> kitapID;          
            if (kutuphane.erase(kitapID)) {
                cout << "Kitap basariyla silindi.\n";
                kitapListele(kutuphane);
            }
            else {
                cout << "Kitap bulunamadi!\n";
            }        
            break;
        }
        case 4: {
            // Tum kitaplarý listeleme
            kitapListele(kutuphane);
            break;
        }
        case 5: 
            cout << "\nCikis yapiliyor, Hoscakalin...\n";
            break;
        default: 
            cout << "\nGecersiz bir secim yaptiniz, lkutfen 1-5 arasinda bir deger giriniz..\n";
        }

    } while (secim != 5);


    return 0;
}
