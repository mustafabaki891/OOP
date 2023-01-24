#include <iostream>
using namespace std;

class nokta{
    public:
        int x,y;
        int *z;
        nokta(){
            x = 10; y = 10;
            cout <<"parametresiz calisti"<<endl;
            cout << "x: " << x << " y: " << y << endl;
        }
        nokta(int a, int b){
            x = a; y = b;
            cout << "x: " << x << " y: " << y << endl;
            cout << "Parametreli Yapici calisti" << endl;
        }
        ~nokta(){
            delete []z;
            cout << "yikici calisti" <<endl;
        }
};

int main(){
    nokta *n1;
    nokta n2(5,10);
    delete[] n1;
    return 0;
}
