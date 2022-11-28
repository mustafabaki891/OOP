#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){
    int a = 10, b = 20;
    cout << "once: " <<endl;
    cout <<"a= "<<a<<endl;
    cout <<"b= "<<b<<endl;

    swap(&a,&b);

    cout << "sonra: " <<endl;
    cout <<"a= " <<a<<endl;
    cout <<"b= " <<b<<endl;
    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}