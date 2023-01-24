#include <iostream>
using namespace std;

class ogrenci{
    public:
    string isim; int no;
    ogrenci(){
        isim = "x"; no = 0;
    }
    ogrenci(string s, int n){
        isim = s; no = n;
    }
    void yazdır(){
    cout<< "isim: " << o1.isim << " numara: " << o1.no << endl;
    }
};

int main (){
    ogrenci o1;
    cout<< "isim: " << o1.isim << " numara: " << o1.no << endl;
    ogrenci o2;
    cout<< "isim: " << o2.isim << " numara: " << o2.no << endl;
    return 0;
}