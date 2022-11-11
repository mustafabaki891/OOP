#include<iostream>
using namespace std;

// class ogrenci{
//     public:
//         int ogrNo;
//         string adsoyad;
//         int sinif;

//         void goster(){
//             cout << "Numarasi: " << ogrNo << " Ad Soyad: " << adsoyad << " Sinif: " << sinif << endl;
//         }
// };

// int main(){
//     ogrenci ogr1, ogr2, ogr3;
//     ogr1.ogrNo = 11;
//     ogr1.adsoyad  = "Mustafa Baki";
//     ogr1.sinif = 3;

//     ogr2.ogrNo = 22;
//     ogr2.adsoyad = "ayse fatma";
//     ogr2.sinif = 2;

//     ogr1.goster();
//     ogr2.goster();
// }

class ogrenci{
    public:
        int ogrNo;
        string adsoyad;
        int sinif;

        void goster(){
            cout << "Numarasi: " << ogrNo << " Ad Soyad: " << adsoyad << " Sinif: " << sinif << endl;
        }
};

int main(){
    ogrenci ogr1, ogr2, ogr3;
    ogr1.ogrNo = 11;
    ogr1.adsoyad  = "Mustafa Baki";
    ogr1.sinif = 3;

    ogr2.ogrNo = 22;
    ogr2.adsoyad = "ayse fatma";
    ogr2.sinif = 2;

    ogr1.goster();
    ogr2.goster();
}