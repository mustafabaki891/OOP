#include <iostream>
using namespace std;

void gonder(int *x , int *y, int *z){
    *x = *x*5;
    *y = *y*10;
    *z = *z*3;
    cout <<"x: "<< *x <<" y: " << *y << " z: " << *z <<endl;
}

int main(){
    int a = 5, b = 7, c = 4;
    gonder(&a,&b,&c);
    cout << "Yeni degerler: "<<endl;
    cout << "a: " <<a<<endl;
    cout << "b: " <<b<<endl;
    cout << "c: " <<c<<endl;
}