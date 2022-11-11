#include<iostream>
using namespace std;

class oda {
    private:
        int en, boy, yukseklik;
        int alan, hacim;
    public:
        void alanhesap(int a, int b){
            if(a<=0)
                cout << "Hatali Giris." << endl;
            else {
                en = a;
                boy = b;
                alan = en*boy;
            }
        }

        void hacimhesap(int a, int b, int c){
            en = a;
            boy = b;
            yukseklik = c;
            hacim = en*boy*yukseklik;
        }

        void goster(){
            cout << " Alan: " << alan << " Hacim: " << hacim <<endl;
        }

};

int main(){
    oda oda1;
    oda1.alanhesap(5,4);
    oda1.hacimhesap(5,4,2);
    oda1.goster();
    return 0;
}