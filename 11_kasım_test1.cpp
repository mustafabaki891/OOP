#include<iostream>
using namespace std;

class nokta {
    public:
    int x,y;

    void arttir(int a, int b){
        x = a+5;
        y = b+5;
    }

    void goster(){
        cout << x << ',' << y << endl;
    }
};

int main(){
    nokta n1;
    n1.x = 5;
    n1.y = 7;
    n1.arttir(n1.x,n1.y);
    n1.goster();
    return 0;
}