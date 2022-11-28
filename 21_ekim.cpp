#include <iostream>
using namespace std;

int main()
{
    /*
    int a = 8;
    int *ptr;
    ptr = &a;
    cout << "a degeri: " << a << endl;
    cout << "a adresi: " << &a << endl;
    cout << "a: " << *ptr << endl;
    */

    int dizi[] = {11,22,33,44,55};
    int *ptr = &dizi[0];
    cout << "dizinin adresi: " << ptr << endl; 
    //cout << "1.eleman: " << *ptr << endl;
    for (int i = 1; i<6; i++){
        cout << i << ". eleman: "<< *ptr <<endl;
        ptr++;
    }
    return 0;
}