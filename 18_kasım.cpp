#include<iostream>
using namespace std;

 class ogrenci{
     public:
         int ogrNo;
         string adsoyad;
         int sinif;
         int vize;
         int final;
         int ort;

         void goster(){
            cout << "Numarasi: " << ogrNo << " Ad Soyad: " << adsoyad << " Sinif: " << sinif << " Vize: " << vize << " Final: " << final << endl;
        }
        void ortalama(){
            ort = vize * 0.4 + final * 0.6;
            cout << " ort: " << ort << endl;
        }
 };


 int main(){
    ogrenci ogr1;
    ogr1.ogrNo = 21075;
    ogr1.adsoyad  = "Mustafa Baki";
    ogr1.sinif = 3;
    ogr1.vize = 65;
    ogr1.final = 100;

    ogr1.goster();
    ogr1.ortalama();

}